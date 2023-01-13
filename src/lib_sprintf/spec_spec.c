// created by pizpotli
#include "../s21_string.h"

void reset(int *p, spec *flag) {
  *p = flag->count_form;
  flag->spec[0] = '\0';
  s21_memset(flag, 0, sizeof(spec));
  flag->count_form = *p;
}

void s21_str_x(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->h == 1) {
    flag->dd = (short unsigned int)va_arg(*arg, unsigned int);
  } else if (flag->l == 1) {
    flag->dd = (long unsigned int)va_arg(*arg, long unsigned int);
  } else {
    flag->dd = (unsigned int)va_arg(*arg, unsigned int);
  }
  flag->x = 1;
  spec_x(str, flag);
  reset(p, flag);
}

void s21_str_X(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->h == 1) {
    flag->dd = (short unsigned int)va_arg(*arg, unsigned int);
  } else if (flag->l == 1) {
    flag->dd = (long unsigned int)va_arg(*arg, long unsigned int);
  } else {
    flag->dd = (unsigned int)va_arg(*arg, unsigned int);
  }
  flag->x = flag->X = 1;
  spec_x(str, flag);
  reset(p, flag);
}

void s21_str_E(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->L == 1) {
    flag->f = (long double)va_arg(*arg, long double);
  } else {
    flag->f = (double)va_arg(*arg, double);
  }
  flag->c = 'E';
  spec_e_0(str, flag);
  reset(p, flag);
}

void s21_str_e(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->L == 1) {
    flag->f = (long double)va_arg(*arg, long double);
  } else {
    flag->f = (double)va_arg(*arg, double);
  }
  flag->c = 'e';
  spec_e_0(str, flag);
  reset(p, flag);
}

void s21_str_G(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->L == 1) {
    flag->f = (long double)va_arg(*arg, long double);
  } else {
    flag->f = (double)va_arg(*arg, double);
  }
  flag->c = 'E';
  flag->g = 1;
  spec_g(str, flag);
  reset(p, flag);
}

void s21_str_g(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->L == 1) {
    flag->f = (long double)va_arg(*arg, long double);
  } else {
    flag->f = (double)va_arg(*arg, double);
  }
  flag->c = 'e';
  flag->g = 1;
  spec_g(str, flag);
  reset(p, flag);
}

void s21_str_f(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->L == 1) {
    flag->f = (long double)va_arg(*arg, long double);
  } else {
    flag->f = (double)va_arg(*arg, double);
  }
  flag->ft = 1;
  flag->fl = 1;
  spec_f(str, flag);
  reset(p, flag);
}

void s21_str_o(char *str, spec *flag, va_list *arg, int *p) {
  flag->o1 = 1;
  flag->x = 1;
  if (flag->h == 1) {
    flag->dd = (short unsigned int)va_arg(*arg, unsigned int);
  } else if (flag->l == 1) {
    flag->dd = (long unsigned int)va_arg(*arg, long unsigned int);
  } else {
    flag->dd = (unsigned int)va_arg(*arg, unsigned int);
  }
  spec_o(str, flag);
  reset(p, flag);
}

void s21_str_n(spec *flag, va_list *arg, int *p) {
  int *x;
  x = va_arg(*arg, int *);
  *x = flag->count_form;
  reset(p, flag);
}

void s21_str_p(char *str, spec *flag, va_list *arg, int *p) {
  flag->x = 1;
  flag->arr = (char *)va_arg(*arg, char *);
  flag->d = (long int)flag->arr;
  spec_p(str, flag);
  reset(p, flag);
}

void s21_str_s(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->l == 1) {
    flag->arrl = (wchar_t *)va_arg(*arg, wchar_t *);
    spec_sl(str, flag);
    reset(p, flag);
  } else {
    flag->arr = (char *)va_arg(*arg, char *);
    spec_s(str, flag);
    reset(p, flag);
  }
}

void s21_str_c(char *str, spec *flag, va_list *arg, int *p) {
  flag->c1 = 1;
  if (flag->l == 1) {
    flag->cl = (wchar_t)va_arg(*arg, wchar_t);
    spec_cl(str, flag);
    reset(p, flag);
  } else {
    flag->c = va_arg(*arg, int);
    spec_c(str, flag);
    reset(p, flag);
  }
}

void s21_str_u(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->h == 1) {
    flag->dd = (unsigned short int)va_arg(*arg, unsigned int);
  } else if (flag->l == 1) {
    flag->dd = (unsigned long int)va_arg(*arg, unsigned long int);
  } else {
    flag->dd = (unsigned int)va_arg(*arg, unsigned int);
  }
  spec_u(str, flag);
  reset(p, flag);
}

void s21_str_i(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->h == 1) {
    flag->d = (short int)va_arg(*arg, int);
  } else if (flag->l == 1) {
    flag->d = (long int)va_arg(*arg, long int);
  } else {
    flag->d = (int)va_arg(*arg, int);
  }
  spec_d(str, flag);
  reset(p, flag);
}

void s21_str_d(char *str, spec *flag, va_list *arg, int *p) {
  if (flag->h == 1) {
    flag->d = (short int)va_arg(*arg, int);
  } else if (flag->l == 1) {
    flag->d = (long int)va_arg(*arg, long int);
  } else {
    flag->d = (int)va_arg(*arg, int);
  }
  spec_d(str, flag);
  reset(p, flag);
}
