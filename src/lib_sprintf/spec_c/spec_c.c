// created by pizpotli
#include "../../s21_string.h"

void spec_c(char *str, spec *flag) {
  flag->s = 1;
  char str1[2] = {"\0"};
  str1[0] = flag->c;
  maloc(flag, str1);
  spec_d_1(flag, str);
  spec_s_1(flag, str);
  s21_memset(str1, 0, sizeof(char));
}

void spec_cl(char *str,
             spec *flag) {  // решить проблему с возвращаемым значением
  flag->s = 1;
  flag->buf = (char *)calloc(flag->cl, sizeof(wchar_t));
  if (flag->buf == s21_NULL) {
    exit(0);
  }
  wctomb(flag->buf, flag->cl);
  *(flag->buf + s21_strlen(flag->buf)) = '\0';
  spec_d_1(flag, str);
  spec_s_1(flag, str);
}