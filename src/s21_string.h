// created by pizpotli
#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_NULL (void *)0
typedef long unsigned s21_size_t;

typedef struct {
  wchar_t *arrl;
  wchar_t cl;
  long int e;
  int lon;
  int znak_f;
  long long int d;
  long unsigned int dd;
  long int df;
  long long int u;
  long double f;
  long double tmp_f;
  long double tmp_ff;
  long double fg;
  double tmp_ff1;
  int space;
  int d1;
  int ee;
  int ft;
  int count_e;
  int count_tochn;
  int count_tochn_s;
  int count_tochn_f;
  int count_tochn_f_1;
  int count_tochn_d;
  int count_form;
  int error;
  int error_g;
  int g_tochn;
  int g;
  int g1;
  int g2;
  int x;
  int c1;
  int l;
  int L;
  int h;
  int X;
  int s;
  int fl;
  int znak1;
  int left;
  int strlen1;
  int strlen;
  int strlen_own;
  int plus;
  int resh;
  int shirina;
  int shirina1;
  int zero;
  int *n;
  int o1;
  unsigned long int o;
  char *buf;
  char *arr;
  char c;
  int znak;
  char znak_e;
  char tochnost[100];
  char tmp[200];
  char spec[10];
} spec;

struct pars_format {
  int flag_star;  // flag star
  char znachenie_count_cifra[1024];
  int flag_cifra;
  int flag_procent;
  int shirina;
  int dlina_h;
  int dlina_l;
  int dlina_L;
  int arg_int;  // argyment is int o - not, 1 - yes
  int arg_c;
  int arg_i;
  int arg_e;
  int arg_E;
  int arg_f;
  int arg_g;
  int arg_G;
  int arg_o;
  int arg_s;
  int arg_u;
  int arg_x;
  int arg_X;
  int arg_p;
  int arg_n;
  int count;
  int count_pointer_Format;
  int count_pointer_Buffer;
  int znachenie_n;
  int znachenie_p;
  short int znachenie_p_h;
  long int znachenie_p_l;
  int znachenie_int;
  short int znachenie_int_h;
  long int znachenie_int_l;
  double znachenie_float;
  long double znachenie_float_L;
  double znachenie_e;
  long double znachenie_e_L;
  double znachenie_E;
  long double znachenie_E_L;
  double znachenie_g;
  long double znachenie_g_L;
  double znachenie_G;
  long double znachenie_G_L;
  unsigned int znachenie_u;
  unsigned short int znachenie_u_h;
  unsigned long int znachenie_u_l;
  unsigned int znachenie_o;
  unsigned short int znachenie_o_h;
  unsigned long int znachenie_o_l;
  unsigned int znachenie_x;
  unsigned short int znachenie_x_h;
  unsigned long int znachenie_x_l;
  unsigned int znachenie_X;
  unsigned short int znachenie_X_h;
  unsigned long int znachenie_X_l;
  char znachenie_s[1024];
  char znachenie_c;
  int znachenie_i;
  short int znachenie_i_h;
  long int znachenie_i_l;
};

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
char *s21_strcat(char *dest, const char *src);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);
s21_size_t s21_strspn(const char *str1, const char *str2);
s21_size_t s21_strlen(const char *str);
int s21_strcmp(const char *str1, const char *str2);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);
void *s21_to_lower(const char *str);
void *s21_to_upper(const char *str);
char *s21_strerror(int errnum);
void s21_t(char *str, int num);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);

int s21_sprintf(char *str, const char *format, ...);
void spec_parser(int *i, const char *format, spec *flag, va_list *arg);
void spec_shirina(spec *flag);
void parser(char *str, const char *format, spec *flag, va_list *arg, int *i);
void spec_f(char *str, spec *flag);
void spec_f_1(spec *flag, char *str1, int *i);
void spec_f_2(spec *flag, int *count, char *str1);
void spec_f_3(spec *flag, char *str1, int *i);
void spec_u(char *str, spec *flag);
void spec_e_1(char *str, spec *flag);
void spec_e_0(char *str, spec *flag);
void spec_e(char *str, spec *flag);
void spec_e_print(int *count, char *str1, spec *flag);
void spec_g(char *str, spec *flag);
int spec_g_1(spec *flag);
double spec_g_2(spec *flag);
void spec_x(char *str, spec *flag);
void spec_x_parser(char *str1, spec *flag, int x, int i);
void spec_o(char *str, spec *flag);
void spec_p(char *str, spec *flag);
void check_zero(spec *flag);
void flag_shirina_count(spec *flag, va_list *arg);
void spec_write(int x, spec *flag);
void flag_toch(spec *flag, int *i, const char *format, va_list *arg);
void spec_d(char *str, spec *flag);
void spec_d_1(spec *flag, char *str);
void spec_d_1_s_1(spec *flag);
void spec_d_1_s_0(char *str, spec *flag);
void spec_d_1_zero_1(char *str, spec *flag);
void spec_d_1_zero_0(char *str, spec *flag);
void spec_d_1_uslovie(char *str, spec *flag);
void spec_d_2(spec *flag, char *str, int *len_count);
void maloc(spec *flag, char *str1);
void spec_s(char *str, spec *flag);
void spec_sl(char *str, spec *flag);
void spec_s_1(spec *flag, char *str);
void spec_c(char *str, spec *flag);
void spec_cl(char *str, spec *flag);
void revers(char *str1, spec *flag);
void reset(int *p, spec *flag);

void s21_str_x(char *str, spec *flag, va_list *arg, int *p);
void s21_str_X(char *str, spec *flag, va_list *arg, int *p);
void s21_str_E(char *str, spec *flag, va_list *arg, int *p);
void s21_str_e(char *str, spec *flag, va_list *arg, int *p);
void s21_str_G(char *str, spec *flag, va_list *arg, int *p);
void s21_str_g(char *str, spec *flag, va_list *arg, int *p);
void s21_str_f(char *str, spec *flag, va_list *arg, int *p);
void s21_str_o(char *str, spec *flag, va_list *arg, int *p);
void s21_str_p(char *str, spec *flag, va_list *arg, int *p);
void s21_str_s(char *str, spec *flag, va_list *arg, int *p);
void s21_str_c(char *str, spec *flag, va_list *arg, int *p);
void s21_str_u(char *str, spec *flag, va_list *arg, int *p);
void s21_str_i(char *str, spec *flag, va_list *arg, int *p);
void s21_str_d(char *str, spec *flag, va_list *arg, int *p);
void s21_str_n(spec *flag, va_list *arg, int *p);

int s21_sscanf(const char *str, const char *format, ...);
// int int_get_funkshin(const char *const_Buffer);
void parser_const_Format(const char *const_Format, struct pars_format *format_i,
                         int pointer);
void parser_tip_arg_get_funkshin(const char *const_Buffer,
                                 struct pars_format *format_i);
void get_shirina(struct pars_format *format_i);

void funkshin_for_int(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_int_h(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_int_l(const char *const_Buffer, struct pars_format *format_i);

void funkshin_for_s(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_f(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_f_L(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_c(const char *const_Buffer, struct pars_format *format_i);

void funkshin_for_i(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_i_h(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_i_l(const char *const_Buffer, struct pars_format *format_i);

void funkshin_for_e(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_E(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_u(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_o(const char *const_Buffer, struct pars_format *format_i);

void funkshin_for_x(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_X(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_g(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_G(const char *const_Buffer, struct pars_format *format_i);

void funkshin_for_p(const char *const_Buffer, struct pars_format *format_i);
void funkshin_for_n(struct pars_format *format_i);

#endif  // SRC_S21_STRING_H_