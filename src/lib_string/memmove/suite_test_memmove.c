// created by pizpotli
#include "../../test.h"

START_TEST(memmove_test1) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 10;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test2) {
  char str2[15] = {0};
  char str1[15] = "Hello world!";
  s21_size_t n = 5;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test3) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 0;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test4) {
  char str1[15] = {0};
  char str2[15] = {0};
  s21_size_t n = 10;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test5) {
  char str1[15] = {0};
  char str2[15] = "Hello world!";
  s21_size_t n = 14;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test6) {
  char str1[15] = {0};
  char str2[15] = {0};
  s21_size_t n = 0;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

START_TEST(memmove_test7) {
  char str1[15] = "Hello world!";
  char str2[10] = "regfdh";
  s21_size_t n = 5;
  ck_assert_ptr_eq(s21_memmove(str1, str2, n), memmove(str1, str2, n));
}
END_TEST

Suite *test_func_memmove(void) {
  Suite *x;
  x = suite_create("check_memmove");

  TCase *s21_memmove_case;

  s21_memmove_case = tcase_create("s21_memmove");
  suite_add_tcase(x, s21_memmove_case);

  tcase_add_test(s21_memmove_case, memmove_test1);
  tcase_add_test(s21_memmove_case, memmove_test2);
  tcase_add_test(s21_memmove_case, memmove_test3);
  tcase_add_test(s21_memmove_case, memmove_test4);
  tcase_add_test(s21_memmove_case, memmove_test5);
  tcase_add_test(s21_memmove_case, memmove_test6);
  tcase_add_test(s21_memmove_case, memmove_test7);

  return x;
}

void suite_test_memmove(void) {
  Suite *x;
  SRunner *y;

  x = test_func_memmove();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
