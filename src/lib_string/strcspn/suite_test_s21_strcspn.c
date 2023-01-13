#include "../../test.h"

START_TEST(strcspn_test1) {
#line 2318
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test2) {
#line 2323
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test3) {
#line 2328
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test4) {
#line 2333
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test5) {
#line 2338
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test6) {
#line 2343
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test7) {
#line 2348
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test8) {
#line 2353
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test9) {
#line 2358
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test10) {
#line 2363
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

Suite *test_func_strcspn(void) {
  Suite *x;
  x = suite_create("check_strcspn");

  TCase *s21_strcspn_case;

  s21_strcspn_case = tcase_create("s21_strcspn");
  suite_add_tcase(x, s21_strcspn_case);

  tcase_add_test(s21_strcspn_case, strcspn_test1);
  tcase_add_test(s21_strcspn_case, strcspn_test2);
  tcase_add_test(s21_strcspn_case, strcspn_test3);
  tcase_add_test(s21_strcspn_case, strcspn_test4);
  tcase_add_test(s21_strcspn_case, strcspn_test5);
  tcase_add_test(s21_strcspn_case, strcspn_test6);
  tcase_add_test(s21_strcspn_case, strcspn_test7);
  tcase_add_test(s21_strcspn_case, strcspn_test8);
  tcase_add_test(s21_strcspn_case, strcspn_test9);
  tcase_add_test(s21_strcspn_case, strcspn_test10);

  return x;
}

void suite_test_strcspn(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strcspn();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
