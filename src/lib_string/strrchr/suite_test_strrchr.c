// created by pizpotli
#include "../../test.h"

START_TEST(strrchr_test1) {
  char str1[15] = "Hello world!";
  int c = 'w';
  ck_assert_str_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

START_TEST(strrchr_test2) {
  char str1[15] = "Hello world!";
  int c = 'l';
  ck_assert_str_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

START_TEST(strrchr_test3) {
  char str1[15] = "Hello world!";
  int c = 0;
  ck_assert_str_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

START_TEST(strrchr_test4) {
  char str1[15] = "Hello world!";
  int c = 'f';
  ck_assert_ptr_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

START_TEST(strrchr_test5) {
  char str1[15] = "";
  int c = 100;
  ck_assert_ptr_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

START_TEST(strrchr_test6) {
  char str1[15] = "";
  int c = 0;
  ck_assert_str_eq(s21_strrchr(str1, c), strrchr(str1, c));
}
END_TEST

Suite *test_func_strrchr(void) {
  Suite *x;
  x = suite_create("check_strrchr");

  TCase *s21_strrchr_case;

  s21_strrchr_case = tcase_create("s21_strrchr");
  suite_add_tcase(x, s21_strrchr_case);

  tcase_add_test(s21_strrchr_case, strrchr_test1);
  tcase_add_test(s21_strrchr_case, strrchr_test2);
  tcase_add_test(s21_strrchr_case, strrchr_test3);
  tcase_add_test(s21_strrchr_case, strrchr_test4);
  tcase_add_test(s21_strrchr_case, strrchr_test5);
  tcase_add_test(s21_strrchr_case, strrchr_test6);

  return x;
}

void suite_test_strrchr(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strrchr();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
