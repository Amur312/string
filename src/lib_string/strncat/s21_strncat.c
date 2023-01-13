// created by pizpotli
#include "../../s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  int x = s21_strlen(dest);
  s21_size_t i = x;
  int j = 0;
  for (; src[j] != '\0' && i < x + n; i++) {
    dest[i] = src[j];
    j++;
  }
  dest[i] = '\0';
  return dest;
}