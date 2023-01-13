// created by pizpotli
#include "../../s21_string.h"

void *s21_to_upper(const char *str) {
  char *tmp = s21_NULL;
  s21_size_t n = 1;
  s21_size_t len = s21_strlen(str);
  if (str != s21_NULL) {
    tmp = calloc(len + n, sizeof(char));
    for (s21_size_t i = 0; i < len; i++) {
      if ((int)str[i] > 0 && (int)str[i] < 127) {
        if (str[i] > 96 && str[i] < 123) {
          tmp[i] = str[i] - 32;
        } else {
          tmp[i] = str[i];
        }
      } else {
        tmp = s21_NULL;
        break;
      }
    }
  }
  return tmp;
}
