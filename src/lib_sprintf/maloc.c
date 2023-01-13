// created by pizpotli
#include "../s21_string.h"

void maloc(spec *flag, char *str1) {
  int len = 200, i = 0;
  if ((flag->buf = (char *)malloc(len * sizeof(char))) != s21_NULL) {
    len++;
    for (; str1[i] != '\0'; i++) {
      flag->buf[i] = str1[i];
    }
    flag->buf[i] = '\0';
  } else {
    exit(0);
  }
}
