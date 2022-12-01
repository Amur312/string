
#ifndef _S21_STRING_H
#define _S21_STRING_H
#define s21_NULL (void *)0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long unsigned s21_size_t;

//size_t - это интегральный тип данных без знака, 
//Это тип, который используется для представления 
//размера объектов в байтах и, следовательно, используется 
//в качестве возвращаемого типа оператором sizeof

// 64-разрядный, то это будет typedef для unsigned long long 
// 32-разрядный, то Это просто typedef для unsigned int,

void *s21_memchr(const void *str, int c, s21_size_t n);



int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t n);





#endif // _S21_STRING_H