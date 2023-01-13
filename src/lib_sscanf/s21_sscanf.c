#include "../s21_string.h"

int s21_sscanf(const char const_Buffer[], const char const_Format[], ...) {
  int znachenie_returne = 0;
  va_list ap;
  int i = 0;
  int i_flag_procent = 0;
  int n = s21_strlen(const_Format);
  int count_for = 0;
  va_start(ap, const_Format);
  struct pars_format format_i = {0};

  for (int j = 0; j < n; j++) {  // start
    s21_memset(&format_i, 0, sizeof(struct pars_format));
    format_i.count_pointer_Buffer = count_for;
    format_i.count_pointer_Format = i;
    format_i.flag_procent = i_flag_procent;
    parser_const_Format(const_Format, &format_i,
                        i);  // ищем форматы и флаги и все остальное
    parser_tip_arg_get_funkshin(
        const_Buffer,
        &format_i);  // ищем нужные фунции в зависимости от типа переменной
                     // и запускаем её (возможно с учетом флагом)
    if (format_i.arg_int == 1 && format_i.dlina_h == 0 &&
        format_i.dlina_l == 0 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      int d = format_i.znachenie_int;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_int == 1 && format_i.dlina_h == 1 &&
        format_i.dlina_l == 0 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      short int d = format_i.znachenie_int_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
      znachenie_returne++;
    }

    if (format_i.arg_int == 1 && format_i.dlina_h == 0 &&
        format_i.dlina_l == 1 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      long int d = format_i.znachenie_int_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }
    if (format_i.arg_u == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      unsigned int d = format_i.znachenie_u;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_u == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      unsigned short int d = format_i.znachenie_u_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_u == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      unsigned long int d = format_i.znachenie_u_l;
      long long int *d_adress = (long long int *)va_arg(ap, long long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_s == 1 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      int f = 0;
      char *argc = va_arg(ap, char *);
      while (format_i.znachenie_s[f] != '\0') {
        format_i.count = 1;
        argc[f] = format_i.znachenie_s[f];
        f++;
      }
      if (format_i.count == 1) {
        znachenie_returne++;
      }
    }

    if (format_i.arg_f == 1 && format_i.dlina_L == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      float *a_adress = (float *)va_arg(ap, float *);
      if (format_i.count == 1) {
        *a_adress = (float)format_i.znachenie_float;
        znachenie_returne++;
      }
    }

    if (format_i.arg_f == 1 && format_i.dlina_L == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long double *a_adress = (long double *)va_arg(ap, long double *);
      //*a_adress = (long double)*a_adress;
      if (format_i.count == 1) {
        *a_adress = format_i.znachenie_float_L;
        znachenie_returne++;
      }
    }

    if (format_i.arg_e == 1 && format_i.dlina_L == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      float *a_adress = (float *)va_arg(ap, float *);
      if (format_i.count == 1) {
        *a_adress = (float)format_i.znachenie_e;
        znachenie_returne++;
      }
    }

    if (format_i.arg_e == 1 && format_i.dlina_L == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long double *a_adress = (long double *)va_arg(ap, long double *);
      if (format_i.count == 1) {
        *a_adress = format_i.znachenie_e_L;
        znachenie_returne++;
      }
    }

    if (format_i.arg_E == 1 && format_i.dlina_L == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      float *a_adress = (float *)va_arg(ap, float *);
      if (format_i.count == 1) {
        *a_adress = (float)format_i.znachenie_E;
        znachenie_returne++;
      }
    }

    if (format_i.arg_E == 1 && format_i.dlina_L == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long double *a_adress = (long double *)va_arg(ap, long double *);
      if (format_i.count == 1) {
        *a_adress = format_i.znachenie_E_L;
        znachenie_returne++;
      }
    }

    if (format_i.arg_g == 1 && format_i.dlina_L == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      float *a_adress = (float *)va_arg(ap, float *);
      if (format_i.count == 1) {
        *a_adress = (float)format_i.znachenie_g;
        znachenie_returne++;
      }
    }

    if (format_i.arg_g == 1 && format_i.dlina_L == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long double *a_adress = (long double *)va_arg(ap, long double *);
      if (format_i.count == 1) {
        *a_adress = format_i.znachenie_g_L;
        znachenie_returne++;
      }
    }

    if (format_i.arg_G == 1 && format_i.dlina_L == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      float *a_adress = (float *)va_arg(ap, float *);
      if (format_i.count == 1) {
        *a_adress = (float)format_i.znachenie_G;
        znachenie_returne++;
      }
    }

    if (format_i.arg_G == 1 && format_i.dlina_L == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long double *a_adress = (long double *)va_arg(ap, long double *);
      if (format_i.count == 1) {
        *a_adress = format_i.znachenie_G_L;
        znachenie_returne++;
      }
    }

    if (format_i.arg_c == 1 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      char *argc = va_arg(ap, char *);
      argc[0] = format_i.znachenie_c;
      znachenie_returne++;
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      int d = format_i.znachenie_i;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      short int d = format_i.znachenie_i_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long int d = format_i.znachenie_i_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      int d = format_i.znachenie_o;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      short int d = format_i.znachenie_o_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long int d = format_i.znachenie_o_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      int d = format_i.znachenie_x;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      short int d = format_i.znachenie_x_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long int d = format_i.znachenie_x_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      int d = format_i.znachenie_X;
      int *d_adress = (int *)va_arg(ap, int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      short int d = format_i.znachenie_X_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long int d = format_i.znachenie_X_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      if (format_i.count == 1) {
        *d_adress = d;
        znachenie_returne++;
      }
    }

    if (format_i.arg_p == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      int p = format_i.znachenie_p;
      int *p_adress = (int *)va_arg(ap, int *);
      *p_adress = p;
      znachenie_returne++;
    }

    if (format_i.arg_p == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      short int p = format_i.znachenie_p_h;
      short int *p_adress = (short int *)va_arg(ap, short int *);
      *p_adress = p;
      znachenie_returne++;
    }

    if (format_i.arg_p == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1 &&
        format_i.flag_star == 0 && format_i.flag_procent == 0) {
      long int p = format_i.znachenie_p_l;
      long int *p_adress = (long int *)va_arg(ap, long int *);
      *p_adress = p;
      znachenie_returne++;
    }
    if (format_i.arg_n == 1 && format_i.flag_star == 0 &&
        format_i.flag_procent == 0) {
      int nn = format_i.znachenie_n;
      int *nn_adress = (int *)va_arg(ap, int *);
      *nn_adress = nn;
    }
    i_flag_procent = format_i.flag_procent;
    count_for = format_i.count_pointer_Buffer;  //
    i = format_i.count_pointer_Format;          // lovim procent pri sled shage
  }

  va_end(ap);
  return znachenie_returne;
}
