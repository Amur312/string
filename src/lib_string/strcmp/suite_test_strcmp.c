// created by pizpotli
#include "../../test.h"

START_TEST(strcmp_test1) {
  char str1[10] = "Hello ";
  char str2[10] = "Hello ";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test2) {
  char str1[10] = " ";
  char str2[10] = " ";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test3) {
  char str1[10] = "\0";
  char str2[10] = "\0";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test4) {
  char str1[10] = "\0";
  char str2[10] = "world";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test5) {
  char str1[10] = "";
  char str2[10] = "";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test6) {
  char str1[10] = "world";
  char str2[10] = "\0";
  ck_assert_int_eq(s21_strcmp(str1, str2), strcmp(str1, str2));
}
END_TEST

Suite *test_func_strcmp(void) {
  Suite *x;
  x = suite_create("check_strcmp");

  TCase *s21_strcmp_case;

  s21_strcmp_case = tcase_create("s21_strcmp");
  suite_add_tcase(x, s21_strcmp_case);

  tcase_add_test(s21_strcmp_case, strcmp_test1);
  tcase_add_test(s21_strcmp_case, strcmp_test2);
  tcase_add_test(s21_strcmp_case, strcmp_test3);
  tcase_add_test(s21_strcmp_case, strcmp_test4);
  tcase_add_test(s21_strcmp_case, strcmp_test5);
  tcase_add_test(s21_strcmp_case, strcmp_test6);

  return x;
}

void suite_test_strcmp(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strcmp();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}