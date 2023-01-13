// created by pizpotli
#include "../../s21_string.h"

void spec_x(char *str, spec *flag) {
  unsigned long int x, tmp;
  int i = 0;
  char str1[20] = {"0"};
  if (flag->dd == 0) {
    x = 0;
    spec_x_parser(str1, flag, x, i);
    flag->resh = 0;
    i++;
    str[i] = '\0';
  }

  while (flag->dd != 0) {
    x = flag->dd;
    flag->dd = x / 16;
    tmp = flag->dd * 16;
    x = x - tmp;
    spec_x_parser(str1, flag, x, i);
    i++;
  }
  str1[i] = '\0';
  i--;
  maloc(flag, str1);
  spec_d_1(flag, str);
  spec_d_2(flag, str, &i);
}

void spec_x_parser(char *str1, spec *flag, int x, int i) {
  if (x >= 0 && x < 10) {
    str1[i] = x + '0';
  }
  if (x == 10) {
    if (flag->X == 1) {
      str1[i] = 'A';
    } else {
      str1[i] = 'a';
    }
  }
  if (x == 11) {
    if (flag->X == 1) {
      str1[i] = 'B';
    } else {
      str1[i] = 'b';
    }
  }
  if (x == 12) {
    if (flag->X == 1) {
      str1[i] = 'C';
    } else {
      str1[i] = 'c';
    }
  }
  if (x == 13) {
    if (flag->X == 1) {
      str1[i] = 'D';
    } else {
      str1[i] = 'd';
    }
  }
  if (x == 14) {
    if (flag->X == 1) {
      str1[i] = 'E';
    } else {
      str1[i] = 'e';
    }
  }
  if (x == 15) {
    if (flag->X == 1) {
      str1[i] = 'F';
    } else {
      str1[i] = 'f';
    }
  }
}
