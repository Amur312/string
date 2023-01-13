// created by pizpotli, tokenpah, lauriege, muquele

#include "../test.h"

START_TEST(sprintf_test1) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%-20.18u|\n", (unsigned)-345);
  int d = sprintf(data1, "|%-20.18u|\n", (unsigned)-345);
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_test2) {
  char data[100];
  char data1[100];
  int c = s21_sprintf(data, "|%%|\n");
  int d = sprintf(data1, "|%%|\n");
  ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(sprintf_test3) {
  char str[100];
  char str1[100];
  int a = 10, b = 20, c;
  c = a + b;
  sprintf(str, "Sum of %d and %d is %d", a, b, c);
  s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
  ck_assert_str_eq(str, str1);
  sprintf(str,
          "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And "
          "now unsigned: |%u|\n",
          "abra", 'e', 56, (unsigned)-43);
  s21_sprintf(str1,
              "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. "
              "And now unsigned: |%u|\n",
              "abra", 'e', 56, (unsigned)-43);
  ck_assert_str_eq(str, str1);
  sprintf(str, "Sum of %d and %d is %d", a, b, c);
  s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
}
END_TEST

START_TEST(sprintf_test4) {
  char str[100];
  char str1[100];
  sprintf(str,
          "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And "
          "now unsigned: |%u|\n",
          "abra", 'e', 56, (unsigned)-43);
  s21_sprintf(str1,
              "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. "
              "And now unsigned: |%u|\n",
              "abra", 'e', 56, (unsigned)-43);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(sprintf_test5) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  int r2 = s21_sprintf(str2, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(sprintf_test6) {
  char str1[100];
  char str2[100];
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test7) {
  char str1[100];
  char str2[100];
  char format[] = "%+li%lu%+d%+lf";
  long int x = 321, y = -123;

  ck_assert_int_eq(s21_sprintf(str1, format, y, x, -5555, -1213.123),
                   sprintf(str2, format, y, x, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test8) {
  char str1[100];
  char str2[100];
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test9) {
  char str1[100];
  char str2[100];
  char format[] = "%2c%+4.2d%+5.4i%+10.2f%55.55s%u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test10) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%%"), sprintf(str2, "%%"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test11) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%%%%%%%%"), sprintf(str2, "%%%%%%%%"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test12) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %lc";
  unsigned long w = L'g';
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_test13) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %5c";
  char w = 'c';
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_test14) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %-5lc";
  unsigned long w = L'h';
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST
START_TEST(sprintf_test15) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %ls";
  wchar_t w[] = L"hello";
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_test16) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %5.12ls";
  wchar_t w[] = L"test";
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_test17) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %40ls ABOBA";
  wchar_t w[] = L"wowowo";
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST
START_TEST(sprintf_test18) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %-43ls";
  wchar_t w[] = L"sjblkf";
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_test19) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  int min = -2147483648;
  int max = 2147483647;
  int lib_res = sprintf(lib_test_str,
                        "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| "
                        "|%20.15d| |%+.0d| |%5.15d|\n",
                        12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str,
                            "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| "
                            "|%5d| |%20.15d| |%+.0d| |%5.15d|\n",
                            12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test20) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  int lib_res =
      sprintf(lib_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n",
              12, 12, 12, -12, 12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str,
                            "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n",
                            12, 12, 12, -12, 12, 12, 12, -12);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test21) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  int lib_res = sprintf(lib_test_str, "%.d\n", 5);
  int s21_res = s21_sprintf(s21_test_str, "%.d\n", 5);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test22) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  unsigned int u = 2147483647;
  unsigned int a = 0;
  unsigned int b = 102;
  unsigned int c = 12;
  unsigned int d = 120;
  unsigned int e = 1200;
  unsigned int f = 14895085;
  int lib_res = sprintf(
      lib_test_str,
      "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n", u,
      a, b, c, f, c, c, c, d, e);
  int s21_res = s21_sprintf(
      s21_test_str,
      "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n", u,
      a, b, c, f, c, c, c, d, e);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test23) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  int lib_res = sprintf(
      lib_test_str, "|%f| |% f| |%+f| |%0.2f| |%-8f| |%8f| |%+8f| |%8f|\n",
      0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
  int s21_res = s21_sprintf(
      s21_test_str, "|%f| |% f| |%+f| |%0.2f| |%-8f| |%8f| |%+8f| |%8f|\n",
      0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test24) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  int lib_res = sprintf(lib_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n", "Hi",
                        "My", "Hi", "My");
  int s21_res = s21_sprintf(s21_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n",
                            "Hi", "My", "Hi", "My");
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test25) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  short i = 0;
  short a = 32767;
  int lib_res =
      sprintf(lib_test_str, "|%hi| |%hd| |%hu|", i, a, (unsigned short)i);
  int s21_res =
      s21_sprintf(s21_test_str, "|%hi| |%hd| |%hu|", i, a, (unsigned short)i);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test26) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  long i = LONG_MAX;
  long a = LONG_MIN;
  unsigned long b = 4294967295;
  int lib_res = sprintf(lib_test_str, "|%li| |%ld| |%lu|", i, a, b);
  int s21_res = s21_sprintf(s21_test_str, "|%li| |%ld| |%lu|", i, a, b);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test27) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  long number = 100000000;
  short number1 = 5;
  int lib_res = sprintf(
      lib_test_str, "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n",
      0, (unsigned)1, number1, 3, -4, 5, number);
  int s21_res = s21_sprintf(
      s21_test_str, "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n",
      0, (unsigned)1, number1, 3, -4, 5, number);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test28) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 256);
  char *lib_test_str = (char *)malloc(sizeof(char) * 256);
  char *str0 = "User";
  char *str1 = "";
  int lib_res = sprintf(lib_test_str, "Hello, %-13s, i%c, %s a great day!",
                        str0, 't', str1);
  int s21_res = s21_sprintf(s21_test_str, "Hello, %-13s, i%c, %s a great day!",
                            str0, 't', str1);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test29) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 512);
  char *lib_test_str = (char *)malloc(sizeof(char) * 512);
  int lib_res = sprintf(lib_test_str,
                        "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f",
                        0.2, 0.12345, 0.3, -0.23246);
  int s21_res = s21_sprintf(
      s21_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f", 0.2,
      0.12345, 0.3, -0.23246);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test30) {
  char *s21_test_str = (char *)malloc(sizeof(char) * 512);
  char *lib_test_str = (char *)malloc(sizeof(char) * 512);
  int lib_res = sprintf(lib_test_str, "%c", '\0');
  int s21_res = s21_sprintf(s21_test_str, "%c", '\0');
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
}
END_TEST

START_TEST(sprintf_test31) {
  char str1[100];
  char str2[100];
  double x = 9.99999999;
  ck_assert_int_eq(s21_sprintf(str1, "%f", x), sprintf(str2, "%f", x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_func(void) {
  Suite *x;
  x = suite_create("check");

  TCase *s21_sprintf_case;

  s21_sprintf_case = tcase_create("s21_sprintf");
  suite_add_tcase(x, s21_sprintf_case);

  tcase_add_test(s21_sprintf_case, sprintf_test1);
  tcase_add_test(s21_sprintf_case, sprintf_test2);
  tcase_add_test(s21_sprintf_case, sprintf_test3);
  tcase_add_test(s21_sprintf_case, sprintf_test4);
  tcase_add_test(s21_sprintf_case, sprintf_test5);
  tcase_add_test(s21_sprintf_case, sprintf_test6);
  tcase_add_test(s21_sprintf_case, sprintf_test7);
  tcase_add_test(s21_sprintf_case, sprintf_test8);
  tcase_add_test(s21_sprintf_case, sprintf_test9);
  tcase_add_test(s21_sprintf_case, sprintf_test10);
  tcase_add_test(s21_sprintf_case, sprintf_test11);
  tcase_add_test(s21_sprintf_case, sprintf_test12);
  tcase_add_test(s21_sprintf_case, sprintf_test13);
  tcase_add_test(s21_sprintf_case, sprintf_test14);
  tcase_add_test(s21_sprintf_case, sprintf_test15);
  tcase_add_test(s21_sprintf_case, sprintf_test16);
  tcase_add_test(s21_sprintf_case, sprintf_test17);
  tcase_add_test(s21_sprintf_case, sprintf_test18);
  tcase_add_test(s21_sprintf_case, sprintf_test19);
  tcase_add_test(s21_sprintf_case, sprintf_test20);
  tcase_add_test(s21_sprintf_case, sprintf_test21);
  tcase_add_test(s21_sprintf_case, sprintf_test22);
  tcase_add_test(s21_sprintf_case, sprintf_test23);
  tcase_add_test(s21_sprintf_case, sprintf_test24);
  tcase_add_test(s21_sprintf_case, sprintf_test25);
  tcase_add_test(s21_sprintf_case, sprintf_test26);
  tcase_add_test(s21_sprintf_case, sprintf_test27);
  tcase_add_test(s21_sprintf_case, sprintf_test28);
  tcase_add_test(s21_sprintf_case, sprintf_test29);
  tcase_add_test(s21_sprintf_case, sprintf_test30);
  tcase_add_test(s21_sprintf_case, sprintf_test31);

  return x;
}

void main_test(void) {
  Suite *x;
  SRunner *y;

  x = test_func();
  y = srunner_create(x);
  srunner_run_all(y, CK_VERBOSE);
  srunner_free(y);
}
