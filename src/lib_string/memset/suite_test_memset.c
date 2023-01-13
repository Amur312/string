// created by pizpotli
#include "../../test.h"

START_TEST(memset_test1) {
  char str1[15] = "Hello world!";
  s21_size_t n = 10;
  int c = 'z';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

START_TEST(memset_test2) {
  char str1[15] = "Hello world!";
  s21_size_t n = 0;
  int c = 'z';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

START_TEST(memset_test3) {
  char str1[15] = "Hello world!";
  s21_size_t n = 10;
  int c = '\0';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

START_TEST(memset_test4) {
  char str1[15] = {0};
  s21_size_t n = 10;
  int c = 'z';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

START_TEST(memset_test5) {
  char str1[15] = "Hello world!";
  s21_size_t n = 2;
  int c = '9';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

START_TEST(memset_test6) {
  char str1[15] = "Hello world!";
  s21_size_t n = 12;
  int c = 'z';
  ck_assert_ptr_eq(s21_memset(str1, c, n), memset(str1, c, n));
}
END_TEST

Suite *test_func_memset(void) {
  Suite *x;
  x = suite_create("check_memset");

  TCase *s21_memset_case;

  s21_memset_case = tcase_create("s21_memset");
  suite_add_tcase(x, s21_memset_case);

  tcase_add_test(s21_memset_case, memset_test1);
  tcase_add_test(s21_memset_case, memset_test2);
  tcase_add_test(s21_memset_case, memset_test3);
  tcase_add_test(s21_memset_case, memset_test4);
  tcase_add_test(s21_memset_case, memset_test5);
  tcase_add_test(s21_memset_case, memset_test6);

  return x;
}

void suite_test_memset(void) {
  Suite *x;
  SRunner *y;

  x = test_func_memset();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
