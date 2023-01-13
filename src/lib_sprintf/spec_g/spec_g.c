// created by pizpotli
#include "../../s21_string.h"

void spec_g(char *str, spec *flag) {
  int x = 0;
  flag->g1 = 1;
  if (flag->count_tochn == -1) {
    flag->count_tochn_d = 6;
  }
  flag->d1 = flag->count_tochn_d;
  char str1[500] = {"0"};
  flag->d = flag->f;
  if (flag->d == flag->f) {
    flag->fl = 1;
    spec_d(str1, flag);
    x = (int)s21_strlen(flag->buf);
    free(flag->buf);
    if (flag->d1 < x) {
      flag->count_tochn_d += 1;
      spec_e_0(str, flag);
    } else {
      if (flag->resh == 1) {
        flag->g2 = 1;
        flag->count_tochn_d = flag->d1;
        flag->d = flag->f;
        flag->count_tochn_d -= flag->g_tochn - 1;
        if (flag->count_tochn_d < 0) {
          flag->count_tochn_d = 0;
        }
        flag->fl = flag->count_tochn_d;
        spec_f(str, flag);
      } else {
        flag->d = flag->f;
        flag->fl = flag->count_tochn_d = 0;
        spec_d(str, flag);
      }
    }
  } else {
    if (flag->zero == 0 && flag->count_tochn == -1) {
      flag->count_tochn_d = 6;
    }
    if (flag->zero == 1 && flag->count_tochn != -1) {
      flag->count_tochn_d = flag->count_tochn;
    }
    if (flag->zero == 1 && flag->count_tochn_f_1 != 0) {
      flag->count_tochn_d = flag->count_tochn_f_1;
    }
    if (flag->f < 0) {
      flag->znak_f = 1;
    }
    flag->fl = 1;
    flag->d = flag->f;
    spec_d(str1, flag);
    flag->fl = 0;
    x = (int)s21_strlen(flag->buf);
    flag->d = flag->f;
    s21_memset(str1, 0, sizeof(char));
    free(flag->buf);
    flag->buf = s21_NULL;
    spec_g_1(flag);
    double tmp;
    tmp = spec_g_2(flag);
    if (flag->f < 0) {
      tmp *= -1;
    }
    if ((flag->f > tmp && flag->znak_f == 0 && x < flag->count_tochn_d) ||
        (flag->f < tmp && flag->znak_f == 1 && x < flag->count_tochn_d)) {
      flag->fl = 1;
      if (flag->resh == 1) {
        flag->d = flag->f;
        spec_d(str1, flag);
        printf("d1 %d gto %d\n", flag->d1, flag->g_tochn);
        free(flag->buf);
        flag->g2 = 1;
        flag->count_tochn_d = flag->d1;
        flag->d = flag->f;
        flag->count_tochn_d -= x;
        flag->g = 0;
        printf("tochnd %d\n", flag->count_tochn_d);
        if (flag->count_tochn_d < 0) {
          flag->count_tochn_d = 0;
        }
      }
      if (flag->resh == 0) {
        flag->count_tochn_d -= x - 2;
        flag->g = 0;
      }
      spec_f(str, flag);
    } else {
      if (flag->f < 1) {
        flag->count_tochn_d += 1;
      }
      flag->count_tochn_d -= 1;
      spec_e_0(str, flag);
    }
  }
}

int spec_g_1(spec *flag) {
  int count = 0;
  flag->tmp_ff = flag->d;
  flag->tmp_f = flag->f;
  flag->tmp_f -= flag->d;
  while (flag->f != flag->tmp_ff && count <= flag->count_tochn_d) {
    count++;
    flag->tmp_f *= 10;
    flag->d = flag->tmp_f;
    flag->tmp_ff1 = flag->d;
    for (int i = 0; i < count; i++) {
      flag->tmp_ff1 /= 10;
    }
    flag->tmp_ff = flag->tmp_ff + flag->tmp_ff1;
    flag->tmp_f -= flag->d;
  }
  return count;
}

double spec_g_2(spec *flag) {
  double x = 1;
  for (int i = 0; i < flag->count_tochn_d - 1; i++) {
    x /= 10;
  }
  return x;
}

void check_zero(spec *flag) {
  if (1 / flag->f < 0) {
    flag->znak = 2;
  }
  if (1 / flag->f > 0) {
    flag->znak = 1;
  }
}
