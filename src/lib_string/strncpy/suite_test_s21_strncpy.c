#include "../../test.h"

START_TEST(strncpy_test1) {
  char str1[9] = "abc";
  char str2[9] = "def";
  char str3[9] = "abc";
  s21_size_t n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test2) {
  char str1[9] = "ab\nc";
  char str2[9] = "def";
  char str3[9] = "ab\nc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test3) {
  char str1[9] = "ab\0c";
  char str2[9] = "def";
  char str3[9] = "ab\0c";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test4) {
  char str1[9] = "abc";
  char str2[9] = "de\0f";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test5) {
  char str1[9] = "abc";
  char str2[9] = "de\nf";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test6) {
  char str1[9] = "abc";
  char str2[9] = "def";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test7) {
  char str1[9] = "abc";
  char str2[9] = "def";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test8) {
  char str1[9] = "";
  char str2[9] = "def";
  char str3[9] = "";
  int n = 3;
  strncpy(str1, str2, n);
  s21_strncpy(str3, str2, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncpy_test9) {
  char str1[9] = "abc";
  char str2[9] = "a";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_test10) {
  char str1[9] = "abc";
  char str2[9] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

Suite *test_func_strncpy(void) {
  Suite *x;
  x = suite_create("check_strncpy");

  TCase *s21_strncpy_case;

  s21_strncpy_case = tcase_create("s21_strncpy");
  suite_add_tcase(x, s21_strncpy_case);

  tcase_add_test(s21_strncpy_case, strncpy_test1);
  tcase_add_test(s21_strncpy_case, strncpy_test2);
  tcase_add_test(s21_strncpy_case, strncpy_test3);
  tcase_add_test(s21_strncpy_case, strncpy_test4);
  tcase_add_test(s21_strncpy_case, strncpy_test5);
  tcase_add_test(s21_strncpy_case, strncpy_test6);
  tcase_add_test(s21_strncpy_case, strncpy_test7);
  tcase_add_test(s21_strncpy_case, strncpy_test8);
  tcase_add_test(s21_strncpy_case, strncpy_test9);
  tcase_add_test(s21_strncpy_case, strncpy_test10);

  return x;
}

void suite_test_strncpy(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strncpy();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
