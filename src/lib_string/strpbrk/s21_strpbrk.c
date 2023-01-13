// created by pizpotli
#include "../../s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *tmp = s21_NULL;
  int x = 0;
  for (int i = 0; str1[i] != '\0' && x == 0; i++) {
    for (int j = 0; str2[j] != '\0' && x == 0; j++) {
      if (str1[i] == str2[j]) {
        tmp = (char *)&str1[i];
        x = 1;
      }
    }
  }
  return tmp;
}
