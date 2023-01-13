// created by pizpotli
#include "../../s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *tmp = s21_NULL;
  int i = 0;
  for (; str[i] != '\0'; i++) {
    if (str[i] == c) {
      tmp = (char *)&str[i];
    }
  }
  if (str[i] == c) {
    tmp = (char *)&str[i];
  }
  return tmp;
}
