// created by pizpotli
#include "../../test.h"

START_TEST(strspn_test1) {
  char str1[15] = "Hello world!";
  char str2[15] = "world";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test2) {
  char str1[15] = "Hello world!";
  char str2[15] = "l";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test3) {
  char str1[15] = "Hello world!";
  char str2[15] = "";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test4) {
  char str1[15] = "Hello world!";
  char str2[15] = "f";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test5) {
  char str1[15] = "";
  char str2[15] = "world";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test6) {
  char str1[15] = "";
  char str2[15] = "";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test7) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello";
  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
}
END_TEST

Suite *test_func_strspn(void) {
  Suite *x;
  x = suite_create("check_strspn");

  TCase *s21_strspn_case;

  s21_strspn_case = tcase_create("s21_strspn");
  suite_add_tcase(x, s21_strspn_case);

  tcase_add_test(s21_strspn_case, strspn_test1);
  tcase_add_test(s21_strspn_case, strspn_test2);
  tcase_add_test(s21_strspn_case, strspn_test3);
  tcase_add_test(s21_strspn_case, strspn_test4);
  tcase_add_test(s21_strspn_case, strspn_test5);
  tcase_add_test(s21_strspn_case, strspn_test6);
  tcase_add_test(s21_strspn_case, strspn_test7);

  return x;
}

void suite_test_strspn(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strspn();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
