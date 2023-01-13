// created by pizpotli
#include "../../s21_string.h"

void spec_p(char *str, spec *flag) {
  long int x, tmp;
  int i = 0;
  flag->count_tochn_d = 0;
  char str1[100];
  while (flag->d != 0) {
    x = flag->d;
    flag->d = x / 16;
    tmp = flag->d * 16;
    x = x - tmp;
    spec_x_parser(str1, flag, x, i);
    i++;
  }
  str1[i] = 'x';
  str1[i + 1] = '0';
  i += 2;
  str1[i] = '\0';

  i--;
  maloc(flag, str1);
  spec_d_1(flag, str);
  spec_d_2(flag, str, &i);
}
