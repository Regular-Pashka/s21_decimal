#include "../s21_decimal.h"

// int main() {
//     s21_decimal dest = {{52313231, 0, 0, 0}};
//     // int num = -2147483648;
//     int num;
//     s21_set_sign(&dest, 1);
//     // num *= -1;
//     // printf("%d", num);
//     s21_from_decimal_to_int(dest, &num);
//     // print_decimal(dest);
//     printf("%d", num);
//     return 0;
// }

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int error = s21_truncate(src, &src);
  int sign = s21_get_sign(src);
  if (dst == NULL || src.bits[1] || src.bits[2]) {
    error = 1;
  } else {
    *dst = src.bits[0];
    if (sign) *dst *= -1;
  }
  return error;
}