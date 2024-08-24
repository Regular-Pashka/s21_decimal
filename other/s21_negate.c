#include "../s21_decimal.h"
int s21_negate(s21_decimal value, s21_decimal *result) {
  int return_code = 1;
  if (result != NULL) {
    int sign = s21_get_sign(value);
    memcpy(result->bits, value.bits, sizeof(value.bits));
    sign ? s21_set_bit(result, 127, 0) : s21_set_bit(result, 127, 1);
    return_code = (sign == s21_get_sign(*result));
  }

  return return_code;
}
