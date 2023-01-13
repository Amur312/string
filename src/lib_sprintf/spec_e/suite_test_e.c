// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_e_test1) {
  char str1[100];
  char str2[100];
  double x = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test2) {
  char str1[100];
  char str2[100];
  double x = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%E", x), sprintf(str2, "%E", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test3) {
  char str1[100];
  char str2[100];
  double x = 0.004;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test4) {
  char str1[100];
  char str2[100];
  double x = -0.004;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test5) {
  char str1[100];
  char str2[100];
  double x = -123.4;
  ck_assert_int_eq(s21_sprintf(str1, "%.0e", x), sprintf(str2, "%.0e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test6) {
  char str1[100];
  char str2[100];
  double x = 123.4;
  ck_assert_int_eq(s21_sprintf(str1, "%12.3e", x), sprintf(str2, "%12.3e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test7) {
  char str1[100];
  char str2[100];
  double x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%15e", x), sprintf(str2, "%15e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test8) {
  char str1[100];
  char str2[100];
  double x = -123456;
  ck_assert_int_eq(s21_sprintf(str1, "%.10e", x), sprintf(str2, "%.10e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test9) {
  char str1[100];
  char str2[100];
  double x = 0.00000000000000000000000007;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test10) {
  char str1[100];
  char str2[100];
  int i = 40, j = 15;
  double x = 1234567891234;
  ck_assert_int_eq(s21_sprintf(str1, "%#*.*e", i, j, x),
                   sprintf(str2, "%#*.*e", i, j, x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test11) {
  char str1[100];
  char str2[100];
  double x = -0;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test12) {
  char str1[100];
  char str2[100];
  double x = -0.00000000000000000000000007;
  ck_assert_int_eq(s21_sprintf(str1, "%e", x), sprintf(str2, "%e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test13) {
  char str1[100];
  char str2[100];
  int z = 18, y = 8;
  double x = 0.1234657;
  ck_assert_int_eq(s21_sprintf(str1, "%*.*e", z, y, x),
                   sprintf(str2, "%*.*e", z, y, x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test14) {
  char str1[100];
  char str2[100];
  double x = 1.444;
  ck_assert_int_eq(s21_sprintf(str1, "%030e", x), sprintf(str2, "%030e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test15) {
  char str1[100];
  char str2[100];
  double x = -0.444;
  ck_assert_int_eq(s21_sprintf(str1, "%-#+30e", x),
                   sprintf(str2, "%-#+30e", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test16) {
  char str1[100];
  char str2[100];
  long double x = 1.444;
  ck_assert_int_eq(s21_sprintf(str1, "%-30Le", x), sprintf(str2, "%-30Le", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test17) {
  char str1[100];
  char str2[100];
  long double x = 0.0000000000000000000444444;
  ck_assert_int_eq(s21_sprintf(str1, "%+30Le", x), sprintf(str2, "%+30Le", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_test18) {
  char str1[100];
  char str2[100];
  long double x = 1234325.0043234536;
  ck_assert_int_eq(s21_sprintf(str1, "%LE", x), sprintf(str2, "%LE", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func_e(void) {
  Suite *x;
  x = suite_create("check_e");

  TCase *s21_sprintf_e_case;

  s21_sprintf_e_case = tcase_create("s21_sprintf_e");
  suite_add_tcase(x, s21_sprintf_e_case);

  tcase_add_test(s21_sprintf_e_case, sprintf_e_test1);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test2);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test3);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test4);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test5);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test6);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test7);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test8);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test9);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test10);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test11);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test12);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test13);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test14);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test15);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test16);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test17);
  tcase_add_test(s21_sprintf_e_case, sprintf_e_test18);

  return x;
}

void suite_test_e(void) {
  Suite *x;
  SRunner *y;

  x = test_func_e();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
