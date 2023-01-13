#include "../../s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  const char *tmp_1 = str1;
  s21_size_t count_1 = 0;
  s21_size_t count_2 = s21_strlen(str1);
  while (*str2 != '\0') {
    while (*str1 != '\0') {
      if (*str1 != *str2) {
        str1++;
        count_1++;
      } else {
        break;
      }
    }
    str2++;
    if (count_1 <= count_2) {
      count_2 = count_1;
      count_1 = 0;
    }
    count_1 = 0;
    str1 = tmp_1;
  }
  return count_2;
}
