// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_u_test1) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test2) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
  sprintf(data1, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test3) {
  char str1[512];
  char str2[512];

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test4) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)-34);
  sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)-34);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test5) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-u|\n", (unsigned)50);
  sprintf(data1, "02) standart PRINTF : |%-u|\n", (unsigned)50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test6) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)90);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)90);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test7) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
  sprintf(data1, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test8) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
  sprintf(data1, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test9) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
  sprintf(data1, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test10) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
  sprintf(data1, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test11) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
  sprintf(data1, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test12) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
  sprintf(data1, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test13) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
  sprintf(data1, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test14) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
  sprintf(data1, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test15) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%08u|\n", (unsigned)64);
  sprintf(data1, "02) standart PRINTF : |%08u|\n", (unsigned)64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test16) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
  sprintf(data1, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test17) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF :|%u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test18) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test19) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)0);
  sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test20) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)88);
  sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)88);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test21) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%u|\n", (unsigned)-1);
  sprintf(data1, "|%u|\n", (unsigned)-1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test22) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "|%u|\n", (unsigned)-1);
  sprintf(data1, "|%u|\n", (unsigned)-1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test23) {
  char str[100];
  char str1[100];
  sprintf(str, "|%20.18u|\n", (unsigned)-345);
  s21_sprintf(str1, "|%20.18u|\n", (unsigned)-345);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_u_test24) {
  char str[100];
  char str1[100];
  sprintf(str, "|%-20.18u|\n", (unsigned)-345);
  s21_sprintf(str1, "|%-20.18u|\n", (unsigned)-345);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_u_test25) {
  char str[100];
  char str1[100];
  sprintf(str, "|%u|\n", (unsigned)10);
  s21_sprintf(str1, "|%u|\n", (unsigned)10);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_u_test26) {
  char data[200];
  char data1[200];
  s21_sprintf(data, "%lu", (unsigned long)100000000000000000);
  sprintf(data1, "%lu", (unsigned long)100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test27) {
  char data[200];
  char data1[200];
  short int i = -30000;
  s21_sprintf(data, "%hu", (unsigned short)i);
  sprintf(data1, "%hu", (unsigned short)i);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_u_test28) {
  char str1[512];
  char str2[512];

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test29) {
  char str1[512];
  char str2[512];

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test30) {
  char str1[512];
  char str2[512];

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test31) {
  char str1[512];
  char str2[512];

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test32) {
  char str1[512];
  char str2[512];

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test33) {
  char str1[512];
  char str2[512];

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test34) {
  char str1[512];
  char str2[512];

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test35) {
  char str1[512];
  char str2[512];

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test36) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test37) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test38) {
  char str1[100];
  char str2[100];
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test39) {
  char str1[100];
  char str2[100];
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_u_test40) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test41) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = -5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test42) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%lu";
  unsigned long int u = ULONG_MAX + 4;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test43) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hu";
  unsigned long int u = USHRT_MAX;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test44) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test45) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_u_test46) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

Suite *test_func_u(void) {
  Suite *x;
  x = suite_create("check_u");

  TCase *s21_sprintf_u_case;

  s21_sprintf_u_case = tcase_create("s21_sprintf_u");
  suite_add_tcase(x, s21_sprintf_u_case);

  tcase_add_test(s21_sprintf_u_case, sprintf_u_test1);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test2);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test3);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test4);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test5);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test6);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test7);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test8);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test9);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test10);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test11);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test12);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test13);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test14);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test15);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test16);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test17);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test18);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test19);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test20);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test21);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test22);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test23);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test24);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test25);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test26);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test27);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test28);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test29);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test30);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test31);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test32);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test33);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test34);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test35);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test36);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test37);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test38);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test39);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test40);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test41);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test42);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test43);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test44);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test45);
  tcase_add_test(s21_sprintf_u_case, sprintf_u_test46);

  return x;
}

void suite_test_u(void) {
  Suite *x;
  SRunner *y;

  x = test_func_u();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
