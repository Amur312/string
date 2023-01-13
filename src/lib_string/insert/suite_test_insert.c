// created by pizpotli
#include "../../test.h"

START_TEST(insert_test1) {
  char str[25] = "1234567891011";
  char str2[15] = "world";
  s21_size_t n = 9;
  char str3[25] = "123456789world1011";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

START_TEST(insert_test2) {
  char str[25] = "1234567891011";
  char str2[15] = "world";
  s21_size_t n = 7;
  char str3[25] = "1234567world891011";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

START_TEST(insert_test3) {
  char str[25] = "1234567891011";
  char str2[15] = "world";
  s21_size_t n = 0;
  char str3[25] = "1234567891011";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

START_TEST(insert_test4) {
  char str[25] = "1234567891011";
  char str2[15] = "world";
  s21_size_t n = 13;
  char str3[25] = "1234567891011world";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

START_TEST(insert_test5) {
  char str2[25] = "1234567891011";
  char str[15] = "world";
  s21_size_t n = 4;
  char str3[25] = "worl1234567891011d";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

START_TEST(insert_test6) {
  char str2[25] = "1234567891011";
  char str[15] = "world";
  s21_size_t n = 0;
  char str3[25] = "world";
  ck_assert_str_eq(s21_insert(str, str2, n), str3);
}
END_TEST

Suite *test_func_insert(void) {
  Suite *x;
  x = suite_create("check_insert");

  TCase *s21_insert_case;

  s21_insert_case = tcase_create("s21_insert");
  suite_add_tcase(x, s21_insert_case);

  tcase_add_test(s21_insert_case, insert_test1);
  tcase_add_test(s21_insert_case, insert_test2);
  tcase_add_test(s21_insert_case, insert_test3);
  tcase_add_test(s21_insert_case, insert_test4);
  tcase_add_test(s21_insert_case, insert_test5);
  tcase_add_test(s21_insert_case, insert_test6);

  return x;
}

void suite_test_insert(void) {
  Suite *x;
  SRunner *y;

  x = test_func_insert();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
