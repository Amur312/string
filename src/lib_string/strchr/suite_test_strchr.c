// created by pizpotli
#include "../../test.h"

START_TEST(strchr_test1) {
  char str[20] = "Hello ";
  int x = 'l';
  ck_assert_str_eq(s21_strchr(str, x), strchr(str, x));
}
END_TEST

START_TEST(strchr_test2) {
  char str[20] = "Hello ";
  int x = 'o';
  ck_assert_str_eq(s21_strchr(str, x), strchr(str, x));
}
END_TEST

START_TEST(strchr_test3) {
  char str[20] = "Hello ";
  int x = ' ';
  ck_assert_str_eq(s21_strchr(str, x), strchr(str, x));
}
END_TEST

START_TEST(strchr_test4) {
  char str[20] = "Hello ";
  int x = 0;
  ck_assert_str_eq(s21_strchr(str, x), strchr(str, x));
}
END_TEST

START_TEST(strchr_test5) {
  char str[20] = "Hel\0lo ";
  int x = 0;
  ck_assert_str_eq(s21_strchr(str, x), strchr(str, x));
}
END_TEST

Suite *test_func_strchr(void) {
  Suite *x;
  x = suite_create("check_strchr");

  TCase *s21_strchr_case;

  s21_strchr_case = tcase_create("s21_strchr");
  suite_add_tcase(x, s21_strchr_case);

  tcase_add_test(s21_strchr_case, strchr_test1);
  tcase_add_test(s21_strchr_case, strchr_test2);
  tcase_add_test(s21_strchr_case, strchr_test3);
  tcase_add_test(s21_strchr_case, strchr_test4);
  tcase_add_test(s21_strchr_case, strchr_test5);

  return x;
}

void suite_test_strchr(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strchr();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}