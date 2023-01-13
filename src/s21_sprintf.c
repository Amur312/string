// created by pizpotli
#include "s21_string.h"

int s21_sprintf(char *str, const char *format, ...) {
  spec flag = {0};
  int z, p = 0;
  z = s21_strlen(format);
  va_list arg;
  va_start(arg, format);
  flag.strlen1 = s21_strlen(format);
  for (int i = 0; i < z; i++) {
    flag.count_tochn = -1;
    if (format[i] == '%') {
      flag.spec[0] = '%';
      spec_parser(&i, format, &flag, &arg);
    }
    if (!s21_strcmp(flag.spec, "%d")) {
      s21_str_d(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%i")) {
      s21_str_i(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%u")) {
      s21_str_u(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%c")) {
      s21_str_c(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%s")) {
      s21_str_s(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%p")) {
      s21_str_p(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%n")) {
      s21_str_n(&flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%o")) {
      s21_str_o(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%f")) {
      s21_str_f(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%g")) {
      s21_str_g(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%G")) {
      s21_str_G(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%e")) {
      s21_str_e(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%E")) {
      s21_str_E(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%x")) {
      s21_str_x(str, &flag, &arg, &p);
      continue;
    }
    if (!s21_strcmp(flag.spec, "%X")) {
      s21_str_X(str, &flag, &arg, &p);
      continue;
    }
    str[flag.count_form] = format[i];
    flag.count_form += 1;
  }
  str[flag.count_form] = '\0';
  return flag.count_form;
}
