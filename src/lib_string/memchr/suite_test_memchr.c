// created by pizpotli
#include "../../test.h"

START_TEST(memchr_test1) {
  char str1[15] = "Hello world!";
  s21_size_t n = 4;
  int c = 'l';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_test2) {
  char str1[15] = "Hello world!";
  s21_size_t n = 12;
  int c = 'l';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_test3) {
  char str1[15] = "Hello world!";
  s21_size_t n = 4;
  int c = 'w';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_test4) {
  char str1[15] = "Hello world!";
  s21_size_t n = 4;
  int c = ' ';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_test5) {
  char str1[15] = "Hello world!";
  s21_size_t n = 14;
  int c = ' ';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_test6) {
  char str1[15] = "";
  s21_size_t n = 4;
  int c = 'l';
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

Suite *test_func_memchr(void) {
  Suite *x;
  x = suite_create("check_memchr");

  TCase *s21_memchr_case;

  s21_memchr_case = tcase_create("s21_memchr");
  suite_add_tcase(x, s21_memchr_case);

  tcase_add_test(s21_memchr_case, memchr_test1);
  tcase_add_test(s21_memchr_case, memchr_test2);
  tcase_add_test(s21_memchr_case, memchr_test3);
  tcase_add_test(s21_memchr_case, memchr_test4);
  tcase_add_test(s21_memchr_case, memchr_test5);
  tcase_add_test(s21_memchr_case, memchr_test6);

  return x;
}

void suite_test_memchr(void) {
  Suite *x;
  SRunner *y;

  x = test_func_memchr();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
