#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int return_flag;
  s21_big_decimal tmp_val_1 = {0}, tmp_val_2 = {0};
  s21_big_decimal tmp_res = {0}, tmp_mod = {0}, const_null = {0};
  memcpy(tmp_val_1.bits, value_1.bits, (sizeof(unsigned int) * 3));
  memcpy(tmp_val_2.bits, value_2.bits, (sizeof(unsigned int) * 3));

  if (result == NULL) {
    return_flag = 0;
  } else {
    s21_set_value_zero(result);
    if (!s21_is_equal_modules(tmp_val_2, const_null)) {
      int scale_1 = s21_get_scale(value_1);
      int scale_2 = s21_get_scale(value_2);
      if (scale_1 < 39 && scale_2 < 39) {
        s21_parse_div(tmp_val_1, tmp_val_2, &tmp_res, value_1, value_2, result);
        int sign = s21_get_sign(*result);
        s21_normalize_div_modules(&tmp_val_1, &tmp_val_2, result, scale_1,
                                  scale_2);
        s21_mod_modules(tmp_val_1, tmp_val_2, &tmp_mod);
        s21_div_parsing(const_null, tmp_val_2, &tmp_mod, &tmp_res, result);
        if (sign) s21_set_bit(result, 127, 1);
        return_flag = s21_round_result(result, tmp_res);
      }
    } else {
      return_flag = 3;
    }
  }

  return return_flag;
}
void s21_parse_div(s21_big_decimal tmp_val_1, s21_big_decimal tmp_val_2,
                   s21_big_decimal *tmp_res, s21_decimal value_1,
                   s21_decimal value_2, s21_decimal *result) {
  int sign_1 = s21_get_sign(value_1);
  int sign_2 = s21_get_sign(value_2);

  if (s21_get_scale(value_1) < 39 && s21_get_scale(value_2) < 39) {
    s21_normalize_div_modules(&tmp_val_1, &tmp_val_2, result,
                              s21_get_scale(value_1), s21_get_scale(value_2));
    if (sign_1 != sign_2) {
      s21_set_bit(result, 127, 1);
    }
    s21_div_modules(tmp_val_1, tmp_val_2, tmp_res);
  }
}
void s21_normalize_div_modules(s21_big_decimal *value_1,
                               s21_big_decimal *value_2, s21_decimal *result,
                               int scale_1, int scale_2) {
  if (scale_1 >= scale_2) {
    if (!s21_is_greater_or_equall_modules(*value_1, *value_2)) {
      s21_set_scale(result, scale_1);
    }
    s21_normalize(value_2, (scale_1 - scale_2));
    s21_big_decimal mod = {0}, null = {0};
    s21_mod_modules(*value_1, *value_2, &mod);
    if (!s21_is_equal_modules(mod, null)) {
      s21_set_scale(result, 0);
    }
  } else {
    s21_set_scale(result, 0);
    s21_normalize(value_1, (scale_2 - scale_1));
  }
}
