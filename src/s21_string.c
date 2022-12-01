#include "s21_string.h"

int main() {
  // Массив источник данных
  unsigned char src[10] = "1234562";

  // Массив приемник данных
  unsigned char dst[10] = "";

  // Копируем 6 байт из массива src в массив dst
  s21_memcpy(dst, src, 7);

  // Вывод массива dst на консоль
  printf("dst: %s\n", dst);

  return 0;
}

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *str2 = (unsigned char *)str;
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (*((char *)str + i) == c) {
      str2 = (char *)str + i;
      flag = 1;
      break;
    }
  }
  return flag ? (void *)str2 : s21_NULL;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  unsigned char *arr1 = (unsigned char *)str1;
  unsigned char *arr2 = (unsigned char *)str2;
  int result = 0;
  for (int i = 0; i < n; ++i) {
    if (*arr1 != *arr2) {
      result = arr1[i] - arr2[i];
    }
    arr1++;
    arr2++;
  }

  return result;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *arr1 = (char *)dest;
  const char *arr2 = (const char *)src;

  for (int i = 0; i < n; i++) {
    *(arr1++) = (*arr2++);
  }
  return dest;
}