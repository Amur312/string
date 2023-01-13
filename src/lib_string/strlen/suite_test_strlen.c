// created by pizpotli
#include "../../test.h"

START_TEST(strlen_test1) {
  char str1[15] = "Hello world!";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

START_TEST(strlen_test2) {
  char str1[45] = "Hello world------------fdvdf-bfb!";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

START_TEST(strlen_test3) {
  char str1[15] = "   ";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

START_TEST(strlen_test4) {
  char str1[15] = {0};
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

START_TEST(strlen_test5) {
  char str1[15] = "";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

START_TEST(strlen_test6) {
  char str1[15] = "Hello '\0'world!";
  ck_assert_int_eq(s21_strlen(str1), strlen(str1));
}
END_TEST

Suite *test_func_strlen(void) {
  Suite *x;
  x = suite_create("check_strlen");

  TCase *s21_strlen_case;

  s21_strlen_case = tcase_create("s21_strlen");
  suite_add_tcase(x, s21_strlen_case);

  tcase_add_test(s21_strlen_case, strlen_test1);
  tcase_add_test(s21_strlen_case, strlen_test2);
  tcase_add_test(s21_strlen_case, strlen_test3);
  tcase_add_test(s21_strlen_case, strlen_test4);
  tcase_add_test(s21_strlen_case, strlen_test5);
  tcase_add_test(s21_strlen_case, strlen_test6);

  return x;
}

void suite_test_strlen(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strlen();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
