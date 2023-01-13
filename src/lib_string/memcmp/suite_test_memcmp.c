// created by pizpotli
#include "../../test.h"

START_TEST(memcmp_test1) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello world!";
  s21_size_t n = 10;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_test2) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello world!";
  s21_size_t n = 0;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_test3) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello world!";
  s21_size_t n = 9;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_test4) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello";
  s21_size_t n = 5;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_test5) {
  char str1[15] = "Hello";
  char str2[15] = "Hello world!";
  s21_size_t n = 4;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_test6) {
  char str1[15] = {0};
  char str2[15] = {0};
  s21_size_t n = 10;
  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

Suite *test_func_memcmp(void) {
  Suite *x;
  x = suite_create("check_memcmp");

  TCase *s21_memcmp_case;

  s21_memcmp_case = tcase_create("s21_memcmp");
  suite_add_tcase(x, s21_memcmp_case);

  tcase_add_test(s21_memcmp_case, memcmp_test1);
  tcase_add_test(s21_memcmp_case, memcmp_test2);
  tcase_add_test(s21_memcmp_case, memcmp_test3);
  tcase_add_test(s21_memcmp_case, memcmp_test4);
  tcase_add_test(s21_memcmp_case, memcmp_test5);
  tcase_add_test(s21_memcmp_case, memcmp_test6);

  return x;
}

void suite_test_memcmp(void) {
  Suite *x;
  SRunner *y;

  x = test_func_memcmp();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
