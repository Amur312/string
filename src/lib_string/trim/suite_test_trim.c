// created by pizpotli
#include "../../test.h"

START_TEST(trim_test1) {
  char str[25] = "    helloWOhetghehe    ";
  char str3[25] = "helloWOhetghehe";
  ck_assert_str_eq(s21_trim(str, s21_NULL), str3);
}
END_TEST

START_TEST(trim_test2) {
  char str[25] = "    helloWOhetghehe    ";
  char str2[25] = " ";
  char str3[25] = "helloWOhetghehe";
  ck_assert_str_eq(s21_trim(str, str2), str3);
}
END_TEST

START_TEST(trim_test3) {
  char str[25] = "helloWOhetghehe";
  char str2[25] = "he";
  char str3[25] = "lloWOhetg";
  ck_assert_str_eq(s21_trim(str, str2), str3);
}
END_TEST

START_TEST(trim_test4) {
  char str[25] = "helloWOhetghehe";
  char str2[25] = "h";
  char str3[25] = "elloWOhetghehe";
  ck_assert_str_eq(s21_trim(str, str2), str3);
}
END_TEST

START_TEST(trim_test5) {
  char str[25] = "helloWOhetghehe";
  char str2[25] = "e";
  char str3[25] = "helloWOhetgheh";
  ck_assert_str_eq(s21_trim(str, str2), str3);
}
END_TEST

START_TEST(trim_test6) {
  char str[25] = "helloWhelloWhehehello";
  char str2[25] = "hello";
  char str3[25] = "WhelloW";
  ck_assert_str_eq(s21_trim(str, str2), str3);
}
END_TEST

Suite *test_func_trim(void) {
  Suite *x;
  x = suite_create("check_trim");

  TCase *s21_trim_case;

  s21_trim_case = tcase_create("s21_trim");
  suite_add_tcase(x, s21_trim_case);

  tcase_add_test(s21_trim_case, trim_test1);
  tcase_add_test(s21_trim_case, trim_test2);
  tcase_add_test(s21_trim_case, trim_test3);
  tcase_add_test(s21_trim_case, trim_test4);
  tcase_add_test(s21_trim_case, trim_test5);
  tcase_add_test(s21_trim_case, trim_test6);

  return x;
}

void suite_test_trim(void) {
  Suite *x;
  SRunner *y;

  x = test_func_trim();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
