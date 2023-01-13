// created by pizpotli
#include "../../s21_string.h"

void spec_s(char *str, spec *flag) {
  flag->s = 1;
  maloc(flag, flag->arr);
  spec_d_1(flag, str);
  spec_s_1(flag, str);
}

void spec_sl(char *str, spec *flag) {
  flag->s = 1;
  int x = 0;
  while (flag->arrl[x]) {
    x++;
  }
  x--;
  flag->buf = (char *)calloc(500, sizeof(char));
  if (flag->buf == s21_NULL) {
    exit(0);
  }
  wcstombs(flag->buf, flag->arrl, x * sizeof(wchar_t));
  spec_d_1(flag, str);
  spec_s_1(flag, str);
}

void spec_s_1(spec *flag, char *str) {
  int count = 0;
  if (flag->buf[0] == '\0' && flag->c1 == 1) {
    str[flag->count_form] = flag->buf[0];
    flag->count_form += 1;
  }
  while (flag->buf[count] != '\0' && count < flag->count_tochn_s) {
    str[flag->count_form] = flag->buf[count];
    flag->count_form += 1;
    count += 1;
  }
  if (flag->left == 1 && flag->shirina1 > 0) {
    while (flag->shirina1 != 0) {
      str[flag->count_form] = ' ';
      flag->count_form += 1;
      flag->shirina1 -= 1;
    }
  }
  free(flag->buf);
}
