#include "../../test.h"

START_TEST(strcpy_test1) {
  char str1[9] = "abc";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test2) {
  char str1[9] = "abc\0";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test3) {
  char str1[9] = "abc\n";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test4) {
#line 2091
  char str1[9] = "ab\0c";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test5) {
#line 2096
  char str1[9] = "a\nbc";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test6) {
#line 2101
  char str1[9] = "abc ";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test7) {
#line 2106
  char str1[9] = " abc";
  char str2[] = "def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test8) {
#line 2111
  char str1[9] = "abc";
  char str2[] = " def";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test9) {
#line 2116
  char str1[9] = "abc";
  char str2[] = "def ";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test10) {
#line 2121
  char str1[9] = "abc";
  char str2[] = "def00";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

Suite *test_func_strcpy(void) {
  Suite *x;
  x = suite_create("check_strcpy");

  TCase *s21_strcpy_case;

  s21_strcpy_case = tcase_create("s21_strcpy");
  suite_add_tcase(x, s21_strcpy_case);

  tcase_add_test(s21_strcpy_case, strcpy_test1);
  tcase_add_test(s21_strcpy_case, strcpy_test2);
  tcase_add_test(s21_strcpy_case, strcpy_test3);
  tcase_add_test(s21_strcpy_case, strcpy_test4);
  tcase_add_test(s21_strcpy_case, strcpy_test5);
  tcase_add_test(s21_strcpy_case, strcpy_test6);
  tcase_add_test(s21_strcpy_case, strcpy_test7);
  tcase_add_test(s21_strcpy_case, strcpy_test8);
  tcase_add_test(s21_strcpy_case, strcpy_test9);
  tcase_add_test(s21_strcpy_case, strcpy_test10);

  return x;
}

void suite_test_strcpy(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strcpy();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
