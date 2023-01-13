// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_c_test1) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%c|\n", 'a');
  sprintf(data1, "01)SPRINTF : |%c|\n", 'a');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test2) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-c|\n", 'z');
  sprintf(data1, "01)SPRINTF : |%-c|\n", 'z');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test3) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test4) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-5c|\n", 'R');
  sprintf(data1, "01)SPRINTF : |%-5c|\n", 'R');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test5) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1c|\n", '3');
  sprintf(data1, "01)SPRINTF : |%1c|\n", '3');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test6) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test7) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%5c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%5c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test8) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-5c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%-5c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test9) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1c|\n", '\0');
  sprintf(data1, "01)SPRINTF : |%1c|\n", '\0');
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test10) {
  char str[100];
  char str1[100];
  sprintf(str, "|%c|\n", 'a');
  s21_sprintf(str1, "|%c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_c_test11) {
  char str[100];
  char str1[100];
  sprintf(str, "|%c|\n", 'a');
  s21_sprintf(str1, "|%c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_c_test12) {
  char str[100];
  char str1[100];
  sprintf(str, "|%-c|\n", 'a');
  s21_sprintf(str1, "|%-c|\n", 'a');
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_c_test13) {
  char data[200];
  char data1[200];
  short int i = -30000;
  s21_sprintf(data, "%hd", i);
  sprintf(data1, "%hd", i);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test14) {
  char data[200];
  char data1[200];
  wchar_t buf = L'c';
  s21_sprintf(data, "%lc", buf);
  sprintf(data1, "%lc", buf);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_c_test15) {
  char str1[512];
  char str2[512];

  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test16) {
  char str1[512];
  char str2[512];

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test17) {
  char str1[512];
  char str2[512];

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test18) {
  char str1[512];
  char str2[512];

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test19) {
  char str1[512];
  char str2[512];

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test20) {
  char str1[512];
  char str2[512];

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test21) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test22) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test23) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test24) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test25) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test26) {
  char str1[100];
  char str2[100];
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test27) {
  char str1[100];
  char str2[100];
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_c_test28) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  char c = 'c';
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_c_test29) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_c_test30) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_c_test31) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_c_test32) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

Suite *test_func_c(void) {
  Suite *x;
  x = suite_create("check_c");

  TCase *s21_sprintf_c_case;

  s21_sprintf_c_case = tcase_create("s21_sprintf_c");
  suite_add_tcase(x, s21_sprintf_c_case);

  tcase_add_test(s21_sprintf_c_case, sprintf_c_test1);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test2);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test3);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test4);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test5);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test6);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test7);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test8);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test9);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test10);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test11);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test12);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test13);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test14);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test15);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test16);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test17);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test18);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test19);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test20);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test21);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test22);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test23);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test24);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test25);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test26);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test27);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test28);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test29);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test30);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test31);
  tcase_add_test(s21_sprintf_c_case, sprintf_c_test32);

  return x;
}

void suite_test_c(void) {
  Suite *x;
  SRunner *y;

  x = test_func_c();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
