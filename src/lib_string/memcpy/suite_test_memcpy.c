// created by pizpotli
#include "../../test.h"

START_TEST(memcpy_test1) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 10;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

START_TEST(memcpy_test2) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 5;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

START_TEST(memcpy_test3) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 0;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

START_TEST(memcpy_test4) {
  char str1[15] = {0};
  char str2[15] = {0};
  s21_size_t n = 10;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

START_TEST(memcpy_test5) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 14;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

START_TEST(memcpy_test6) {
  char str1[15] = {0};
  char str2[15] = {0};
  s21_size_t n = 0;
  ck_assert_ptr_eq(s21_memcpy(str1, str2, n), memcpy(str1, str2, n));
}
END_TEST

Suite *test_func_memcpy(void) {
  Suite *x;
  x = suite_create("check_memcpy");

  TCase *s21_memcpy_case;

  s21_memcpy_case = tcase_create("s21_memcpy");
  suite_add_tcase(x, s21_memcpy_case);

  tcase_add_test(s21_memcpy_case, memcpy_test1);
  tcase_add_test(s21_memcpy_case, memcpy_test2);
  tcase_add_test(s21_memcpy_case, memcpy_test3);
  tcase_add_test(s21_memcpy_case, memcpy_test4);
  tcase_add_test(s21_memcpy_case, memcpy_test5);
  tcase_add_test(s21_memcpy_case, memcpy_test6);

  return x;
}

void suite_test_memcpy(void) {
  Suite *x;
  SRunner *y;

  x = test_func_memcpy();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
