// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_p_test1) {
  char str1[100];
  char str2[100];
  int x = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%p", &x), sprintf(str2, "%p", &x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func_p(void) {
  Suite *x;
  x = suite_create("check_p");

  TCase *s21_sprintf_p_case;

  s21_sprintf_p_case = tcase_create("s21_sprintf_p");
  suite_add_tcase(x, s21_sprintf_p_case);

  tcase_add_test(s21_sprintf_p_case, sprintf_p_test1);

  return x;
}

void suite_test_p(void) {
  Suite *x;
  SRunner *y;

  x = test_func_p();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
