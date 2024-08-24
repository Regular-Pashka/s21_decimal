#include "../s21_decimal.h"

// int s21_get_bit_int(int num, int ind) {
//     int result = -1;
//     if (ind >= 0 && ind <= 31) {
//         int mask = 0b1 << ind;
//         result = num & mask;
//         result = result != 0 ? 1 : 0;
//     }
//     return result;
// }

// int s21_get_sign_int(int num) {
//     return s21_get_bit_int(num, 31);
// }

// int s21_from_int_to_decimal(int src, s21_decimal *dst) {
//     int error = 0;
//     int sign = s21_get_sign_int(src);
//     if (dst == NULL) {
//         error = 1;
//     } else {
//         memset(dst->bits, 0, sizeof(dst->bits));
//         if (src == -2147483648) src += 1;
//         if (sign == 1) {
//             s21_set_sign(dst, 1);
//             src *= -1;
//         }
//         dst->bits[0] |= src;
//     }
//     return error;
// }

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;
  if (dst != NULL) {
    int sign = 0;
    if (src < 0) {
      src = src * -1;
      sign = 1;
    }
    int mantiss = (int)src;
    int scale = 0;
    while (src - ((float)mantiss / (int)(pow(10, scale))) != 0) {
      scale++;
      mantiss = src * (int)(pow(10, scale));
    }
    s21_from_int_to_decimal(mantiss, dst);
    if (sign) {
      s21_set_sign(dst, 1);
    }
    dst->bits[3] += scale << 16;
  } else {
    error = 1;
  }
  return error;
}

// int main() {
//     s21_decimal dest = {{0, 0, 0, 0}};
//     // int num = -2147483648;
//     float num = 7122.934;
//     s21_from_float_to_decimal(num, &dest);
//     printf("%f", num);
//     print_decimal(dest);
//     return 0;
// }