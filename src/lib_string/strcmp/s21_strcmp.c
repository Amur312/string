// created by pizpotli
#include "../../s21_string.h"

int s21_strcmp(const char *str1, const char *str2) {
  int x = 0;
  int y = 0;
  while ((str1[x] != '\0' || str1[x] > str2[x]) ||
         (str2[x] != '\0' || str2[x] > str1[x])) {
    if (str1[x] > str2[x]) {
      y = str1[x];
      break;
    } else if (str2[x] > str1[x]) {
      y = -str2[x];
      break;
    } else {
      y = 0;
    }
    x++;
  }
  return y;
}
