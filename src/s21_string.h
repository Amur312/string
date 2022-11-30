
#ifndef _S21_STRING_H
#define _S21_STRING_H
#define s21_NULL (void *)0

#include <stdio.h>


void *s21_memchr(const void *str, int c, size_t n);
//size_t - это интегральный тип данных без знака, 
//Это тип, который используется для представления 
//размера объектов в байтах и, следовательно, используется 
//в качестве возвращаемого типа оператором sizeof

// 64-разрядный, то это будет typedef для unsigned long long 
// 32-разрядный, то Это просто typedef для unsigned int,
typedef long unsigned s21_size_t;

#endif // _S21_STRING_H