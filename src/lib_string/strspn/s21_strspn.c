// created by pizpotli
#include "../../s21_string.h"

s21_size_t s21_strspn(const char *str1, const char *str2) {
  s21_size_t tmp = 0, tmp2 = 0, x = 0;
  for (int i = 0; str1[i] != '\0'; i++) {
    x = 0;
    for (int j = 0; str2[j] != '\0' && x == 0; j++) {
      if (str1[i] == str2[j]) {
        x = 1;
      }
    }
    if (i == 0 && x == 0) {
      break;
    }
    if (x == 1) {
      tmp += 1;
    }
    if (tmp2 < tmp) {
      tmp2 = tmp;
    }
    if (x == 0) {
      tmp = 0;
    }
  }
  return tmp2;
}
