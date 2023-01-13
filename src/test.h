// created by pizpotli
#ifndef SRC_TEST_H_
#define SRC_TEST_H_

#include <check.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "s21_string.h"

void suite_test_memchr(void);
void suite_test_memcmp(void);
void suite_test_memcpy(void);
void suite_test_memmove(void);
void suite_test_memset(void);
void suite_test_strchr(void);
void suite_test_strcat(void);
void suite_test_strncat(void);
void suite_test_strcmp(void);
void suite_test_strncmp(void);
void suite_test_strlen(void);
void suite_test_strpbrk(void);
void suite_test_strrchr(void);
void suite_test_strspn(void);
void suite_test_strstr(void);
void suite_test_strtok(void);
void suite_test_trim(void);
void suite_test_insert(void);
void suite_test_to_lower(void);
void suite_test_to_upper(void);
void suite_test_strcpy(void);
void suite_test_strcspn(void);
void suite_test_sscanf(void);
void suite_test_strerror(void);
void suite_test_strncpy(void);
void suite_test_x(void);
void suite_test_g(void);
void suite_test_e(void);
void suite_test_f(void);
void suite_test_c(void);
void suite_test_s(void);
void suite_test_o(void);
void suite_test_p(void);
void suite_test_d(void);
void suite_test_u(void);
void main_test(void);
Suite *test_func_strcat(void);
Suite *test_func_x(void);
Suite *test_func_g(void);
Suite *test_func_e(void);
Suite *test_func_f(void);
Suite *test_func_c(void);
Suite *test_func_s(void);
Suite *test_func_o(void);
Suite *test_func_p(void);
Suite *test_func_d(void);
Suite *test_func_u(void);
Suite *test_func(void);

#endif  // SRC_TEST_H_
