#include "../s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int return_code = 1;
  s21_big_decimal tmp_val = {0};
  int sign = s21_get_sign(value);
  int scale = s21_get_scale(value);

  if (result != NULL) {
    if (scale <= 28 && scale >= 0) {
      memset(result->bits, 0, sizeof(result->bits));
      memcpy(tmp_val.bits, value.bits, (sizeof(unsigned int) * 3));
      s21_truncate_modules(&tmp_val, scale);
      if (sign) s21_set_bit(result, 127, 1);
      return_code = s21_round_result(result, tmp_val);
    } else {
      return_code = 0;
      memcpy(result->bits, value.bits, (sizeof(unsigned int) * 3));
      if (sign) s21_set_bit(result, 127, 1);
    }
  }

  return return_code ? 1 : return_code;
}