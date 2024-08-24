#include "../s21_decimal.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int return_code = 0;
  s21_decimal plug = {0};
  s21_big_decimal const_null = {0};
  s21_big_decimal tmp_val_1 = {0}, tmp_val_2 = {0};
  int sign_1 = s21_get_sign(value_1);
  int sign_2 = s21_get_sign(value_2);
  int scale_1 = s21_get_scale(value_1);
  int scale_2 = s21_get_scale(value_2);

  memcpy(tmp_val_1.bits, value_1.bits, (sizeof(unsigned int) * 3));
  memcpy(tmp_val_2.bits, value_2.bits, (sizeof(unsigned int) * 3));

  if (!(s21_is_equal_modules(tmp_val_1, const_null) &&
        s21_is_equal_modules(tmp_val_2, const_null))) {
    s21_normalize_add_modules(&tmp_val_1, &tmp_val_2, &plug, scale_1, scale_2);
    if (sign_1 && sign_2) {
      return_code = s21_is_less_modules(tmp_val_1, tmp_val_2);
    } else if (!sign_1 && !sign_2) {
      return_code = s21_is_greater_modules(tmp_val_1, tmp_val_2);
    } else if (!sign_1 && sign_2) {
      return_code = 1;
    }
  }

  return return_code;
}