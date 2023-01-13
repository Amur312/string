#include "../../s21_string.h"

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  char *arr1 = (char *)dest;
  const char *arr2 = (const char *)src;
  if (arr1 <= arr2) {
    for (s21_size_t i = 0; i < n; i++) {
      arr1[i] = arr2[i];
    }
  } else {
    for (s21_size_t i = n; i > 0; i--) {
      arr1[i - 1] = arr2[i - 1];
    }
  }

  return dest;
}
