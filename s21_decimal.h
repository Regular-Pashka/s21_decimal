#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H
#define RED "\033[0;31m"
#define WHITE "\033[0m"
#define GREEN "\e[0;32m"
// #include <check.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S21_INFINITY 1.0 / 0.0
#define MAX 79228162514264337593543950335.0F
#define MIN -79228162514264337593543950335.0F

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[7];
} s21_big_decimal;

//
// int s21_from_float_to_decimal(float src, s21_decimal *dst);
// int s21_get_mantiss_from_float(char *string);
// int s21_get_scale_from_float(char *str);
// int s21_from_int_to_decimal(int src, s21_decimal *dst);
//

void s21_div10(s21_decimal src, s21_decimal *result);

int s21_is_zero(s21_decimal num);
int s21_get_scale(s21_decimal num);
int s21_get_sign(s21_decimal num);
void s21_set_scale(s21_decimal *num, int scale_val);
int s21_get_bit(s21_decimal num, int ind);
void s21_set_bit(s21_decimal *num, int ind, int val);
void s21_set_sign(s21_decimal *num, int sign_val);
void print_binary_mantiss(int num);
void print_binary_last_int(int num);
void print_decimal(s21_decimal num);
void null_decimal_last_bits(s21_decimal *num);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

// for arithmetics
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
void s21_parse_add(s21_big_decimal value_1_temp, s21_big_decimal value_2_temp,
                   s21_big_decimal *result_temp, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result);
void s21_set_result_zero_big_decimal(s21_big_decimal *result);
void s21_set_value_zero(s21_decimal *value);
void s21_normalize_add_modules(s21_big_decimal *value_1,
                               s21_big_decimal *value_2, s21_decimal *result,
                               int scale_1, int scale_2);
int s21_round_result(s21_decimal *result, s21_big_decimal value);
void s21_add_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
void s21_sub_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
int s21_is_greater_or_equall_modules(s21_big_decimal value_1,
                                     s21_big_decimal value_2);
void s21_normalize(s21_big_decimal *value, int scale_diff);
int s21_is_greater_modules(s21_big_decimal value_1, s21_big_decimal value_2);
void s21_mul_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
int s21_bits_len(s21_big_decimal value);
void s21_truncate_modules(s21_big_decimal *value, int scale);
void s21_neg(s21_big_decimal *value);
int s21_is_equal_modules(s21_big_decimal value_1, s21_big_decimal value_2);
void s21_truncate_nulls(s21_big_decimal *value, s21_decimal *result);
int s21_rounding_fractions(s21_decimal *value, int bits, int method);
int s21_rounding(s21_big_decimal *value, s21_decimal *result, int bits,
                 int method);
void s21_lshift(s21_big_decimal *value);
void s21_rshift(s21_big_decimal *value);
void s21_div_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
void s21_mod_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
s21_big_decimal s21_lshift_out(s21_big_decimal value);
void s21_set_big_decimal_bit_1(s21_big_decimal *value, int pos);
int s21_is_less_modules(s21_big_decimal value_1, s21_big_decimal value_2);
int s21_div(s21_decimal value_1, s21_decimal value_2,
            s21_decimal *result);  // div
void s21_parse_div(s21_big_decimal tmp_val_1, s21_big_decimal tmp_val_2,
                   s21_big_decimal *tmp_res, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result);
void s21_normalize_div_modules(s21_big_decimal *value_1,
                               s21_big_decimal *value_2, s21_decimal *result,
                               int scale_1, int scale_2);
void s21_div_parsing(s21_big_decimal const_null, s21_big_decimal val,
                     s21_big_decimal *mod, s21_big_decimal *res,
                     s21_decimal *result);
void s21_parse_mul(s21_big_decimal tmp_val_1, s21_big_decimal tmp_val_2,
                   s21_big_decimal *tmp_res, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result);  // mul
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2,
            s21_decimal *result);  // sub
void s21_parse_sub(s21_big_decimal tmp_val_1, s21_big_decimal tmp_val_2,
                   s21_big_decimal *tmp_res, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result);

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);
int s21_is_rounding_up(s21_decimal value);
int s21_short_fraction(s21_decimal value);
int s21_is_correct_decimal(s21_decimal value);

// tmp
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_get_mantiss_from_float(char *string);
int s21_get_scale_from_float(char *str);
int s21_get_bit_int(int num, int ind);
int s21_get_sign_int(int num);

// comparsion
int s21_is_less(s21_decimal num1, s21_decimal num2);
int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_greater(s21_decimal num1, s21_decimal num2);
int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_equal(s21_decimal num1, s21_decimal num2);
int s21_is_not_equal(s21_decimal num1, s21_decimal num2);

#endif
