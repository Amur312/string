#include "../../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *str2 = (unsigned char *)str;
  int flag = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (*((char *)str + i) == c) {
      str2 = (unsigned char *)(str + i);
      flag = 1;
      break;
    }
  }
  return flag ? (void *)str2 : s21_NULL;
}
