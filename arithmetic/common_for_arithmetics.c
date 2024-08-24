#include "../s21_decimal.h"

void s21_set_result_zero_big_decimal(s21_big_decimal *result) {
  for (int i = 0; i < 7; i++) {
    result->bits[i] = 0;
  }
}

void s21_set_value_zero(s21_decimal *value) {
  for (int idx = 0; idx < 4; idx++) {
    value->bits[idx] = 0;
  }
}

void s21_normalize(s21_big_decimal *value, int scale_diff) {
  s21_big_decimal value_const = {0};
  value_const.bits[0] = 9;

  for (int i = 0; i < scale_diff; i++)
    s21_mul_modules(*value, value_const, value);
}

int s21_round_result(s21_decimal *result, s21_big_decimal value) {
  s21_big_decimal temp_int = {0};
  int sign = s21_get_sign(*result);
  int bit_depth = s21_bits_len(value), output = 0;
  int scale = s21_get_scale(*result);
  memcpy(temp_int.bits, value.bits, sizeof(value.bits));
  s21_truncate_modules(&temp_int, scale);
  int bit_depth_truncate = s21_bits_len(temp_int);

  if (bit_depth && (bit_depth_truncate <= 96)) {
    s21_truncate_nulls(&value, result);
    if (s21_get_scale(*result) == 1) {
      bit_depth = s21_rounding(&value, result, 96, 2);
    } else {
      bit_depth = s21_rounding(&value, result, 96, 0);
    }
  }
  if (sign) s21_set_bit(result, 127, 1);
  if (bit_depth > 96 || bit_depth_truncate > 96) {
    memset(value.bits, 0, sizeof(value.bits));
    output = s21_get_sign(*result) ? 2 : 1;
  }
  memcpy(result->bits, value.bits, (sizeof(unsigned int) * 3));

  return output;
}
void s21_add_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result) {
  int64_t temp = 0;
  int64_t carry = 0;
  s21_big_decimal tmp;
  memcpy(tmp.bits, value_1.bits, sizeof(value_1));
  for (int i = 0; i < 7; i++) {
    result->bits[i] = temp = (int64_t)tmp.bits[i] + value_2.bits[i] + carry;
    carry = temp >> 32;
  }
}

void s21_sub_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result) {
  s21_big_decimal temp;
  memcpy(temp.bits, value_2.bits, sizeof(value_2));
  s21_neg(&temp);
  s21_add_modules(value_1, temp, result);
}

int s21_is_greater_or_equall_modules(s21_big_decimal value_1,
                                     s21_big_decimal value_2) {
  return (s21_is_equal_modules(value_1, value_2) ||
          s21_is_greater_modules(value_1, value_2));
}

void s21_mul_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result) {
  s21_big_decimal value_1_temp;
  s21_big_decimal value_2_temp;
  memcpy(value_1_temp.bits, value_1.bits, sizeof(value_1));
  memcpy(value_2_temp.bits, value_2.bits, sizeof(value_2));
  for (int k = 0; k < (7 * 32); k++) {
    if (value_2_temp.bits[0] & 1) {
      s21_add_modules(*result, value_1_temp, result);
    }
    s21_lshift(&value_1_temp);
    s21_rshift(&value_2_temp);
  }
}

int s21_bits_len(s21_big_decimal value) {
  int res = 0;
  s21_big_decimal null = {0};
  s21_big_decimal temp_value;
  memcpy(temp_value.bits, value.bits, sizeof(value.bits));

  while (!s21_is_equal_modules(temp_value, null)) {
    s21_rshift(&temp_value);
    res++;
  }

  return res;
}

void s21_truncate_modules(s21_big_decimal *value, int scale) {
  s21_big_decimal value_const = {0}, temp = {0};
  value_const.bits[0] = 10;
  memcpy(temp.bits, value->bits, sizeof(value->bits));

  for (int i = 0; i < scale; i++) {
    memset(value->bits, 0, sizeof(value->bits));
    s21_div_modules(temp, value_const, value);
    memcpy(temp.bits, value->bits, sizeof(value->bits));
  }
}
void s21_neg(s21_big_decimal *value) {
  int64_t temp = 0, carry = 1;
  for (int i = 0; i < 7; i++)
    value->bits[i] = ~value->bits[i];  // Инвертирование всех разрядов
  for (int t = 0; t < 7; t++) {
    value->bits[t] = temp = (int64_t)value->bits[t] + carry;
    carry = (temp & 4294967296) >> 32;
  }
}

int s21_is_equal_modules(s21_big_decimal value_1, s21_big_decimal value_2) {
  return value_1.bits[6] == value_2.bits[6] &&
         value_1.bits[5] == value_2.bits[5] &&
         value_1.bits[4] == value_2.bits[4] &&
         value_1.bits[3] == value_2.bits[3] &&
         value_1.bits[2] == value_2.bits[2] &&
         value_1.bits[1] == value_2.bits[1] &&
         value_1.bits[0] == value_2.bits[0];
}

void s21_truncate_nulls(s21_big_decimal *value, s21_decimal *result) {
  s21_big_decimal temp = {0}, ten = {0};
  ten.bits[0] = 10;
  int result_int = s21_get_scale(*result);
  s21_mod_modules(*value, ten, &temp);
  while (!temp.bits[0] && result_int) {
    result_int--;
    s21_truncate_modules(value, 1);
    memset(temp.bits, 0, sizeof(temp.bits));
    s21_mod_modules(*value, ten, &temp);
  }
  s21_set_scale(result, result_int);
}

int s21_rounding_fractions(s21_decimal *value, int bits, int method) {
  s21_big_decimal tmp_value = {0};
  int sign = s21_get_sign(*value);
  memcpy(tmp_value.bits, value->bits, (sizeof(unsigned int) * 3));

  switch (method) {
    case -1:
      s21_truncate_nulls(&tmp_value, value);
      if (sign) s21_set_bit(value, 127, 1);
      s21_rounding(&tmp_value, value, bits, method);
      break;
    case 0:
      s21_rounding(&tmp_value, value, bits, method);
      break;
    case 1:
      s21_truncate_nulls(&tmp_value, value);
      s21_rounding(&tmp_value, value, bits, method);
      break;
  }

  memcpy(value->bits, tmp_value.bits, (sizeof(unsigned int) * 3));
  if (sign) s21_set_bit(value, 127, 1);

  return s21_bits_len(tmp_value);
}

int s21_rounding(s21_big_decimal *value, s21_decimal *result, int bits,
                 int method) {
  int bit_depth = s21_bits_len(*value);
  int sign = s21_get_sign(*result);
  int scale = s21_get_scale(*result);
  s21_big_decimal const_ten = {0}, const_one = {0};
  const_one.bits[0] = 1, const_ten.bits[0] = 10;
  s21_big_decimal temp_fractions = {0};
  memcpy(temp_fractions.bits, value->bits, sizeof(value->bits));

  while ((bit_depth > bits && scale) || scale > 28) {
    scale--;
    s21_big_decimal temp_res = {0};
    s21_mod_modules(temp_fractions, const_ten, &temp_res);
    s21_truncate_modules(value, 1);
    s21_truncate_modules(&temp_fractions, 1);
    bit_depth = s21_bits_len(*value);

    if (temp_res.bits[0] >= 5 && method == 0) {
      if (bit_depth <= bits && scale <= 28)
        s21_add_modules(*value, const_one, value);
    } else if (temp_res.bits[0] && method == -1) {
      if (sign && bit_depth <= bits && !scale)
        s21_add_modules(*value, const_one, value);
    } else if (temp_res.bits[0] >= 5 && method == 1) {
      if (bit_depth <= bits && !scale)
        s21_add_modules(*value, const_one, value);
    }
    if (temp_res.bits[0] >= 5 &&
        (!scale || (bit_depth <= bits && scale <= 28)) && method == 2) {
      temp_res.bits[0] = 0;
      s21_mod_modules(*value, const_ten, &temp_res);
      if (temp_res.bits[0] % 2) s21_add_modules(*value, const_one, value);
    }
    temp_res.bits[0] = 0;
    bit_depth = s21_bits_len(*value);
  }
  s21_set_scale(result, scale);

  return bit_depth;
}
void s21_lshift(s21_big_decimal *value) {
  int64_t carry = 0, temp = 0;
  for (int i = 0; i < 7; i++) {
    temp = ((int64_t)value->bits[i] & (1 << 31)) >> 31;  //
    value->bits[i] <<= 1;
    value->bits[i] |= carry;
    carry = temp;
  }
}

void s21_rshift(s21_big_decimal *value) {
  int64_t carry = 0;
  int64_t temp = 0;
  carry = (((int64_t)value->bits[6] & (1 << 31)) != 0);
  for (int i = 6; i >= 0; i--) {
    temp = (int64_t)value->bits[i] & 1;
    value->bits[i] >>= 1;
    value->bits[i] |= carry << 31;
    carry = temp;
  }
}

void s21_div_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result) {
  s21_big_decimal temp_1, temp_2;
  memcpy(temp_1.bits, value_1.bits, sizeof(value_1));
  while (s21_is_greater_or_equall_modules(temp_1, value_2)) {
    int i = 0;
    memcpy(temp_2.bits, value_2.bits, sizeof(value_2));
    while (s21_is_greater_or_equall_modules(temp_1, s21_lshift_out(temp_2))) {
      i++;
      s21_lshift(&temp_2);
    }
    s21_set_big_decimal_bit_1(result, i);
    s21_sub_modules(temp_1, temp_2, &temp_1);
  }
}
void s21_mod_modules(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result) {
  s21_big_decimal res = {0};
  s21_div_modules(value_1, value_2, &res);
  s21_mul_modules(res, value_2, result);
  s21_sub_modules(value_1, *result, result);
}
void s21_div_parsing(s21_big_decimal const_null, s21_big_decimal val,
                     s21_big_decimal *mod, s21_big_decimal *res,
                     s21_decimal *result) {
  int tmp_scale = s21_get_scale(*result);
  while (!s21_is_equal_modules(*mod, const_null) && (tmp_scale <= 31)) {
    while (s21_is_less_modules(*mod, val) && (tmp_scale <= 31)) {
      tmp_scale = tmp_scale + 1;
      s21_normalize(res, 1);
      s21_normalize(mod, 1);
    }
    s21_big_decimal tmp_res_div = {0}, tmp_res_mod = {0};
    s21_div_modules(*mod, val, &tmp_res_div);
    s21_add_modules(*res, tmp_res_div, res);
    s21_mod_modules(*mod, val, &tmp_res_mod);
    memcpy(mod->bits, tmp_res_mod.bits, sizeof(mod->bits));
    s21_set_scale(result, tmp_scale);
  }
}

s21_big_decimal s21_lshift_out(s21_big_decimal value) {
  s21_big_decimal tmp;
  memcpy(tmp.bits, value.bits, sizeof(value));
  s21_lshift(&tmp);
  return tmp;
}

void s21_set_big_decimal_bit_1(s21_big_decimal *value, int pos) {
  value->bits[pos / 32] |= (1 << (pos % 32));
}
int s21_is_less_modules(s21_big_decimal value_1, s21_big_decimal value_2) {
  return (!(s21_is_greater_modules(value_1, value_2) ||
            s21_is_equal_modules(value_1, value_2)));
}
int s21_is_greater_modules(s21_big_decimal value_1, s21_big_decimal value_2) {
  int res = 0;

  for (int i = 6; i >= 0; i--) {
    if (value_1.bits[i] > value_2.bits[i]) {
      res = 1;
      break;
    } else if (value_1.bits[i] < value_2.bits[i]) {
      break;
    }
  }

  return res;
}
void s21_normalize_add_modules(s21_big_decimal *value_1,
                               s21_big_decimal *value_2, s21_decimal *result,
                               int scale_1, int scale_2) {
  if (scale_1 >= scale_2) {
    s21_set_scale(result, scale_1);
    s21_normalize(value_2, (scale_1 - scale_2));
  } else {
    s21_set_scale(result, scale_2);
    s21_normalize(value_1, (scale_2 - scale_1));
  }
}