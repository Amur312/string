// created by pizpotli
#include "../../test.h"

START_TEST(strtok_test1) {
  char str[15] = "he ll o wor ld";
  char str2[15] = " ";
  char str3[15] = "he ll o wor ld";
  ck_assert_str_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

START_TEST(strtok_test2) {
  char str[15] = "he ll o wor ld";
  char str2[15] = "h";
  char str3[15] = "he ll o wor ld";
  ck_assert_str_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

START_TEST(strtok_test3) {
  char str[15] = "he ll o wor ld";
  char str2[15] = "";
  char str3[15] = "he ll o wor ld";
  ck_assert_str_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

START_TEST(strtok_test4) {
  char str[15] = "";
  char str2[15] = " ";
  char str3[15] = "";
  ck_assert_ptr_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

START_TEST(strtok_test5) {
  char str[15] = "he ll o wor ld";
  char str2[15] = "wor";
  char str3[15] = "he ll o wor ld";
  ck_assert_str_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

START_TEST(strtok_test6) {
  char str[15] = "hello ";
  char str2[15] = "world";
  char str3[15] = "hello ";
  ck_assert_str_eq(s21_strtok(str, str2), strtok(str3, str2));
  ck_assert_str_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
  ck_assert_ptr_eq(s21_strtok(s21_NULL, str2), strtok(s21_NULL, str2));
}
END_TEST

Suite *test_func_strtok(void) {
  Suite *x;
  x = suite_create("check_strtok");

  TCase *s21_strtok_case;

  s21_strtok_case = tcase_create("s21_strtok");
  suite_add_tcase(x, s21_strtok_case);

  tcase_add_test(s21_strtok_case, strtok_test1);
  tcase_add_test(s21_strtok_case, strtok_test2);
  tcase_add_test(s21_strtok_case, strtok_test3);
  tcase_add_test(s21_strtok_case, strtok_test4);
  tcase_add_test(s21_strtok_case, strtok_test5);
  tcase_add_test(s21_strtok_case, strtok_test6);

  return x;
}

void suite_test_strtok(void) {
  Suite *x;
  SRunner *y;

  x = test_func_strtok();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
