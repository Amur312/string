// created by pizpotli
#include "../../test.h"

START_TEST(strncmp_test1) {
  char str1[10] = "Hello ";
  char str2[10] = "world!";
  s21_size_t n = 4;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

START_TEST(strncmp_test2) {
  char str1[10] = "Hello ";
  char str2[10] = "Hello ";
  s21_size_t n = 5;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

START_TEST(strncmp_test3) {
  char str1[10] = "";
  char str2[10] = "";
  s21_size_t n = 4;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

START_TEST(strncmp_test4) {
  char str1[10] = " ";
  char str2[10] = " ";
  s21_size_t n = 4;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

START_TEST(strncmp_test5) {
  char str1[10] = "world";
  char str2[10] = "hello";
  s21_size_t n = 4;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

START_TEST(strncmp_test6) {
  char str1[15] = "Hello world!";
  char str2[15] = "Hello world!";
  s21_size_t n = 12;
  ck_assert_int_eq(s21_strncmp(str1, str2, n), strncmp(str1, str2, n));
}
END_TEST

Suite *test_func_strncmp(void) {
  Suite *x;
  x = suite_create("check_strncmp");

  TCase *s21_strncmp_case;

  s21_strncmp_case = tcase_create("s21_strncmp");
  suite_add_tcase(x, s21_strncmp_case);

  tcase_add_test(s21_strncmp_case, strncmp_test1);
  tcase_add_test(s21_strncmp_case, strncmp_test2);
  tcase_add_test(s21_strncmp_case, strncmp_test3);
  tcase_add_test(s21_strncmp_case, strncmp_test4);
  tcase_add_test(s21_strncmp_case, strncmp_test5);
  tcase_add_test(s21_strncmp_case, strncmp_test6);

  return x;
}

void suite_test_strncmp(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strncmp();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}