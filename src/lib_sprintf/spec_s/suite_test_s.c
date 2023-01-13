// created by pizpotli
#include "../../test.h"

START_TEST(sprintf_s_test1) {
  char data[100];
  char data1[100];
  sprintf(data, "|%32s|\n", "111");
  s21_sprintf(data1, "|%32s|\n", "111");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test2) {
  char data[100];
  char data1[100];
  sprintf(data, "|%32s|\n", "abc");
  s21_sprintf(data1, "|%32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test3) {
  char data[100];
  char data1[100];
  sprintf(data, "|%-32s|\n", "abc");
  s21_sprintf(data1, "|%-32s|\n", "abc");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test4) {
  char data[100];
  char data1[100];
  sprintf(data, "|%16s|\n", "nark nark");
  s21_sprintf(data1, "|%16s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test5) {
  char data[100];
  char data1[100];
  sprintf(data, "|%16s|\n", "nark nark");
  s21_sprintf(data1, "|%16s|\n", "nark nark");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test6) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%.03s|\n", "hello");
  int d = sprintf(data1, "|%.03s|\n", "hello");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_s_test7) {
  char data[100];
  char data1[100];
  int c =
      s21_sprintf(data, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  int d =
      sprintf(data1, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_s_test8) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|test %-12i et %24s !|\n", 0, "coco");
  int d = sprintf(data1, "|test %-12i et %24s !|\n", 0, "coco");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_s_test9) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|test %-12i et %-2.4d %24s !|\n", 0, 25, "coco");
  int d = sprintf(data1, "|test %-12i et %-2.4d %24s !|\n", 0, 25, "coco");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_s_test10) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "salut");
  sprintf(data1, "01)SPRINTF : |%s|\n", "salut");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test11) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-s|\n", "test");
  sprintf(data1, "01)SPRINTF : |%-s|\n", "test");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test12) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "42");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "42");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test13) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-10s|\n", "42");
  sprintf(data1, "01)SPRINTF : |%-10s|\n", "42");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test14) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test15) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-2s|\n", "string");
  sprintf(data1, "01)SPRINTF : |%-2s|\n", "string");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test16) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.15s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.15s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test17) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.4s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.4s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test18) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.0s|\n", "precision");
  sprintf(data1, "01)SPRINTF : |%.0s|\n", "precision");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test19) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test20) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  sprintf(data1, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test21) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%s|\n", "");
  sprintf(data1, "01)SPRINTF : |%s|\n", "");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test22) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-.2s|\n", "boom");
  sprintf(data1, "01)SPRINTF : |%-.2s|\n", "boom");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test23) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.8s|\n", "google");
  sprintf(data1, "01)SPRINTF : |%10.8s|\n", "google");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test24) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "twitter");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "twitter");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test25) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.10s|\n", "samsung");
  sprintf(data1, "01)SPRINTF : |%2.10s|\n", "samsung");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test26) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "sprintf");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "sprintf");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test27) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "424242424242");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test28) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test29) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-1.0s|\n", "123456789");
  sprintf(data1, "01)SPRINTF : |%-1.0s|\n", "123456789");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test30) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%.1s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%.1s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test31) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test32) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%2.5s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test33) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "covid-19");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test34) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
              "12345", "hu");
  sprintf(data1, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu",
          "12345", "hu");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test35) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.s|\n", "bratok");
  sprintf(data1, "02) standart PRINTF : |%.s|\n", "bratok");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test36) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "02) standart PRINTF : |%.3s|\n", "21");
  sprintf(data1, "02) standart PRINTF : |%.3s|\n", "21");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test37) {
  char str[100];
  char str1[100];
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_s_test38) {
  char str[100];
  char str1[100];
  sprintf(str, "|%-8s|\n", "abrafdefgbr");
  s21_sprintf(str1, "|%-8s|\n", "abrafdefgbr");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_s_test39) {
  char str[100];
  char str1[100];
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_s_test40) {
  char str[100];
  char str1[100];
  sprintf(str, "|%8s|\n", "abrafdefgbr");
  s21_sprintf(str1, "|%8s|\n", "abrafdefgbr");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_s_test41) {
  char str[100];
  char str1[100];
  sprintf(str, "|%8s|\n", "abra");
  s21_sprintf(str1, "|%8s|\n", "abra");
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_s_test42) {
  char data[100];
  char data1[100];

  s21_sprintf(data, "%s ", "hello world");
  sprintf(data1, "%s ", "hello world");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test43) {
  char data[100];
  char data1[100];
  s21_sprintf(data, "%-3.1s", "\0");
  sprintf(data1, "%-3.1s", "\0");
  ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(sprintf_s_test44) {
  char str1[512];
  char str2[512];

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test45) {
  char str1[512];
  char str2[512];

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test46) {
  char str1[512];
  char str2[512];

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test47) {
  char str1[512];
  char str2[512];

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test48) {
  char str1[512];
  char str2[512];

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test49) {
  char str1[512];
  char str2[512];

  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test50) {
  char str1[100];
  char str2[100];
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%60s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test51) {
  char str1[100];
  char str2[100];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test52) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test53) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test54) {
  char str1[100];
  char str2[100];
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test55) {
  char str1[100];
  char str2[100];
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test56) {
  char str1[100];
  char str2[100];
  char format[] = "%60s";

  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test57) {
  char str1[100];
  char str2[100];
  char format[] = "%-65s";

  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_s_test58) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_s_test59) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "A\nB\tO\vB\rA\0C";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_s_test60) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_s_test61) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

START_TEST(sprintf_s_test62) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
}
END_TEST

Suite *test_func_s(void) {
  Suite *x;
  x = suite_create("check_s");

  TCase *s21_sprintf_s_case;

  s21_sprintf_s_case = tcase_create("s21_sprintf_s");
  suite_add_tcase(x, s21_sprintf_s_case);

  tcase_add_test(s21_sprintf_s_case, sprintf_s_test1);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test2);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test3);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test4);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test5);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test6);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test7);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test8);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test9);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test10);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test11);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test12);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test13);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test14);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test15);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test16);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test17);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test18);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test19);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test20);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test21);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test22);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test23);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test24);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test25);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test26);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test27);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test28);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test29);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test30);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test31);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test32);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test33);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test34);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test35);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test36);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test37);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test38);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test39);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test40);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test41);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test42);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test43);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test44);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test45);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test46);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test47);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test48);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test49);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test50);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test51);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test52);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test53);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test54);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test55);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test56);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test57);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test58);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test59);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test60);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test61);
  tcase_add_test(s21_sprintf_s_case, sprintf_s_test62);

  return x;
}

void suite_test_s(void) {
  Suite *x;
  SRunner *y;

  x = test_func_s();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
