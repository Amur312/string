// created by pizpotli
#include "../../test.h"

START_TEST(strstr_test1) {
  char str1[15] = "Hello world!";
  char str2[15] = "world";
  ck_assert_str_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test2) {
  char str1[15] = "Hello world!";
  char str2[15] = "l";
  ck_assert_str_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test3) {
  char str1[15] = "Hello world!";
  char str2[15] = "";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test4) {
  char str1[15] = "Hello world!";
  char str2[15] = "f";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test5) {
  char str1[15] = "";
  char str2[15] = "world";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test6) {
  char str1[15] = "";
  char str2[15] = "";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

Suite *test_func_strstr(void) {
  Suite *x;
  x = suite_create("check_strstr");

  TCase *s21_strstr_case;

  s21_strstr_case = tcase_create("s21_strstr");
  suite_add_tcase(x, s21_strstr_case);

  tcase_add_test(s21_strstr_case, strstr_test1);
  tcase_add_test(s21_strstr_case, strstr_test2);
  tcase_add_test(s21_strstr_case, strstr_test3);
  tcase_add_test(s21_strstr_case, strstr_test4);
  tcase_add_test(s21_strstr_case, strstr_test5);
  tcase_add_test(s21_strstr_case, strstr_test6);

  return x;
}

void suite_test_strstr(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strstr();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
