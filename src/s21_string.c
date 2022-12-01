#include "s21_string.h"

int main() {
  // Исходные массивы
  unsigned char src[15] = "1234567890";
  unsigned char dst[15] = "1234567890";

  // Сравниваем первые 10 байт массивов
  // и результат выводим на экран
  if (memcmp(src, dst, 10) == 0)
    puts("The memory areas are identical");
  else
    puts("Memory areas are different");

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