// created by pizpotli
#include "../../s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  char *tmp = s21_NULL;
  s21_size_t len = s21_strlen(src);
  s21_size_t n = 1;
  if (src != s21_NULL && start_index <= len) {
    tmp = calloc(len + n + s21_strlen(str), sizeof(char));
    for (s21_size_t i = 0, m = 0; src[m] != '\0'; m++, i++) {
      if (i == start_index - n) {
        tmp[i] = src[m];
        i++;
        m++;
        for (s21_size_t j = 0; str[j] != '\0'; j++) {
          tmp[i] = str[j];
          i++;
        }
        i--;
        m--;
      } else {
        tmp[i] = src[m];
      }
    }
  } else {
    tmp = s21_NULL;
  }
  return tmp;
}
