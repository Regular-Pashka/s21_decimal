#include "../s21_decimal.h"
int s21_parse_rounding_2(s21_decimal *value, int method) {
  int output = 0;
  s21_big_decimal tmp_value = {0};
  memcpy(tmp_value.bits, value->bits, (sizeof(unsigned int) * 3));
  int bit_depth = s21_bits_len(tmp_value);
  if (bit_depth && s21_get_scale(*value) <= 28 && s21_get_scale(*value) >= 0) {
    s21_truncate_modules(&tmp_value, s21_get_scale(*value));
    bit_depth = s21_bits_len(tmp_value);
    output = s21_rounding_fractions(value, bit_depth, method);
  } else {
    int sign = s21_get_sign(*value);
    s21_set_scale(value, 0);
    if (sign) s21_set_bit(value, 127, 1);
  }

  return output > 96 ? 1 : 0;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  int return_code = 1;
  if (result != NULL) {
    memcpy(result->bits, value.bits, sizeof(value.bits));
    return_code = s21_parse_rounding_2(result, -1);
  }

  return return_code;
}
