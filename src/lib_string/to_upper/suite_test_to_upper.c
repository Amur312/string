// created by pizpotli
#include "../../test.h"

START_TEST(to_upper_test1) {
  char str[25] = "    helloWOhetghehe    ";
  char str3[25] = "    HELLOWOHETGHEHE    ";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test2) {
  char str[25] = "helloWOhetghehe";
  char str3[25] = "HELLOWOHETGHEHE";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test3) {
  char str[25] = "HELLOWOHETGHEHE";
  char str3[25] = "HELLOWOHETGHEHE";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test4) {
  char str[25] = "1234helloWOhetghehe1234";
  char str3[25] = "1234HELLOWOHETGHEHE1234";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test5) {
  char str[25] = "        ";
  char str3[25] = "        ";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test6) {
  char str[25] = "1234";
  char str3[25] = "1234";
  ck_assert_str_eq(s21_to_upper(str), str3);
}
END_TEST

START_TEST(to_upper_test7) {
  char str[25] = "12привет34";
  ck_assert_ptr_eq(s21_to_upper(str), s21_NULL);
}
END_TEST

Suite *test_func_to_upper(void) {
  Suite *x;
  x = suite_create("check_to_upper");

  TCase *s21_to_upper_case;

  s21_to_upper_case = tcase_create("s21_to_upper");
  suite_add_tcase(x, s21_to_upper_case);

  tcase_add_test(s21_to_upper_case, to_upper_test1);
  tcase_add_test(s21_to_upper_case, to_upper_test2);
  tcase_add_test(s21_to_upper_case, to_upper_test3);
  tcase_add_test(s21_to_upper_case, to_upper_test4);
  tcase_add_test(s21_to_upper_case, to_upper_test5);
  tcase_add_test(s21_to_upper_case, to_upper_test6);
  tcase_add_test(s21_to_upper_case, to_upper_test7);

  return x;
}

void suite_test_to_upper(void) {
  Suite *x;
  SRunner *y;

  x = test_func_to_upper();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
