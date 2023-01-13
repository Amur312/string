#include "../../s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *arr1 = (char *)dest;
  const char *arr2 = (const char *)src;

  for (s21_size_t i = 0; i < n; i++) {
    *(arr1++) = (*arr2++);
  }
  return dest;
}
