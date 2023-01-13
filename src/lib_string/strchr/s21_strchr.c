// created by pizpotli
#include "../../s21_string.h"

char *s21_strchr(const char *str, int c) {
  int x = 0;
  char *str1 = s21_NULL;
  while (c != str[x] && str[x] != '\0') {
    x++;
  }
  if (c == str[x]) {
    str1 = (char *)&str[x];
  }
  return str1;
}
