// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_g_test1) {
  char str1[100];
  char str2[100];
  double x = 123456;
  ck_assert_int_eq(s21_sprintf(str1, "%+#G", x), sprintf(str2, "%+#G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test2) {
  char str1[100];
  char str2[100];
  double x = 12345678;
  ck_assert_int_eq(s21_sprintf(str1, "%-G", x), sprintf(str2, "%-G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test3) {
  char str1[100];
  char str2[100];
  double x = -123456;
  ck_assert_int_eq(s21_sprintf(str1, "%g", x), sprintf(str2, "%g", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test4) {
  char str1[100];
  char str2[100];
  double x = -12345678;
  ck_assert_int_eq(s21_sprintf(str1, "%G", x), sprintf(str2, "%G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test5) {
  char str1[100];
  char str2[100];
  double x = 123.12;
  ck_assert_int_eq(s21_sprintf(str1, "%G", x), sprintf(str2, "%G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test6) {
  char str1[100];
  char str2[100];
  double x = -123.12;
  ck_assert_int_eq(s21_sprintf(str1, "%.0G", x), sprintf(str2, "%.0G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test7) {
  char str1[100];
  char str2[100];
  double x = 0.2;
  ck_assert_int_eq(s21_sprintf(str1, "%G", x), sprintf(str2, "%G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test8) {
  char str1[100];
  char str2[100];
  double x = -0.2;
  ck_assert_int_eq(s21_sprintf(str1, "%0G", x), sprintf(str2, "%0G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test9) {
  char str1[100];
  char str2[100];
  double x = -0.00000000001;
  ck_assert_int_eq(s21_sprintf(str1, "%G", x), sprintf(str2, "%G", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test10) {
  char str1[100];
  char str2[100];
  double x = 0.00000000001;
  ck_assert_int_eq(s21_sprintf(str1, "%+g", x), sprintf(str2, "%+g", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test11) {
  char str1[100];
  char str2[100];
  int y, z;
  double x = 0.00000000001;
  ck_assert_int_eq(s21_sprintf(str1, "%+g %n", x, &y),
                   sprintf(str2, "%+g %n", x, &z));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(y, z);
}
END_TEST

START_TEST(sprintf_g_test12) {
  char str1[100];
  char str2[100];
  long double x = 12345678.2345;
  ck_assert_int_eq(s21_sprintf(str1, "%-LG", x), sprintf(str2, "%-LG", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_test13) {
  char str1[100];
  char str2[100];
  long double x = 12345678.2345;
  ck_assert_int_eq(s21_sprintf(str1, "%-#.12Lg", x),
                   sprintf(str2, "%-#.12Lg", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func_g(void) {
  Suite *x;
  x = suite_create("check_g");

  TCase *s21_sprintf_g_case;

  s21_sprintf_g_case = tcase_create("s21_sprintf_g");
  suite_add_tcase(x, s21_sprintf_g_case);

  tcase_add_test(s21_sprintf_g_case, sprintf_g_test1);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test2);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test3);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test4);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test5);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test6);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test7);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test8);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test9);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test10);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test11);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test12);
  tcase_add_test(s21_sprintf_g_case, sprintf_g_test13);

  return x;
}

void suite_test_g(void) {
  Suite *x;
  SRunner *y;

  x = test_func_g();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
