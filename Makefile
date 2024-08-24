CC= gcc
FLAGS= -Wall -Wextra -Werror -std=c11 -g
GCOV= -fprofile-arcs -ftest-coverage
INFO= coverage.info
LINUX_FLAGS=-lsubunit -lrt -lpthread -lm
LIBS=-lcheck

OS := $(shell uname -s)

ifeq ($(OS),Linux)
	OPEN_CMD = xdg-open
endif
ifeq ($(OS),Darwin)
	OPEN_CMD = open
endif

all: clean s21_decimal.a test gcov_report

style:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -i ./arithmetic/*.c *.h
	clang-format -i ./comparison/*.c *.h
	clang-format -i ./other/*.c *.h
	clang-format -i ./converters/*.c *.h
	clang-format -i ./tests/*.c *.h
	clang-format -i ./*.c ./*.h
	rm -f .clang-format

s21_decimal.a:
	$(CC) $(FLAGS) -c ./bits_operations.c ./arithmetic/*.c ./comparison/*.c ./other/*.c ./converters/*.c
	ar rc s21_decimal.a *.o
	ranlib s21_decimal.a
	rm -rf *.o

test: clean
ifeq ($(OS), Darwin)
	$(CC) $(FLAGS) -o s21_decimal_test ./bits_operations.c ./arithmetic/*.c ./comparison/*.c ./other/*.c ./converters/*.c ./tests/test_s21_all.c $(LIBS)
else
	$(CC) $(FLAGS) -o s21_decimal_test ./bits_operations.c ./arithmetic/*.c ./comparison/*.c ./other/*.c ./converters/*.c ./tests/test_s21_all.c $(LIBS) $(LINUX_FLAGS)
endif
	./s21_decimal_test

te: clean s21_decimal.a
	$(CC) $(FLAGS) -o test me.c s21_decimal.a
	./test

gcov_report:
ifeq ($(OS), Darwin)
	$(CC) $(FLAGS) $(GCOV) -o gcov_main ./bits_operations.c ./arithmetic/*.c ./comparison/*.c ./other/*.c ./converters/*.c ./tests/test_s21_all.c $(LIBS)
else
	$(CC) $(FLAGS) $(GCOV) -o gcov_main ./bits_operations.c ./arithmetic/*.c ./comparison/*.c ./other/*.c ./converters/*.c ./tests/test_s21_all.c $(LIBS) $(LINUX_FLAGS)
endif
	./gcov_main
	lcov --capture --directory . --output-file coverage.info 
	genhtml coverage.info --output-directory out 
	open out/index.html
	
clean_gcov:
	rm -rf *.gcda *.gcno *.info
clean:
	rm -rf res_leak.txt *.out *.gcda *.gcno *.info *.a *.dSYM gcov_main s21_decimal_test coverage test

open:
	$(OPEN_CMD) coverage/index.html

valgrind: test
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=res_leak.txt ./s21_decimal_test