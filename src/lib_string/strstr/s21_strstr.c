// created by pizpotli
#include "../../s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *tmp = s21_NULL;
  int tmp2 = 0, x = 0, y = 0, count = 0;
  if (needle[0] == '\0') {
    tmp = (char *)&haystack[0];
  }
  while (haystack[x] != '\0') {
    y = 0;
    count = 0;
    while (needle[y] != '\0' && haystack[x] == needle[y]) {
      if (y == 0) {
        tmp2 = x;
      }
      x++;
      y++;
    }
    if (needle[y] == '\0') {
      tmp = (char *)&haystack[tmp2];
      break;
    }
    if (count == 0) {
      x++;
    }
  }
  return tmp;
}
