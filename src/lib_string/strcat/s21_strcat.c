// created by pizpotli
#include "../../s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  int x = (int)s21_strlen(dest);
  int i = x, j = 0;
  for (; src[j] != '\0'; i++) {
    dest[i] = src[j];
    j++;
  }
  dest[i] = '\0';
  return dest;
}
