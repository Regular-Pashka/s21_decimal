
#include "tests.h"

START_TEST(test_round_ok10) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // -7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok11) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // 792281625142643375935440
  s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok12) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // -792281625142643375935440
  s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok13) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // 79228162514264337593544
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok14) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // -79228162514264337593544
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok15) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // 7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok16) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // -7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok17) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // 792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok18) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // -792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok19) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // 79228162514264337594
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok20) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // -79228162514264337594
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok21) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // 7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok22) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // -7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok23) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // 792281625142643376
  s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok24) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // -792281625142643376
  s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok25) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // 79228162514264338
  s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok26) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // -79228162514264338
  s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok27) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // 7922816251426434
  s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok28) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // -7922816251426434
  s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok29) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok30) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok31) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // 79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok32) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // -79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok33) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // 7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok34) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // -7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok35) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // 792281625143
  s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok36) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // -792281625143
  s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok37) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // 79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok38) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // -79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok39) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // 7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok40) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // -7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok41) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // 792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok42) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // -792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok43) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // 79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok44) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok45) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // 7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok46) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // -7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok47) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // 792282
  s21_decimal decimal_check = {{0xC16DA, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok48) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // -792282
  s21_decimal decimal_check = {{0xC16DA, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok49) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // 79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok50) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // -79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok51) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // 7923
  s21_decimal decimal_check = {{0x1EF3, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok52) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // -7923
  s21_decimal decimal_check = {{0x1EF3, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok53) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // 792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok54) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // -792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok55) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // 79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok56) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // -79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok57) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 8
  s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok58) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -8
  s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok59) {
  // 79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok60) {
  // -79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok61) {
  // 7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395033
  s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok62) {
  // -7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433759354395033
  s21_decimal decimal_check = {
      {0x99999999, 0x99999999, 0x19999999, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok63) {
  // 792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // 792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok64) {
  // -792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // -792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok65) {
  // 79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // 79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok66) {
  // -79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // -79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok67) {
  // 7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // 7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok68) {
  // -7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // -7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok69) {
  // 792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // 792281625142643375935440
  s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok70) {
  // -792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // -792281625142643375935440
  s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok71) {
  // 79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // 79228162514264337593544
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok72) {
  // -79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // -79228162514264337593544
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok73) {
  // 7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // 7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok74) {
  // -7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // -7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok75) {
  // 792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // 792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok76) {
  // -792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // -792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok77) {
  // 79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // 79228162514264337594
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok78) {
  // -79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // -79228162514264337594
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok79) {
  // 7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // 7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok80) {
  // -7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // -7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok81) {
  // 792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // 792281625142643376
  s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok82) {
  // -792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // -792281625142643376
  s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok83) {
  // 79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // 79228162514264338
  s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok84) {
  // -79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // -79228162514264338
  s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok85) {
  // 7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // 7922816251426434
  s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok86) {
  // -7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // -7922816251426434
  s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok87) {
  // 792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok88) {
  // -792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok89) {
  // 79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // 79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok90) {
  // -79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // -79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok91) {
  // 7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // 7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok92) {
  // -7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // -7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok93) {
  // 792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // 792281625143
  s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok94) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // -792281625143
  s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok95) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // 79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok96) {
  // -79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // -79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok97) {
  // 7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // 7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok98) {
  // -7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // -7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok99) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // 792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok100) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // -792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok101) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // 79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok102) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok103) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // 7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok104) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // -7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok105) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // 792282
  s21_decimal decimal_check = {{0xC16DA, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok106) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // -792282
  s21_decimal decimal_check = {{0xC16DA, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok107) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // 79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok108) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // -79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok109) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // 7923
  s21_decimal decimal_check = {{0x1EF3, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok110) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // -7923
  s21_decimal decimal_check = {{0x1EF3, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok111) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // 792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok112) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // -792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok113) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // 79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok114) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // -79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok115) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 8
  s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok116) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -8
  s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok117) {
  // 52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok118) {
  // -52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok119) {
  // 5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5281877500950955839569596689
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x11111111, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok120) {
  // -5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -5281877500950955839569596689
  s21_decimal decimal_check = {
      {0x11111111, 0x11111111, 0x11111111, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok121) {
  // 5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // 5281877500950956
  s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok122) {
  // -5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // -5281877500950956
  s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok123) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok124) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok125) {
  // 52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok126) {
  // -52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok127) {
  // 5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5281877500950955839283265536
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok128) {
  // -5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -5281877500950955839283265536
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok129) {
  // 5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // 5281877500950956
  s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok130) {
  // -5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // -5281877500950956
  s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok131) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok132) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok133) {
  // 52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};
  // 52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok134) {
  // -52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};
  // -52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok135) {
  // 5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};
  // 5281877499721172901608624401
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok136) {
  // -5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};
  // -5281877499721172901608624401
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok137) {
  // 5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};
  // 5281877499721173
  s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok138) {
  // -5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // -5281877499721173
  s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok139) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok140) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok141) {
  // 52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};
  // 52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok142) {
  // -52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};
  // -52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok143) {
  // 5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};
  // 5281877499721172901322293248
  s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok144) {
  // -5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};
  // -5281877499721172901322293248
  s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok145) {
  // 5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};
  // 5281877499721173
  s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok146) {
  // -5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // -5281877499721173
  s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok147) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok148) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok149) {
  // 12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
  // 12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok150) {
  // -12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
  // -12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok151) {
  // 1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
  // 1229782938247303441
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok152) {
  // -1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
  // -1229782938247303441
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok153) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  // 122978294
  s21_decimal decimal_check = {{0x7547FF6, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok154) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // -122978294
  s21_decimal decimal_check = {{0x7547FF6, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok155) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok156) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok157) {
  // 12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
  // 12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok158) {
  // -12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
  // -12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok159) {
  // 1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
  // 1229782937960972288
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok160) {
  // -1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
  // -1229782937960972288
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok161) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  // 122978294
  s21_decimal decimal_check = {{0x7547FF6, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok162) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // -122978294
  s21_decimal decimal_check = {{0x7547FF6, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok163) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok164) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok165) {
  // 2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};
  // 2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok166) {
  // -2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};
  // -2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok167) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  // 286331153
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok168) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  // -286331153
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok169) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  // 286331
  s21_decimal decimal_check = {{0x45E7B, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok170) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  // -286331
  s21_decimal decimal_check = {{0x45E7B, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok171) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok172) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok173) {
  // 26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok174) {
  // -26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok175) {
  // 2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
  // 2640938750475477919784798344
  s21_decimal decimal_check = {{0x88888888, 0x88888888, 0x8888888, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok176) {
  // -2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
  // -2640938750475477919784798344
  s21_decimal decimal_check = {{0x88888888, 0x88888888, 0x8888888, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok177) {
  // 2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};
  // 2640938750475478
  s21_decimal decimal_check = {{0x78187CD6, 0x961EB, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok178) {
  // -2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x800D0000}};
  // -2640938750475478
  s21_decimal decimal_check = {{0x78187CD6, 0x961EB, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok179) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_round_ok180) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  s21_round(decimal, &decimal_check);
}

START_TEST(test_is_less_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok102) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok104) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok106) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok108) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok110) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok112) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

// ломается
START_TEST(test_is_less_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(TRUE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_less_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_less(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3795) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3796) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3797) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3798) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3799) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3800) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3801) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3802) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3803) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3804) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3805) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3806) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3807) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3808) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3809) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3810) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3811) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3812) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3813) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3814) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3815) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3816) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3817) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3818) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3819) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3820) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3821) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3822) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3823) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3824) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3825) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3826) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3827) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3828) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3829) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3830) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3831) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3832) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3833) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3834) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3835) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3836) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3837) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3838) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3839) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3840) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3841) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3842) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3843) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3844) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3845) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3846) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3847) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3848) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3849) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok3850) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok110) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok112) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  ck_assert_int_eq(TRUE, s21_is_greater(decimal1, decimal2));
}

START_TEST(test_is_greater_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  ck_assert_int_eq(FALSE, s21_is_greater(decimal1, decimal2));
}

START_TEST(is_less) {
  ck_assert_int_eq(TRUE, s21_is_less(middle, max));
  ck_assert_int_eq(FALSE, s21_is_less(max, middle));
  ck_assert_int_eq(TRUE, s21_is_less(middle_fractions, middle));
  ck_assert_int_eq(TRUE, s21_is_less(middle_minus, middle));
}
END_TEST

START_TEST(is_less_or_equal) {
  ck_assert_int_eq(FALSE, s21_is_less_or_equal(middle, null));
  ck_assert_int_eq(TRUE, s21_is_less_or_equal(middle_minus, null));
  ck_assert_int_eq(TRUE, s21_is_less_or_equal(max_minus, middle));
  ck_assert_int_eq(FALSE, s21_is_less_or_equal(middle, middle_fractions));
}
END_TEST

START_TEST(is_greater) {
  ck_assert_int_eq(TRUE, s21_is_greater(middle, null));
  ck_assert_int_eq(FALSE, s21_is_greater(middle, max));
  ck_assert_int_eq(TRUE, s21_is_greater(middle, max_minus));
  ck_assert_int_eq(TRUE, s21_is_greater(middle_fractions, middle_minus));
}
END_TEST

START_TEST(is_greater_or_equal) {
  ck_assert_int_eq(TRUE, s21_is_greater_or_equal(max, middle));
  ck_assert_int_eq(FALSE, s21_is_greater_or_equal(middle, max));
  ck_assert_int_eq(TRUE, s21_is_greater_or_equal(null, max_minus));
  ck_assert_int_eq(FALSE, s21_is_greater_or_equal(middle_fractions, middle));
}
END_TEST

START_TEST(is_equal) {
  ck_assert_int_eq(FALSE, s21_is_equal(middle, max));
  ck_assert_int_eq(FALSE, s21_is_equal(middle, middle_fractions));
}
END_TEST

START_TEST(is_not_equal) {
  ck_assert_int_eq(TRUE, s21_is_not_equal(middle, middle_fractions));
  ck_assert_int_eq(TRUE, s21_is_not_equal(middle, max));
}
END_TEST

START_TEST(add) {
  int output = s21_add(middle, middle_fractions, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_middle_add_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_add(middle, middle, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_middle_add_middle, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_add(middle, max_minus, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_middle_add_max_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_add(middle_minus, middle_minus, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_middle_minus_add_middle_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_add(middle_fractions, middle_fractions, &temp_res);
  ck_assert_int_eq(
      TRUE, s21_is_equal(res_middle_fractions_add_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_add(max, max, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(null, temp_res));
  ck_assert_int_eq(TRUE, output);
  output = s21_add(max_minus, max_minus,
                   &temp_res);  //эта функция чота записала в temp_res
  ck_assert_int_eq(TWO, output);
}
END_TEST

START_TEST(div1) {
  int output = s21_div(max, middle, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_max_div_middle, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_div(middle, max, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_middle_div_max, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_div(max, null, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(null, temp_res));
  ck_assert_int_eq(THREE, output);
  output = s21_div(max_minus, middle, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_max_minus_div_middle, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_div(max, middle_minus, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_max_minus_div_middle, temp_res));
  ck_assert_int_eq(FALSE, output);
}
END_TEST

START_TEST(sub) {
  int output = s21_sub(max_minus, middle_minus, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_middle_add_max_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_sub(max, middle, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_max_sub_middle, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_sub(middle_fractions, middle_minus, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_middle_add_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_sub(max_minus, max, &temp_res);

  ck_assert_int_eq(TWO, output);
  output = s21_sub(max, middle_minus, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(null, temp_res));
  ck_assert_int_eq(TRUE, output);
  output = s21_sub(max_minus, middle, &temp_res);

  ck_assert_int_eq(TWO, output);
}
END_TEST

START_TEST(mul) {
  int output = s21_mul(middle_fractions, middle_fractions, &temp_res);
  ck_assert_int_eq(
      TRUE, s21_is_equal(res_middle_fraction_mul_middle_fraction, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_mul(middle_fractions, null, &temp_res);

  ck_assert_int_eq(FALSE, output);
  output = s21_mul(middle_fractions, middle_fractions_minus, &temp_res);
  ck_assert_int_eq(
      TRUE,
      s21_is_equal(res_middle_fraction_mul_middle_fraction_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_mul(middle, middle, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(null, temp_res));
  ck_assert_int_eq(TRUE, output);
  output = s21_mul(middle_minus, middle, &temp_res);

  ck_assert_int_eq(TWO, output);
}
END_TEST

START_TEST(floor_) {
  int output = s21_floor(middle_fractions, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_floor_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_floor(middle_fractions_minus, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_floor_middle_fractions_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_floor(floor_num, &temp_res);

  ck_assert_int_eq(FALSE, output);
}
END_TEST

START_TEST(round_) {
  int output = s21_round(middle_fractions, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_floor_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_round(middle_fractions_minus, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_round_middle_fractions_minus, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_round(round_num, &temp_res);

  ck_assert_int_eq(FALSE, output);
}
END_TEST

START_TEST(truncate) {
  int output = s21_truncate(middle_fractions, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(res_floor_middle_fractions, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_truncate(middle_fractions_minus, &temp_res);
  ck_assert_int_eq(TRUE,
                   s21_is_equal(res_round_middle_fractions_minus, temp_res));
}
END_TEST

START_TEST(negate) {
  int output = s21_negate(max_minus, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(max, temp_res));
  ck_assert_int_eq(FALSE, output);
  output = s21_negate(max, &temp_res);
  ck_assert_int_eq(TRUE, s21_is_equal(max_minus, temp_res));
}
END_TEST

START_TEST(from_int_to_decimal_decimal_to_int) {
  int res = 0;
  int temp_plus = 2147483647;
  int temp_minus = -2147483647;
  int output = s21_from_int_to_decimal(temp_plus, &temp_res);
  ck_assert_int_eq(FALSE, output);
  output = s21_from_decimal_to_int(temp_res, &res);
  ck_assert_int_eq(temp_plus, res);
  ck_assert_int_eq(FALSE, output);
  output = s21_from_int_to_decimal(temp_minus, &temp_res);
  ck_assert_int_eq(FALSE, output);
  output = s21_from_decimal_to_int(temp_res, &res);
  ck_assert_int_eq(temp_minus, res);
  ck_assert_int_eq(FALSE, output);
}
END_TEST

START_TEST(from_float_to_decimal_decimal_to_float) {
  float res = 0;
  float temp_plus = 2147483.647;
  float temp_minus = -2147483.647;

  int output = s21_from_float_to_decimal(temp_plus, &temp_res);
  ck_assert_int_eq(FALSE, output);
  output = s21_from_decimal_to_float(
      temp_res, &res);  // либо не записался в рес или перевел неверно

  ck_assert_int_eq(FALSE, output);
  output = s21_from_float_to_decimal(temp_minus, &temp_res);
  ck_assert_int_eq(FALSE, output);
  output = s21_from_decimal_to_float(temp_res, &res);

  ck_assert_int_eq(FALSE, output);
  output = s21_from_float_to_decimal((temp_plus * 10), &temp_res);

  ck_assert_int_eq(FALSE, output);
  output = s21_from_decimal_to_float(tmp_float, &res);

  ck_assert_int_eq(FALSE, output);
}
END_TEST

int main(void) {
  Suite *T = suite_create(BLUE "S21_DECIMAL TEST" RESET);
  TCase *TC = tcase_create(GREEN " CHECK ________ " RESET);
  SRunner *SR = srunner_create(T);
  int output;
  suite_add_tcase(T, TC);
  tcase_add_test(TC, test_round_ok10);
  tcase_add_test(TC, test_round_ok11);
  tcase_add_test(TC, test_round_ok12);
  tcase_add_test(TC, test_round_ok13);
  tcase_add_test(TC, test_round_ok14);
  tcase_add_test(TC, test_round_ok15);
  tcase_add_test(TC, test_round_ok16);
  tcase_add_test(TC, test_round_ok17);
  tcase_add_test(TC, test_round_ok18);
  tcase_add_test(TC, test_round_ok19);
  tcase_add_test(TC, test_round_ok20);
  tcase_add_test(TC, test_round_ok21);
  tcase_add_test(TC, test_round_ok22);
  tcase_add_test(TC, test_round_ok23);
  tcase_add_test(TC, test_round_ok24);
  tcase_add_test(TC, test_round_ok25);
  tcase_add_test(TC, test_round_ok26);
  tcase_add_test(TC, test_round_ok27);
  tcase_add_test(TC, test_round_ok28);
  tcase_add_test(TC, test_round_ok29);
  tcase_add_test(TC, test_round_ok30);
  tcase_add_test(TC, test_round_ok31);
  tcase_add_test(TC, test_round_ok32);
  tcase_add_test(TC, test_round_ok33);
  tcase_add_test(TC, test_round_ok34);
  tcase_add_test(TC, test_round_ok35);
  tcase_add_test(TC, test_round_ok36);
  tcase_add_test(TC, test_round_ok37);
  tcase_add_test(TC, test_round_ok38);
  tcase_add_test(TC, test_round_ok39);
  tcase_add_test(TC, test_round_ok40);
  tcase_add_test(TC, test_round_ok41);
  tcase_add_test(TC, test_round_ok42);
  tcase_add_test(TC, test_round_ok43);
  tcase_add_test(TC, test_round_ok44);
  tcase_add_test(TC, test_round_ok45);
  tcase_add_test(TC, test_round_ok46);
  tcase_add_test(TC, test_round_ok47);
  tcase_add_test(TC, test_round_ok48);
  tcase_add_test(TC, test_round_ok49);
  tcase_add_test(TC, test_round_ok50);
  tcase_add_test(TC, test_round_ok51);
  tcase_add_test(TC, test_round_ok52);
  tcase_add_test(TC, test_round_ok53);
  tcase_add_test(TC, test_round_ok54);
  tcase_add_test(TC, test_round_ok55);
  tcase_add_test(TC, test_round_ok56);
  tcase_add_test(TC, test_round_ok57);
  tcase_add_test(TC, test_round_ok58);
  tcase_add_test(TC, test_round_ok59);
  tcase_add_test(TC, test_round_ok60);
  tcase_add_test(TC, test_round_ok61);
  tcase_add_test(TC, test_round_ok62);
  tcase_add_test(TC, test_round_ok63);
  tcase_add_test(TC, test_round_ok64);
  tcase_add_test(TC, test_round_ok65);
  tcase_add_test(TC, test_round_ok66);
  tcase_add_test(TC, test_round_ok67);
  tcase_add_test(TC, test_round_ok68);
  tcase_add_test(TC, test_round_ok69);
  tcase_add_test(TC, test_round_ok70);
  tcase_add_test(TC, test_round_ok71);
  tcase_add_test(TC, test_round_ok72);
  tcase_add_test(TC, test_round_ok73);
  tcase_add_test(TC, test_round_ok74);
  tcase_add_test(TC, test_round_ok75);
  tcase_add_test(TC, test_round_ok76);
  tcase_add_test(TC, test_round_ok77);
  tcase_add_test(TC, test_round_ok78);
  tcase_add_test(TC, test_round_ok79);
  tcase_add_test(TC, test_round_ok80);
  tcase_add_test(TC, test_round_ok81);
  tcase_add_test(TC, test_round_ok82);
  tcase_add_test(TC, test_round_ok83);
  tcase_add_test(TC, test_round_ok84);
  tcase_add_test(TC, test_round_ok85);
  tcase_add_test(TC, test_round_ok86);
  tcase_add_test(TC, test_round_ok87);
  tcase_add_test(TC, test_round_ok88);
  tcase_add_test(TC, test_round_ok89);
  tcase_add_test(TC, test_round_ok90);
  tcase_add_test(TC, test_round_ok91);
  tcase_add_test(TC, test_round_ok92);
  tcase_add_test(TC, test_round_ok93);
  tcase_add_test(TC, test_round_ok94);
  tcase_add_test(TC, test_round_ok95);
  tcase_add_test(TC, test_round_ok96);
  tcase_add_test(TC, test_round_ok97);
  tcase_add_test(TC, test_round_ok98);
  tcase_add_test(TC, test_round_ok99);
  tcase_add_test(TC, test_round_ok100);
  tcase_add_test(TC, test_round_ok101);
  tcase_add_test(TC, test_round_ok102);
  tcase_add_test(TC, test_round_ok103);
  tcase_add_test(TC, test_round_ok104);
  tcase_add_test(TC, test_round_ok105);
  tcase_add_test(TC, test_round_ok106);
  tcase_add_test(TC, test_round_ok107);
  tcase_add_test(TC, test_round_ok108);
  tcase_add_test(TC, test_round_ok109);
  tcase_add_test(TC, test_round_ok110);
  tcase_add_test(TC, test_round_ok111);
  tcase_add_test(TC, test_round_ok112);
  tcase_add_test(TC, test_round_ok113);
  tcase_add_test(TC, test_round_ok114);
  tcase_add_test(TC, test_round_ok115);
  tcase_add_test(TC, test_round_ok116);
  tcase_add_test(TC, test_round_ok117);
  tcase_add_test(TC, test_round_ok118);
  tcase_add_test(TC, test_round_ok119);
  tcase_add_test(TC, test_round_ok120);
  tcase_add_test(TC, test_round_ok121);
  tcase_add_test(TC, test_round_ok122);
  tcase_add_test(TC, test_round_ok123);
  tcase_add_test(TC, test_round_ok124);
  tcase_add_test(TC, test_round_ok125);
  tcase_add_test(TC, test_round_ok126);
  tcase_add_test(TC, test_round_ok127);
  tcase_add_test(TC, test_round_ok128);
  tcase_add_test(TC, test_round_ok129);
  tcase_add_test(TC, test_round_ok130);
  tcase_add_test(TC, test_round_ok131);
  tcase_add_test(TC, test_round_ok132);
  tcase_add_test(TC, test_round_ok133);
  tcase_add_test(TC, test_round_ok134);
  tcase_add_test(TC, test_round_ok135);
  tcase_add_test(TC, test_round_ok136);
  tcase_add_test(TC, test_round_ok137);
  tcase_add_test(TC, test_round_ok138);
  tcase_add_test(TC, test_round_ok139);
  tcase_add_test(TC, test_round_ok140);
  tcase_add_test(TC, test_round_ok141);
  tcase_add_test(TC, test_round_ok142);
  tcase_add_test(TC, test_round_ok143);
  tcase_add_test(TC, test_round_ok144);
  tcase_add_test(TC, test_round_ok145);
  tcase_add_test(TC, test_round_ok146);
  tcase_add_test(TC, test_round_ok147);
  tcase_add_test(TC, test_round_ok148);
  tcase_add_test(TC, test_round_ok149);
  tcase_add_test(TC, test_round_ok150);
  tcase_add_test(TC, test_round_ok151);
  tcase_add_test(TC, test_round_ok152);
  tcase_add_test(TC, test_round_ok153);
  tcase_add_test(TC, test_round_ok154);
  tcase_add_test(TC, test_round_ok155);
  tcase_add_test(TC, test_round_ok156);
  tcase_add_test(TC, test_round_ok157);
  tcase_add_test(TC, test_round_ok158);
  tcase_add_test(TC, test_round_ok159);
  tcase_add_test(TC, test_round_ok160);
  tcase_add_test(TC, test_round_ok161);
  tcase_add_test(TC, test_round_ok162);
  tcase_add_test(TC, test_round_ok163);
  tcase_add_test(TC, test_round_ok164);
  tcase_add_test(TC, test_round_ok165);
  tcase_add_test(TC, test_round_ok166);
  tcase_add_test(TC, test_round_ok167);
  tcase_add_test(TC, test_round_ok168);
  tcase_add_test(TC, test_round_ok169);
  tcase_add_test(TC, test_round_ok170);
  tcase_add_test(TC, test_round_ok171);
  tcase_add_test(TC, test_round_ok172);
  tcase_add_test(TC, test_round_ok173);
  tcase_add_test(TC, test_round_ok174);
  tcase_add_test(TC, test_round_ok175);
  tcase_add_test(TC, test_round_ok176);
  tcase_add_test(TC, test_round_ok177);
  tcase_add_test(TC, test_round_ok178);
  tcase_add_test(TC, test_round_ok179);
  tcase_add_test(TC, test_round_ok180);
  tcase_add_test(TC, test_is_less_ok1);
  tcase_add_test(TC, test_is_less_ok2);
  tcase_add_test(TC, test_is_less_ok3);
  tcase_add_test(TC, test_is_less_ok4);
  tcase_add_test(TC, test_is_less_ok5);
  tcase_add_test(TC, test_is_less_ok6);
  tcase_add_test(TC, test_is_less_ok7);
  tcase_add_test(TC, test_is_less_ok8);
  tcase_add_test(TC, test_is_less_ok9);
  tcase_add_test(TC, test_is_less_ok10);
  tcase_add_test(TC, test_is_less_ok11);
  tcase_add_test(TC, test_is_less_ok12);
  tcase_add_test(TC, test_is_less_ok13);
  tcase_add_test(TC, test_is_less_ok14);
  tcase_add_test(TC, test_is_less_ok15);
  tcase_add_test(TC, test_is_less_ok16);
  tcase_add_test(TC, test_is_less_ok17);
  tcase_add_test(TC, test_is_less_ok18);
  tcase_add_test(TC, test_is_less_ok19);
  tcase_add_test(TC, test_is_less_ok20);
  tcase_add_test(TC, test_is_less_ok21);
  tcase_add_test(TC, test_is_less_ok22);
  tcase_add_test(TC, test_is_less_ok23);
  tcase_add_test(TC, test_is_less_ok24);
  tcase_add_test(TC, test_is_less_ok25);
  tcase_add_test(TC, test_is_less_ok26);
  tcase_add_test(TC, test_is_less_ok27);
  tcase_add_test(TC, test_is_less_ok28);
  tcase_add_test(TC, test_is_less_ok29);
  tcase_add_test(TC, test_is_less_ok30);
  tcase_add_test(TC, test_is_less_ok31);
  tcase_add_test(TC, test_is_less_ok32);
  tcase_add_test(TC, test_is_less_ok33);
  tcase_add_test(TC, test_is_less_ok34);
  tcase_add_test(TC, test_is_less_ok35);
  tcase_add_test(TC, test_is_less_ok36);
  tcase_add_test(TC, test_is_less_ok37);
  tcase_add_test(TC, test_is_less_ok38);
  tcase_add_test(TC, test_is_less_ok39);
  tcase_add_test(TC, test_is_less_ok40);
  tcase_add_test(TC, test_is_less_ok41);
  tcase_add_test(TC, test_is_less_ok42);
  tcase_add_test(TC, test_is_less_ok43);
  tcase_add_test(TC, test_is_less_ok44);
  tcase_add_test(TC, test_is_less_ok45);
  tcase_add_test(TC, test_is_less_ok46);
  tcase_add_test(TC, test_is_less_ok47);
  tcase_add_test(TC, test_is_less_ok48);
  tcase_add_test(TC, test_is_less_ok49);
  tcase_add_test(TC, test_is_less_ok50);
  tcase_add_test(TC, test_is_less_ok51);
  tcase_add_test(TC, test_is_less_ok52);
  tcase_add_test(TC, test_is_less_ok53);
  tcase_add_test(TC, test_is_less_ok54);
  tcase_add_test(TC, test_is_less_ok55);
  tcase_add_test(TC, test_is_less_ok56);
  tcase_add_test(TC, test_is_less_ok57);
  tcase_add_test(TC, test_is_less_ok58);
  tcase_add_test(TC, test_is_less_ok59);
  tcase_add_test(TC, test_is_less_ok60);
  tcase_add_test(TC, test_is_less_ok61);
  tcase_add_test(TC, test_is_less_ok62);
  tcase_add_test(TC, test_is_less_ok63);
  tcase_add_test(TC, test_is_less_ok64);
  tcase_add_test(TC, test_is_less_ok65);
  tcase_add_test(TC, test_is_less_ok66);
  tcase_add_test(TC, test_is_less_ok67);
  tcase_add_test(TC, test_is_less_ok68);
  tcase_add_test(TC, test_is_less_ok69);
  tcase_add_test(TC, test_is_less_ok70);
  tcase_add_test(TC, test_is_less_ok71);
  tcase_add_test(TC, test_is_less_ok72);
  tcase_add_test(TC, test_is_less_ok73);
  tcase_add_test(TC, test_is_less_ok74);
  tcase_add_test(TC, test_is_less_ok75);
  tcase_add_test(TC, test_is_less_ok76);
  tcase_add_test(TC, test_is_less_ok77);
  tcase_add_test(TC, test_is_less_ok78);
  tcase_add_test(TC, test_is_less_ok79);
  tcase_add_test(TC, test_is_less_ok80);
  tcase_add_test(TC, test_is_less_ok81);
  tcase_add_test(TC, test_is_less_ok82);
  tcase_add_test(TC, test_is_less_ok83);
  tcase_add_test(TC, test_is_less_ok84);
  tcase_add_test(TC, test_is_less_ok85);
  tcase_add_test(TC, test_is_less_ok86);
  tcase_add_test(TC, test_is_less_ok87);
  tcase_add_test(TC, test_is_less_ok88);
  tcase_add_test(TC, test_is_less_ok89);
  tcase_add_test(TC, test_is_less_ok90);
  tcase_add_test(TC, test_is_less_ok91);
  tcase_add_test(TC, test_is_less_ok92);
  tcase_add_test(TC, test_is_less_ok93);
  tcase_add_test(TC, test_is_less_ok94);
  tcase_add_test(TC, test_is_less_ok95);
  tcase_add_test(TC, test_is_less_ok96);
  tcase_add_test(TC, test_is_less_ok97);
  tcase_add_test(TC, test_is_less_ok98);
  tcase_add_test(TC, test_is_less_ok99);
  tcase_add_test(TC, test_is_less_ok100);
  tcase_add_test(TC, test_is_less_ok101);
  tcase_add_test(TC, test_is_less_ok102);
  tcase_add_test(TC, test_is_less_ok103);
  tcase_add_test(TC, test_is_less_ok104);
  tcase_add_test(TC, test_is_less_ok105);
  tcase_add_test(TC, test_is_less_ok106);
  tcase_add_test(TC, test_is_less_ok107);
  tcase_add_test(TC, test_is_less_ok108);
  tcase_add_test(TC, test_is_less_ok109);
  tcase_add_test(TC, test_is_less_ok110);
  tcase_add_test(TC, test_is_less_ok111);
  tcase_add_test(TC, test_is_less_ok112);
  tcase_add_test(TC, test_is_less_ok113);
  tcase_add_test(TC, test_is_less_ok114);
  tcase_add_test(TC, test_is_less_ok115);
  tcase_add_test(TC, test_is_less_ok116);
  tcase_add_test(TC, test_is_less_ok117);
  tcase_add_test(TC, test_is_less_ok118);
  tcase_add_test(TC, test_is_less_ok119);
  tcase_add_test(TC, test_is_less_ok120);
  tcase_add_test(TC, test_is_less_ok121);
  tcase_add_test(TC, test_is_less_ok122);
  tcase_add_test(TC, test_is_less_ok123);
  tcase_add_test(TC, test_is_less_ok124);
  tcase_add_test(TC, test_is_less_ok125);
  tcase_add_test(TC, test_is_less_ok126);
  tcase_add_test(TC, test_is_less_ok127);
  tcase_add_test(TC, test_is_less_ok128);
  tcase_add_test(TC, test_is_less_ok129);
  tcase_add_test(TC, test_is_less_ok130);
  tcase_add_test(TC, test_is_less_ok131);
  tcase_add_test(TC, test_is_less_ok132);
  tcase_add_test(TC, test_is_less_ok133);
  tcase_add_test(TC, test_is_less_ok134);
  tcase_add_test(TC, test_is_less_ok135);
  tcase_add_test(TC, test_is_less_ok136);
  tcase_add_test(TC, test_is_less_ok137);
  tcase_add_test(TC, test_is_less_ok138);
  tcase_add_test(TC, test_is_less_ok139);
  tcase_add_test(TC, test_is_less_ok140);
  tcase_add_test(TC, test_is_less_ok141);
  tcase_add_test(TC, test_is_less_ok142);
  tcase_add_test(TC, test_is_less_ok143);
  tcase_add_test(TC, test_is_less_ok144);
  tcase_add_test(TC, test_is_less_ok145);
  tcase_add_test(TC, test_is_less_ok146);
  tcase_add_test(TC, test_is_less_ok147);
  tcase_add_test(TC, test_is_less_ok148);
  tcase_add_test(TC, test_is_less_ok149);
  tcase_add_test(TC, test_is_less_ok150);
  tcase_add_test(TC, test_is_greater_ok3795);
  tcase_add_test(TC, test_is_greater_ok3796);
  tcase_add_test(TC, test_is_greater_ok3797);
  tcase_add_test(TC, test_is_greater_ok3798);
  tcase_add_test(TC, test_is_greater_ok3799);
  tcase_add_test(TC, test_is_greater_ok3800);
  tcase_add_test(TC, test_is_greater_ok3801);
  tcase_add_test(TC, test_is_greater_ok3802);
  tcase_add_test(TC, test_is_greater_ok3803);
  tcase_add_test(TC, test_is_greater_ok3804);
  tcase_add_test(TC, test_is_greater_ok3805);
  tcase_add_test(TC, test_is_greater_ok3806);
  tcase_add_test(TC, test_is_greater_ok3807);
  tcase_add_test(TC, test_is_greater_ok3808);
  tcase_add_test(TC, test_is_greater_ok3809);
  tcase_add_test(TC, test_is_greater_ok3810);
  tcase_add_test(TC, test_is_greater_ok3811);
  tcase_add_test(TC, test_is_greater_ok3812);
  tcase_add_test(TC, test_is_greater_ok3813);
  tcase_add_test(TC, test_is_greater_ok3814);
  tcase_add_test(TC, test_is_greater_ok3815);
  tcase_add_test(TC, test_is_greater_ok3816);
  tcase_add_test(TC, test_is_greater_ok3817);
  tcase_add_test(TC, test_is_greater_ok3818);
  tcase_add_test(TC, test_is_greater_ok3819);
  tcase_add_test(TC, test_is_greater_ok3820);
  tcase_add_test(TC, test_is_greater_ok3821);
  tcase_add_test(TC, test_is_greater_ok3822);
  tcase_add_test(TC, test_is_greater_ok3823);
  tcase_add_test(TC, test_is_greater_ok3824);
  tcase_add_test(TC, test_is_greater_ok3825);
  tcase_add_test(TC, test_is_greater_ok3826);
  tcase_add_test(TC, test_is_greater_ok3827);
  tcase_add_test(TC, test_is_greater_ok3828);
  tcase_add_test(TC, test_is_greater_ok3829);
  tcase_add_test(TC, test_is_greater_ok3830);
  tcase_add_test(TC, test_is_greater_ok3831);
  tcase_add_test(TC, test_is_greater_ok3832);
  tcase_add_test(TC, test_is_greater_ok3833);
  tcase_add_test(TC, test_is_greater_ok3834);
  tcase_add_test(TC, test_is_greater_ok3835);
  tcase_add_test(TC, test_is_greater_ok3836);
  tcase_add_test(TC, test_is_greater_ok3837);
  tcase_add_test(TC, test_is_greater_ok3838);
  tcase_add_test(TC, test_is_greater_ok3839);
  tcase_add_test(TC, test_is_greater_ok3840);
  tcase_add_test(TC, test_is_greater_ok3841);
  tcase_add_test(TC, test_is_greater_ok3842);
  tcase_add_test(TC, test_is_greater_ok3843);
  tcase_add_test(TC, test_is_greater_ok3844);
  tcase_add_test(TC, test_is_greater_ok3845);
  tcase_add_test(TC, test_is_greater_ok3846);
  tcase_add_test(TC, test_is_greater_ok3847);
  tcase_add_test(TC, test_is_greater_ok3848);
  tcase_add_test(TC, test_is_greater_ok3849);
  tcase_add_test(TC, test_is_greater_ok3850);
  tcase_add_test(TC, test_is_greater_ok110);
  tcase_add_test(TC, test_is_greater_ok111);
  tcase_add_test(TC, test_is_greater_ok112);
  tcase_add_test(TC, test_is_greater_ok113);
  tcase_add_test(TC, test_is_greater_ok114);
  tcase_add_test(TC, test_is_greater_ok115);
  tcase_add_test(TC, test_is_greater_ok116);
  tcase_add_test(TC, test_is_greater_ok117);
  tcase_add_test(TC, test_is_greater_ok118);
  tcase_add_test(TC, test_is_greater_ok119);
  tcase_add_test(TC, test_is_greater_ok120);
  tcase_add_test(TC, test_is_greater_ok121);
  tcase_add_test(TC, test_is_greater_ok122);
  tcase_add_test(TC, test_is_greater_ok123);
  tcase_add_test(TC, test_is_greater_ok124);
  tcase_add_test(TC, test_is_greater_ok125);
  tcase_add_test(TC, add);
  tcase_add_test(TC, div1);
  tcase_add_test(TC, mul);
  tcase_add_test(TC, sub);
  tcase_add_test(TC, is_less);
  tcase_add_test(TC, is_equal);
  tcase_add_test(TC, is_greater);
  tcase_add_test(TC, is_not_equal);
  tcase_add_test(TC, is_less_or_equal);
  tcase_add_test(TC, is_greater_or_equal);
  tcase_add_test(TC, floor_);
  tcase_add_test(TC, round_);
  tcase_add_test(TC, negate);
  tcase_add_test(TC, truncate);
  tcase_add_test(TC, from_int_to_decimal_decimal_to_int);
  tcase_add_test(TC, from_float_to_decimal_decimal_to_float);

  ///////////////

  ///////////

  srunner_run_all(SR, CK_VERBOSE);
  output = srunner_ntests_failed(SR);
  srunner_free(SR);

  return output;
}