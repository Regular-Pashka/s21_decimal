#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_flag;
  s21_big_decimal value_1_temp;
  s21_big_decimal value_2_temp;
  s21_big_decimal result_temp;
  s21_set_result_zero_big_decimal(&value_1_temp);
  s21_set_result_zero_big_decimal(&value_2_temp);
  s21_set_result_zero_big_decimal(&result_temp);
  if (result == NULL) {
    return_flag = 0;
  } else {
    s21_set_value_zero(result);
    memcpy(value_1_temp.bits, value_1.bits, (sizeof(unsigned int) * 3));
    memcpy(value_2_temp.bits, value_2.bits, (sizeof(unsigned int) * 3));
    s21_parse_add(value_1_temp, value_2_temp, &result_temp, value_1, value_2,
                  result);
    return_flag = s21_round_result(result, result_temp);
  }

  return return_flag;
}

void s21_parse_add(s21_big_decimal value_1_temp, s21_big_decimal value_2_temp,
                   s21_big_decimal *result_temp, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result) {
  if (s21_get_scale(value_1) < 39 && s21_get_scale(value_2) < 39) {
    s21_normalize_add_modules(&value_1_temp, &value_2_temp, result,
                              s21_get_scale(value_1), s21_get_scale(value_2));
    if (s21_get_sign(value_1) == s21_get_sign(value_2)) {
      s21_add_modules(value_1_temp, value_2_temp, result_temp);
      if (s21_get_sign(value_1)) s21_set_bit(result, 127, 1);
    } else if (s21_is_greater_or_equall_modules(value_1_temp, value_2_temp)) {
      s21_sub_modules(value_1_temp, value_2_temp, result_temp);
      if (s21_get_sign(value_1)) s21_set_bit(result, 127, 1);
    } else {
      s21_sub_modules(value_2_temp, value_1_temp, result_temp);
      if (s21_get_sign(value_2)) s21_set_bit(result, 127, 1);
    }
  }
}