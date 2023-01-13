// created by pizpotli
#include "../../s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  char *tmp = s21_NULL;
  int len = (int)s21_strlen(src);
  int n = 1;
  int count = 0;
  int count_end = 0;
  int flag = 0;
  char c = ' ';
  if (src != s21_NULL) {
    if (trim_chars == s21_NULL) {
      flag = 1;
    }
    tmp = calloc(len + n, sizeof(char));
    if (flag == 0) {
      for (int i = 0; src[i] != '\0'; i++) {
        for (int j = 0; trim_chars[j] != '\0'; j++) {
          if (src[i] == trim_chars[j]) {
            count = 0;
            break;
          } else {
            count = 1;
          }
        }
        if (count == 1) {
          count = i;
          break;
        }
      }
    }
    if (flag == 1) {
      for (int i = 0; src[i] != '\0'; i++) {
        for (int j = 0; j < 1; j++) {
          if (src[i] == c) {
            count = 0;
          } else {
            count = 1;
          }
        }
        if (count == 1) {
          count = i;
          break;
        }
      }
    }
    len--;
    if (flag == 0) {
      for (; len >= 0; len--) {
        for (int j = 0; trim_chars[j] != '\0'; j++) {
          if (src[len] == trim_chars[j]) {
            count_end = 0;
            break;
          } else {
            count_end = 1;
          }
        }
        if (count_end == 1) {
          count_end = len;
          break;
        }
      }
    }
    if (flag == 1) {
      for (; len >= 0; len--) {
        for (int j = 0; j < 1; j++) {
          if (src[len] == c) {
            count_end = 0;
          } else {
            count_end = 1;
          }
        }
        if (count_end == 1) {
          count_end = len;
          break;
        }
      }
    }
    n = 0;
    for (; count <= count_end; count++) {
      tmp[n] = src[count];
      n++;
    }
  }
  return tmp;
}
