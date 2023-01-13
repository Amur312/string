// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_x_test1) {
  char str1[100];
  char str2[100];
  int x = -123456;
  ck_assert_int_eq(s21_sprintf(str1, "%.10x", x), sprintf(str2, "%.10x", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test2) {
  char str1[100];
  char str2[100];
  int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%0#40X", x), sprintf(str2, "%0#40X", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test3) {
  char str1[100];
  char str2[100];
  int short x = 434;
  ck_assert_int_eq(s21_sprintf(str1, "%hx", x), sprintf(str2, "%hx", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test4) {
  char str1[100];
  char str2[100];
  short int x = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%hx", x), sprintf(str2, "%hx", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test5) {
  char str1[100];
  char str2[100];
  short int x = -1234;
  ck_assert_int_eq(s21_sprintf(str1, "%hx", x), sprintf(str2, "%hx", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test6) {
  char str1[100];
  char str2[100];
  int x = 429496;
  ck_assert_int_eq(s21_sprintf(str1, "%x", x), sprintf(str2, "%x", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test7) {
  char str1[100];
  char str2[100];
  long int x = 33333333333;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", x), sprintf(str2, "%lx", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test8) {
  char str1[100];
  char str2[100];
  int x = 703711;
  ck_assert_int_eq(s21_sprintf(str1, "%X", x), sprintf(str2, "%X", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test9) {
  char str1[100];
  char str2[100];
  int x = 703711;
  ck_assert_int_eq(s21_sprintf(str1, "%x", x), sprintf(str2, "%x", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test10) {
  char str1[100];
  char str2[100];
  short int x = -123;
  ck_assert_int_eq(s21_sprintf(str1, "%hX", x), sprintf(str2, "%hX", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_x_test11) {
  char str1[100];
  char str2[100];
  long int x = 33333333333;
  ck_assert_int_eq(s21_sprintf(str1, "%lX", x), sprintf(str2, "%lX", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func_x(void) {
  Suite *x;
  x = suite_create("check_x");

  TCase *s21_sprintf_x_case;

  s21_sprintf_x_case = tcase_create("s21_sprintf_x");
  suite_add_tcase(x, s21_sprintf_x_case);

  tcase_add_test(s21_sprintf_x_case, sprintf_x_test1);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test2);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test3);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test4);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test5);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test6);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test7);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test8);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test9);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test10);
  tcase_add_test(s21_sprintf_x_case, sprintf_x_test11);

  return x;
}

void suite_test_x(void) {
  Suite *x;
  SRunner *y;

  x = test_func_x();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
