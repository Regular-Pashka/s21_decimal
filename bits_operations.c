#include "s21_decimal.h"
/*
    ЗАДАЧИ:
    1. Разберись с выводом
    2. Посмотри лекцию мадам в очках
    3. Начни писать конвертеры.
*/

void print_decimal(s21_decimal num) {
  char sign;
  // printf(RED);
  sign = s21_get_sign(num) ? '-' : '+';
  printf("Sign: %c\n\n", sign);
  // printf("\e[0;35m");

  // printf("Scale:\n\n");
  print_binary_last_int(num.bits[3]);
  printf("\n\n");
  for (int i = 2; i >= 0; i--) {
    print_binary_mantiss(num.bits[i]);
    printf("\n\n");
  }
}

void null_decimal_last_bits(s21_decimal *num) {
  int mask = 0b11111111 << 16;
  num->bits[3] &= mask;
}

void print_binary_last_int(int num) {
  printf(RED);
  printf("%d", (num >> 31) & 0b1);
  printf(WHITE);
  for (int i = 30; i >= 24; i--) {
    printf("%d", (num >> i) & 0b1);
  }
  printf(GREEN);
  for (int i = 23; i >= 16; i--) {
    printf("%d", (num >> i) & 0b1);
  }
  printf(WHITE);
  for (int i = 15; i >= 0; i--) {
    printf("%d", (num >> i) & 0b1);
  }
}

void print_binary_mantiss(int num) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (num >> i) & 0b1);
  }
}

int s21_is_zero(s21_decimal num) {
  int result = 0;
  if (num.bits[0] == 0 && num.bits[2] == 0 && num.bits[1] == 0) {
    result = 1;
  }
  return result;
}

int s21_get_scale(s21_decimal num) {
  int result;
  int mask = 0b11111111 << 16;
  result = (num.bits[3] & mask) >> 16;
  return result;
}

int s21_get_sign(s21_decimal num) { return s21_get_bit(num, 127); }

void s21_set_scale(s21_decimal *num, int scale_val) {
  int sign = s21_get_sign(*num);
  num->bits[3] = 0b0;
  num->bits[3] |= (scale_val << 16);
  s21_set_sign(num, sign);
}

int s21_get_bit(s21_decimal num, int ind) {
  int result = -1;
  // -1 - код ошибки
  // эта функция только для работы с обычным децималом, для биг децимала будет
  // другая функция
  if (ind >= 0 && ind <= 127) {
    int mask = 0b1 << ind;
    result = num.bits[ind / 32] & mask;
    result = result != 0 ? 1 : 0;
  }
  /*
      бит должен быть от 0 до 127 включительно(возможно до 95, нужно понять
     почему)

      1. Изучи как понять где какой бит, информация была в теоретической лекции
     от бородатого паренька - DONE
      2. Нужно узнать, нужно ли обрабатывать сумашедший индекс(>127) в этой
     функции. Почему-то кажется что нет. - для биг децимала будет отдельная
     функция если понадобится
  */
  return result;
}

void s21_set_bit(s21_decimal *num, int ind, int val) {
  int mask = 0b1 << ind;
  int bits_ind = ind / 32;
  if (val > 0) {
    num->bits[bits_ind] |= mask;
  } else {
    num->bits[bits_ind] &= num->bits[bits_ind] & (~mask);
  }
}

void s21_set_sign(s21_decimal *num, int sign_val) {
  s21_set_bit(num, 127, sign_val);
}