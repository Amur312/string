// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_f_test1) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%f|\n", 324.34);
  sprintf(data1, "|%f|\n", 324.34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test2) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.343);
  sprintf(data1, "|%10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test3) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.3f|\n", 324.343);
  sprintf(data1, "|%10.3f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test4) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%1.19f|\n", 324.343);
  sprintf(data1, "|%1.19f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test5) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-1.10f|\n", 324.343);
  sprintf(data1, "|%-1.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test6) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-1.10f|\n", -324.343);
  sprintf(data1, "|%-1.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test7) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.10f|\n", -324.343);
  sprintf(data1, "|%.10f|\n", -324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test8) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.10f|\n", 324.343);
  sprintf(data1, "|%.10f|\n", 324.343);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test9) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|% 10f|\n", 324.1);
  sprintf(data1, "|% 10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test10) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%+10f|\n", 324.1);
  sprintf(data1, "|%+10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test11) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.1);
  sprintf(data1, "|%10f|\n", 324.1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test12) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10f|\n", 324.1123132);
  sprintf(data1, "|%10f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test13) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.15f|\n", 324.1123132);
  sprintf(data1, "|%10.15f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test14) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.0f|\n", 324.1123132);
  sprintf(data1, "|%.0f|\n", 324.1123132);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test15) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.0f|\n", 3.14);
  sprintf(data1, "|%10.0f|\n", 3.14);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test16) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%10.10f|\n", 320.3);
  sprintf(data1, "|%10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test17) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test18) {
  //
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", 320.3);
  sprintf(data1, "|%-10.10f|\n", 320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test19) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%-10.10f|\n", -320.3);
  sprintf(data1, "|%-10.10f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test20) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test21) {
  char data[100];
  char data1[100];

  s21_sprintf(data, "|%.0f|\n", -320.3);
  sprintf(data1, "|%.0f|\n", -320.3);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test22) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", -320.3);
  sprintf(data1, "|%5.0f|\n", -320.3);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test23) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test24) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
  sprintf(data1, "|%5.0f|\n", 3.141592653589793);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test25) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|% -5.1f|\n", 0.001);
  sprintf(data1, "|% -5.1f|\n", 0.001);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test26) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.1f|\n", 324.324);
  sprintf(data1, "|%5.1f|\n", 324.324);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test27) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%5.3f|\n", 0.0001);
  sprintf(data1, "|%5.3f|\n", 0.0001);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_f_test28) {
  char str1[100];
  char str2[100];
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test29) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test30) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test31) {
  char str1[100];
  char str2[100];
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test32) {
  char str1[100];
  char str2[100];
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test33) {
  char str1[100];
  char str2[100];
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test34) {
  char str1[100];
  char str2[100];
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_f_test35) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test36) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test37) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test38) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test39) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test40) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = -7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test41) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test42) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_f_test43) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.16f";
  float f = 7.891235551512512321;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

Suite *test_func_f(void) {
  Suite *x;
  x = suite_create("check_f");

  TCase *s21_sprintf_f_case;

  s21_sprintf_f_case = tcase_create("s21_sprintf_f");
  suite_add_tcase(x, s21_sprintf_f_case);

  tcase_add_test(s21_sprintf_f_case, sprintf_f_test1);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test2);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test3);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test4);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test5);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test6);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test7);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test8);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test9);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test10);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test11);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test12);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test13);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test14);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test15);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test16);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test17);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test18);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test19);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test20);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test21);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test22);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test23);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test24);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test25);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test26);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test27);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test28);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test29);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test30);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test31);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test32);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test33);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test34);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test35);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test36);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test37);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test38);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test39);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test40);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test41);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test42);
  tcase_add_test(s21_sprintf_f_case, sprintf_f_test43);

  return x;
}

void suite_test_f(void) {
  Suite *x;
  SRunner *y;

  x = test_func_f();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
