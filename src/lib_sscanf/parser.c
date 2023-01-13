#include "../s21_string.h"

void parser_const_Format(const char *const_Format, struct pars_format *format_i,
                         int pointer) {
  int n = s21_strlen(const_Format);
  int i = 0;
  for (i = pointer; i < n; i++) {  // parsim Format
    int count_cifra = 0;
    if (const_Format[i] != '%') {
      continue;
    }
    int b = i + 1;
    if (const_Format[b] == '%') {
      format_i->flag_procent = 1;
    }
    // i = n; //exisit on for
    int flag_while = 1;
    while (flag_while == 1) {  // idem do sledyushego '%' ili do kontsa stroki
      if (const_Format[b] == '%' || const_Format[b] == '\0') {
        flag_while = 0;
        format_i->count_pointer_Format = b;
      }
      switch (const_Format[b]) {
        case '0':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '0';
          count_cifra++;
          break;
        case '1':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '1';
          count_cifra++;
          break;
        case '2':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '2';
          count_cifra++;
          break;
        case '3':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '3';
          count_cifra++;
          break;
        case '4':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '4';
          count_cifra++;
          break;
        case '5':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '5';
          count_cifra++;
          break;
        case '6':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '6';
          count_cifra++;
          break;
        case '7':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '7';
          count_cifra++;
          break;
        case '8':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '8';
          count_cifra++;
          break;
        case '9':
          format_i->flag_cifra = 1;
          format_i->znachenie_count_cifra[count_cifra] = '9';
          count_cifra++;
          break;
        case '*':
          format_i->flag_star = 1;
          break;
        case 'h':
          format_i->dlina_h = 1;
          break;
        case 'l':
          format_i->dlina_l = 1;
          break;
        case 'L':
          format_i->dlina_L = 1;
          break;
        case 'd':
          format_i->arg_int = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'c':
          format_i->arg_c = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'i':
          format_i->arg_i = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'e':
          format_i->arg_e = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'E':
          format_i->arg_E = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'f':
          format_i->arg_f = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'g':
          format_i->arg_g = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'G':
          format_i->arg_G = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'o':
          format_i->arg_o = 1;
          break;
        case 's':
          format_i->arg_s = 1;
          break;
        case 'u':
          format_i->arg_u = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'x':
          format_i->arg_x = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'X':
          format_i->arg_X = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'p':
          format_i->arg_p = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        case 'n':
          format_i->arg_n = 1;
          flag_while = 0;
          format_i->count_pointer_Format = b;
          break;
        default:
          break;
      }
      b++;
    }
    if (count_cifra > 0) {
      get_shirina(format_i);
    }
    i = n;  // exisit on for
  }
}

void parser_tip_arg_get_funkshin(const char *const_Buffer,
                                 struct pars_format *format_i) {
  if (format_i->arg_int == 1 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 0) {  // int
    funkshin_for_int(const_Buffer, format_i);
  }
  if (format_i->arg_int == 1 && format_i->dlina_h == 1 &&
      format_i->dlina_l == 0) {  // short int
    funkshin_for_int_h(const_Buffer, format_i);
  }
  if (format_i->arg_int == 1 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 1) {  // long int
    funkshin_for_int_l(const_Buffer, format_i);
  }
  if (format_i->arg_c == 1) {
    funkshin_for_c(const_Buffer, format_i);
  }

  if (format_i->arg_i == 1 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 0) {
    funkshin_for_i(const_Buffer, format_i);
  }
  if (format_i->arg_i == 1 && format_i->dlina_h == 1 &&
      format_i->dlina_l == 0) {
    funkshin_for_i_h(const_Buffer, format_i);
  }
  if (format_i->arg_i == 1 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 1) {
    funkshin_for_i_l(const_Buffer, format_i);
  }

  if (format_i->arg_e == 1) {
    funkshin_for_e(const_Buffer, format_i);
  }
  if (format_i->arg_E == 1) {
    funkshin_for_E(const_Buffer, format_i);
  }
  if (format_i->arg_f == 1 && format_i->dlina_L == 0) {
    funkshin_for_f(const_Buffer, format_i);
  }
  if (format_i->arg_f == 1 && format_i->dlina_L == 1) {
    funkshin_for_f_L(const_Buffer, format_i);
  }
  if (format_i->arg_g == 1) {
    funkshin_for_g(const_Buffer, format_i);
  }
  if (format_i->arg_G == 1) {
    funkshin_for_G(const_Buffer, format_i);
  }
  if (format_i->arg_o == 1) {
    funkshin_for_o(const_Buffer, format_i);
  }
  if (format_i->arg_u == 1) {
    funkshin_for_u(const_Buffer, format_i);
  }
  if (format_i->arg_s == 1) {
    funkshin_for_s(const_Buffer, format_i);
  }
  if (format_i->arg_x == 1) {
    funkshin_for_x(const_Buffer, format_i);
  }
  if (format_i->arg_X == 1) {
    funkshin_for_X(const_Buffer, format_i);
  }
  if (format_i->arg_p == 1) {
    funkshin_for_p(const_Buffer, format_i);
  }
  if (format_i->arg_n == 1) {
    funkshin_for_n(format_i);
  }
}
