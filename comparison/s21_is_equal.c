#include "../s21_decimal.h"

int s21_is_equal(s21_decimal num1, s21_decimal num2) {
  int flag = -1;
  int sign_or_exp1 = num1.bits[3];
  int sign_or_exp2 = num2.bits[3];
  if ((sign_or_exp1 >> 31 & 0b1) != (sign_or_exp2 >> 31 & 0b1)) {
    flag = 0;
  }
  int i = 2;
  while (flag != 1 && flag != 0 && i >= 0) {
    int mantis1 = num1.bits[i];
    int mantis2 = num2.bits[i];
    for (int k = 31; k >= 0; k--) {
      if ((mantis1 >> k & 0b1) != (mantis2 >> k & 0b1)) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      break;
    }
    i--;
  }
  if (flag == -1) {
    for (int i = 23; i >= 16; i--) {
      if ((sign_or_exp1 >> i & 0b1) != (sign_or_exp2 >> i & 0b1)) {
        flag = 0;
        break;
      }
    }
  }
  return flag = (flag == -1) ? 1 : flag;
}