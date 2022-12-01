#include "s21_string.h"

int main() {
  // Исходный массив
   unsigned char src[15]="1234567890";
 
   // Заполняем массив символом ‘1’
   memset (src, '_', 10);

   // Вывод массива src на консоль
   printf ("src: %s\n",src);

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

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  char *arr1 = (char *)dest;
  const char *arr2 = (const char *)src;
  if (arr1 <= arr2) {
    for (int i = 0; i < n; i++) {
      arr1[i] = arr2[i];
    }
  } else {
    for (int i = n; i > 0; i--) {
      arr1[i - 1] = arr2[i - 1];
    }
  }

  return dest;
}

void *s21_memset(void *str, int c, size_t n){
  char * arr1 = (char *)str;
 for(int i = 0; i < n; i++){
    arr1[i] = c;
 }
  return str;
}