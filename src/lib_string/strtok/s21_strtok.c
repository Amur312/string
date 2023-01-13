// created by pizpotli
#include "../../s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *tmp = s21_NULL;
  s21_size_t i = 0;
  static int len = 0;
  int flag = 0;
  if (str != s21_NULL) {
    len = (int)s21_strlen(str);
    str[len] = 0;
    tmp = str;
    i = s21_strcspn(str, delim);
    if (i != s21_strlen(str)) {
      if (i != 0) {
        tmp = str + i + s21_strspn(str, delim) + 1;
        len = len - (int)i - (int)s21_strspn(str, delim) - 1;
        str[i + s21_strspn(str, delim)] = '\0';
        flag = 1;
      } else {
        tmp = str + i + s21_strspn(str, delim);
        str = tmp;
      }
    }
  }
  if (flag == 0) {
    str = tmp;
    if (str != s21_NULL && len > 0) {
      i = s21_strcspn(str, delim);
      if (i == 0) {
        len = len - (int)i - (int)s21_strspn(str, delim);
        if (len > 0) {
          tmp = str + i + s21_strspn(str, delim);
          str = tmp;
          i = s21_strcspn(str, delim);
          tmp = str + i + s21_strspn(str, delim) + 1;
          len = len - (int)i - (int)s21_strspn(str, delim) - 1;
          flag = 1;
        } else {
          tmp = s21_NULL;
          str = s21_NULL;
        }
      }
    }
    if (flag == 0) {
      if (len > 0) {
        tmp = str + i + s21_strspn(str, delim) + 1;
        len = len - (int)i - (int)s21_strspn(str, delim) - 1;
        str[i] = '\0';
      } else {
        tmp = s21_NULL;
        str = s21_NULL;
      }
    }
  }
  return str;
}
