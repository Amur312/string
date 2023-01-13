// created by pizpotli, tokenpah, lauriege, muquele
#include "../../test.h"

START_TEST(sprintf_d_test1) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%-20.18d|\n", -345);
  int d = sprintf(data1, "|%-20.18d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_d_test2) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%20.2d|\n", -345);
  int d = sprintf(data1, "|%20.2d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_d_test3) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%020d|\n", -345);
  int d = sprintf(data1, "|%020d|\n", -345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_d_test4) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", -20);
}
END_TEST

START_TEST(sprintf_d_test5) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", -50);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", -50);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test6) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test7) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.2d|\n", -20);
  sprintf(data1, "02) standart PRINTF :|%.2d|\n", -20);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test8) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test9) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-d|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%-d|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test10) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test11) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%-10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test12) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test13) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", 100);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test14) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", 64);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", 64);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test15) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", 16);
  sprintf(data1, "02) standart PRINTF :|%1.1d|\n", 16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test16) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test17) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test18) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", -42);
  sprintf(data1, "02) standart PRINTF :|%.10d|\n", -42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test19) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%10.5d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test20) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", -16);
  sprintf(data1, "02) standart PRINTF :|%5.10d|\n", -16);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test21) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.2d|\n", -1);
  sprintf(data1, "02) standart PRINTF : |%.2d|\n", -1);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test22) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test23) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%-.10d|\n", -80);
  sprintf(data1, "02) standart PRINTF : |%-.10d|\n", -80);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test24) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", 35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", 35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test25) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%6d|\n", -35);
  sprintf(data1, "02) standart PRINTF : |%6d|\n", -35);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test26) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test27) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test28) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%5.3d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test29) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", -5);
  sprintf(data1, "02) standart PRINTF : |%3.5d|\n", -5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test30) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 0);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 0);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test31) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 100);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 100);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test32) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF :|%i|\n", 42);
  sprintf(data1, "02) standart PRINTF :|%i|\n", 42);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test33) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 5);
  sprintf(data1, "02) standart PRINTF : |%.d|\n", 5);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test34) {
  char str[100];
  char str1[100];
  sprintf(str, "|%i|\n", 10);
  s21_sprintf(str1, "|%i|\n", 10);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test35) {
  char str[100];
  char str1[100];
  sprintf(str, "|%.d|\n", 0);
  s21_sprintf(str1, "|%.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test36) {
  char str[100];
  char str1[100];
  sprintf(str, "|%5.d|\n", 0);
  s21_sprintf(str1, "|%5.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test37) {
  char str[100];
  char str1[100];
  sprintf(str, "|%5.0d|\n", 0);
  s21_sprintf(str1, "|%5.0d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test38) {
  char str[100];
  char str1[100];
  sprintf(str, "|%-5.d|\n", 0);
  s21_sprintf(str1, "|%-5.d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test39) {
  char str[100];
  char str1[100];
  sprintf(str, "|%.0d|\n", 0);
  s21_sprintf(str1, "|%.0d|\n", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test40) {
  char str[100];
  char str1[100];
  sprintf(str, "%i", 0);
  s21_sprintf(str1, "%i", 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test41) {
  char str[100];
  char str1[100];
  for (int i = -101; i <= 101; i++) {
    sprintf(str, "%+i", i);
    s21_sprintf(str1, "%+i", i);
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(sprintf_d_test42) {
  char str[100];
  char str1[100];
  for (int i = -101; i <= 101; i++) {
    sprintf(str, "%+d", i);
    s21_sprintf(str1, "%+d", i);
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(sprintf_d_test43) {
  char str[100];
  char str1[100];
  sprintf(str, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
  s21_sprintf(str1, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test44) {
  char str[100];
  char str1[100];
  sprintf(str, " %+li ", 9223372036854775807);
  s21_sprintf(str1, " %+li ", 9223372036854775807);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test45) {
  char str[100];
  char str1[100];
  sprintf(str, " %+ld ", 9223372036854775807);
  s21_sprintf(str1, " %+ld ", 9223372036854775807);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test46) {
  char str[100];
  char str1[100];
  sprintf(str, " %+-5d %+-5i", -7, 0);
  s21_sprintf(str1, " %+-5d %+-5i", -7, 0);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_d_test47) {
  char str[100];
  char str1[100];
  for (int i = -101; i <= 101;) {
    sprintf(str, "% d", i);
    s21_sprintf(str1, "% d", i);
    i = i + 7;
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(sprintf_d_test48) {
  char str[100];
  char str1[100];
  for (int i = -101; i <= 101;) {
    sprintf(str, "% -i % -d % -5d", i, i + 1, 143646235);
    s21_sprintf(str1, "% -i % -d % -5d", i, i + 1, 143646235);
    i = i + 7;
    ck_assert_str_eq(str, str1);
  }
}
END_TEST

START_TEST(sprintf_d_test49) {
  char data[200];
  char data1[200];
  s21_sprintf(data, "%li", 100000000000000000);
  sprintf(data1, "%li", 100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test50) {
  char data[200];
  char data1[200];
  s21_sprintf(data, "%ld", 100000000000000000);
  sprintf(data1, "%ld", 100000000000000000);
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test51) {
  char data[200];
  char data1[200];
  short int i = -30000;
  s21_sprintf(data, "%hi", i);
  sprintf(data1, "%hi", i);

  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_d_test52) {
  char str1[512];
  char str2[512];

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test53) {
  char str1[512];
  char str2[512];

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test54) {
  char str1[512];
  char str2[512];

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test55) {
  char str1[512];
  char str2[512];

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test56) {
  char str1[512];
  char str2[512];

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test57) {
  char str1[512];
  char str2[512];

  char *format = "%12i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test58) {
  char str1[512];
  char str2[512];

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test59) {
  char str1[512];
  char str2[512];

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test60) {
  char str1[512];
  char str2[512];

  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test61) {
  char str1[512];
  char str2[512];

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test62) {
  char str1[512];
  char str2[512];

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test63) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test64) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test65) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test66) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test67) {
  char str1[100];
  char str2[100];
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test68) {
  char str1[100];
  char str2[100];
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test69) {
  char str1[100];
  char str2[100];
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_d_test70) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test71) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test72) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%ld";
  long long d = LONG_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test73) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hd";
  int d = INT_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test74) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test75) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test76) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test77) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test78) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 5;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test79) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test80) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 0xF;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test81) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test82) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test83) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test84) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_d_test85) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

Suite *test_func_d(void) {
  Suite *x;
  x = suite_create("check_d");

  TCase *s21_sprintf_d_case;

  s21_sprintf_d_case = tcase_create("s21_sprintf_d");
  suite_add_tcase(x, s21_sprintf_d_case);

  tcase_add_test(s21_sprintf_d_case, sprintf_d_test1);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test2);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test3);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test4);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test5);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test6);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test7);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test8);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test9);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test10);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test11);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test12);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test13);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test14);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test15);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test16);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test17);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test18);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test19);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test20);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test21);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test22);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test23);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test24);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test25);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test26);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test27);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test28);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test29);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test30);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test31);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test32);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test33);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test34);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test35);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test36);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test37);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test38);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test39);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test40);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test41);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test42);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test43);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test44);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test45);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test46);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test47);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test48);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test49);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test50);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test51);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test52);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test53);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test54);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test55);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test56);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test57);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test58);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test59);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test60);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test61);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test62);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test63);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test64);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test65);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test66);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test67);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test68);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test69);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test70);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test71);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test72);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test73);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test74);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test75);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test76);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test77);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test78);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test79);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test80);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test81);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test82);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test83);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test84);
  tcase_add_test(s21_sprintf_d_case, sprintf_d_test85);

  return x;
}

void suite_test_d(void) {
  Suite *x;
  SRunner *y;

  x = test_func_d();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
