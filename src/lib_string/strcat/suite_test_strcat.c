// created by pizpotli
#include "../../test.h"

START_TEST(strcat_test1) {
  char str1[20] = "Hello ";
  char str2[20] = "world!";
  char str3[20] = "Hello ";
  char str4[20] = "world!";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strcat_test2) {
  char str1[20] = "Hello ";
  char str2[20] = " ";
  char str3[20] = "Hello ";
  char str4[20] = " ";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strcat_test3) {
  char str1[20] = "Hello ";
  char str2[20] = "\0";
  char str3[20] = "Hello ";
  char str4[20] = "\0";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strcat_test4) {
  char str1[20] = "\0";
  char str2[20] = "world";
  char str3[20] = "\0";
  char str4[20] = "world";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strcat_test5) {
  char str1[20] = "";
  char str2[20] = "";
  char str3[20] = "";
  char str4[20] = "";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strcat_test6) {
  char str1[20] = "\0";
  char str2[20] = "\0";
  char str3[20] = "\0";
  char str4[20] = "\0";
  s21_strcat(str1, str2);
  strcat(str3, str4);
  ck_assert_str_eq(str1, str3);
}
END_TEST

Suite *test_func_strcat(void) {
  Suite *x;
  x = suite_create("check_strcat");

  TCase *s21_strcat_case;

  s21_strcat_case = tcase_create("s21_strcat");
  suite_add_tcase(x, s21_strcat_case);

  tcase_add_test(s21_strcat_case, strcat_test1);
  tcase_add_test(s21_strcat_case, strcat_test2);
  tcase_add_test(s21_strcat_case, strcat_test3);
  tcase_add_test(s21_strcat_case, strcat_test4);
  tcase_add_test(s21_strcat_case, strcat_test5);
  tcase_add_test(s21_strcat_case, strcat_test6);

  return x;
}

void suite_test_strcat(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strcat();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}