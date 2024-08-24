#include "../s21_decimal.h"

// int main() {
//     s21_decimal dest = {{52313231, 4234234, 424322134, 200000}};
//     // int num = -2147483648;
//     float num;
//     s21_set_sign(&dest, 1);
//     // num *= -1;
//     // printf("%d", num);
//     s21_from_decimal_to_float(dest, &num);
//     // print_decimal(dest);
//         // printf("fgdsg");

//     printf("%f", num);
//     return 0;
// }

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = 0;
  int sign = s21_get_sign(src);
  int scale = s21_get_scale(src);
  long double buff = (double)*dst;
  if (dst == NULL) {
    error = 1;
  } else {
    for (int i = 0; i < 96; i++) {
      buff += s21_get_bit(src, i) * pow(2, i);
    }
    buff *= pow(10, scale * (-1));
    if (sign) buff *= -1;
    *dst = (float)buff;
  }
  return error;
}