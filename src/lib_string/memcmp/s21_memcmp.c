#include "../../s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  unsigned char *arr1 = (unsigned char *)str1;
  unsigned char *arr2 = (unsigned char *)str2;
  int result = 0;
  for (int i = 0; i < (int)n; i++) {
    if (*(arr1 + i) != *(arr2 + i)) {
      result = *(char *)(arr1 + i) - *(char *)(arr2 + i);
      break;
    }
  }

  return result;
}
