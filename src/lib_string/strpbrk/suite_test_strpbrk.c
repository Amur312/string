// created by pizpotli
#include "../../test.h"

START_TEST(strpbrk_test1) {
  char str1[15] = "Hello world!";
  char str2[15] = "world";
  ck_assert_str_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test2) {
  char str1[15] = "Hello world!";
  char str2[15] = "l";
  ck_assert_str_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test3) {
  char str1[15] = "Hello world!";
  char str2[15] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test4) {
  char str1[15] = "Hello world!";
  char str2[15] = "f";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test5) {
  char str1[15] = "";
  char str2[15] = "world";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test6) {
  char str1[15] = "";
  char str2[15] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

Suite *test_func_strpbrk(void) {
  Suite *x;
  x = suite_create("check_strpbrk");

  TCase *s21_strpbrk_case;

  s21_strpbrk_case = tcase_create("s21_strpbrk");
  suite_add_tcase(x, s21_strpbrk_case);

  tcase_add_test(s21_strpbrk_case, strpbrk_test1);
  tcase_add_test(s21_strpbrk_case, strpbrk_test2);
  tcase_add_test(s21_strpbrk_case, strpbrk_test3);
  tcase_add_test(s21_strpbrk_case, strpbrk_test4);
  tcase_add_test(s21_strpbrk_case, strpbrk_test5);
  tcase_add_test(s21_strpbrk_case, strpbrk_test6);

  return x;
}

void suite_test_strpbrk(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strpbrk();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}