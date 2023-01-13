// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_o_test1) {
  char str1[100];
  char str2[100];
  int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%o", x), sprintf(str2, "%o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test2) {
  char str1[100];
  char str2[100];
  int x = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%o", x), sprintf(str2, "%o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test3) {
  char str1[100];
  char str2[100];
  unsigned int x = 123;
  ck_assert_int_eq(s21_sprintf(str1, "%30.20o", x),
                   sprintf(str2, "%30.20o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test4) {
  char str1[100];
  char str2[100];
  unsigned short int x = 212;
  ck_assert_int_eq(s21_sprintf(str1, "%ho", x), sprintf(str2, "%ho", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test5) {
  char str1[100];
  char str2[100];
  unsigned int short x = -212;
  ck_assert_int_eq(s21_sprintf(str1, "%ho", x), sprintf(str2, "%ho", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test6) {
  char str1[100];
  char str2[100];
  long unsigned int x = LONG_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lo", x), sprintf(str2, "%lo", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test7) {
  char str1[100];
  char str2[100];
  long unsigned int x = LONG_MIN;
  ck_assert_int_eq(s21_sprintf(str1, "%lo", x), sprintf(str2, "%lo", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test8) {
  char str1[100];
  char str2[100];
  unsigned int short x = 400;
  ck_assert_int_eq(s21_sprintf(str1, "%ho", x), sprintf(str2, "%ho", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test9) {
  char str1[100];
  char str2[100];
  unsigned int x = 8123456;
  ck_assert_int_eq(s21_sprintf(str1, "%o", x), sprintf(str2, "%o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test10) {
  char str1[100];
  char str2[100];
  unsigned int x = -3123456;
  ck_assert_int_eq(s21_sprintf(str1, "%#30o", x), sprintf(str2, "%#30o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test11) {
  char str1[100];
  char str2[100];
  unsigned int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%030o", x), sprintf(str2, "%030o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test12) {
  char str1[100];
  char str2[100];
  unsigned int x = 12398456;
  ck_assert_int_eq(s21_sprintf(str1, "%-25o", x), sprintf(str2, "%-25o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test13) {
  char str1[100];
  char str2[100];
  unsigned int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%.0o", x), sprintf(str2, "%.0o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test14) {
  char str1[100];
  char str2[100];
  unsigned int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%10.2o", x), sprintf(str2, "%10.2o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test15) {
  char str1[100];
  char str2[100];
  unsigned int x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%.15o", x), sprintf(str2, "%.15o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_o_test16) {
  char str1[100];
  char str2[100];
  unsigned int x = -0;
  ck_assert_int_eq(s21_sprintf(str1, "%o", x), sprintf(str2, "%o", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func_o(void) {
  Suite *x;
  x = suite_create("check_o");

  TCase *s21_sprintf_o_case;

  s21_sprintf_o_case = tcase_create("s21_sprintf_o");
  suite_add_tcase(x, s21_sprintf_o_case);

  tcase_add_test(s21_sprintf_o_case, sprintf_o_test1);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test2);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test3);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test4);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test5);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test6);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test7);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test8);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test9);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test10);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test11);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test12);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test13);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test14);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test15);
  tcase_add_test(s21_sprintf_o_case, sprintf_o_test16);

  return x;
}

void suite_test_o(void) {
  Suite *x;
  SRunner *y;

  x = test_func_o();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
