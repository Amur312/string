// created by pizpotli
#include "../../test.h"

START_TEST(strncat_test1) {
  char str1[15] = "Hello ";
  char str2[10] = "world!";
  char str3[15] = "Hello ";
  char str4[10] = "world!";
  s21_size_t n = 4;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncat_test2) {
  char str1[10] = "Hello ";
  char str2[10] = " ";
  char str3[10] = "Hello ";
  char str4[10] = " ";
  s21_size_t n = 2;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncat_test3) {
  char str1[10] = "Hello ";
  char str2[10] = "\0";
  char str3[10] = "Hello ";
  char str4[10] = "\0";
  s21_size_t n = 3;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncat_test4) {
  char str1[10] = "\0";
  char str2[10] = "world";
  char str3[10] = "\0";
  char str4[10] = "world";
  s21_size_t n = 5;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncat_test5) {
  char str1[10] = "";
  char str2[10] = "";
  char str3[10] = "";
  char str4[10] = "";
  s21_size_t n = 1;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncat_test6) {
  char str1[10] = "\0";
  char str2[10] = "\0";
  char str3[10] = "\0";
  char str4[10] = "\0";
  s21_size_t n = 5;
  s21_strncat(str1, str2, n);
  strncat(str3, str4, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

Suite *test_func_strncat(void) {
  Suite *x;
  x = suite_create("check_strncat");

  TCase *s21_strncat_case;

  s21_strncat_case = tcase_create("s21_strncat");
  suite_add_tcase(x, s21_strncat_case);

  tcase_add_test(s21_strncat_case, strncat_test1);
  tcase_add_test(s21_strncat_case, strncat_test2);
  tcase_add_test(s21_strncat_case, strncat_test3);
  tcase_add_test(s21_strncat_case, strncat_test4);
  tcase_add_test(s21_strncat_case, strncat_test5);
  tcase_add_test(s21_strncat_case, strncat_test6);

  return x;
}

void suite_test_strncat(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strncat();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}