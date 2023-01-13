// created by pizpotli
#include "../../s21_string.h"

void spec_o(char *str, spec *flag) {
  long long int x;
  int i = 0;
  char str1[500] = {"\0"};
  if (flag->dd != 0) {
    while (flag->dd != 0) {
      x = flag->dd % 8;
      flag->dd /= 8;
      str1[i] = x + '0';
      i++;
    }
  } else {
    str1[i] = '0';
    i++;
    flag->resh = 0;
  }
  i--;
  maloc(flag, str1);
  spec_d_1(flag, str);
  spec_d_2(flag, str, &i);
}
