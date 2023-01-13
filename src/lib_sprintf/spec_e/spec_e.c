// created by pizpotli
#include "../../s21_string.h"

void spec_e_0(char *str, spec *flag) {
  flag->fl = 1;
  flag->ee = 1;
  if (flag->f == 0) {
    flag->znak_e = '+';
    flag->d = flag->f;
    spec_f(str, flag);
  }
  if (flag->f > 0) {
    spec_e_1(str, flag);
  }
  if (flag->f < 0) {
    spec_e(str, flag);
  }
  flag->e = 0;
}

void spec_e_1(char *str, spec *flag) {
  flag->znak_e = '+';
  while (flag->f < 1) {
    flag->f *= 10;
    flag->count_e += 1;
    if (flag->count_e == 11) {
      flag->f = flag->f + 0.0000000000000001;
    }
    if (flag->count_e == 25) {
      flag->f -= 0.01;
    }
    flag->znak_e = '-';
  }
  while (flag->f >= 10) {
    flag->f /= 10;
    flag->count_e += 1;
    flag->e = -1;
    flag->znak_e = '+';
  }
  flag->d = flag->f;
  spec_f(str, flag);
}

void spec_e(char *str, spec *flag) {
  flag->f *= -1;
  flag->znak_e = '-';
  while (flag->f >= 10) {
    flag->f /= 10;
    flag->count_e += 1;
    flag->znak_e = '+';
  }
  if (flag->f < 1) {
    while (flag->d < 1) {
      flag->f *= 10;
      flag->d = flag->f;
      flag->count_e += 1;
      if (flag->count_e == 11) {
        flag->f = flag->f + 0.0000000000000001;
      }
      if (flag->count_e == 25) {
        flag->f -= 0.01;
      }
    }
    if (flag->d % 10 == 0) {
      flag->f /= 10;
      flag->count_e -= 1;
    }
  }
  flag->f *= -1;
  flag->d = flag->f;
  spec_f(str, flag);
}

void spec_e_print(int *count, char *str1, spec *flag) {
  *count += 1;
  if (flag->g1 == 1) {
    if (flag->resh == 0) {
      int x;
      x = s21_strlen(str1) - 1;
      for (; str1[x] == '0' || str1[x] == '.'; x--) {
        if (str1[x] == '.') {
          str1[x] = '\0';
          break;
        }
        if (str1[x] != '0') {
          break;
        }
        str1[x] = '\0';
        flag->count_tochn_d -= 1;
      }
      *count = s21_strlen(str1);
    } else {
      flag->count_tochn_d += 1;
    }
  }
  str1[*count] = flag->c;
  str1[*count + 1] = flag->znak_e;
  *count += 2;
  if (flag->count_e < 10) {
    str1[*count] = '0';
    str1[*count + 1] = flag->count_e + 48;
    *count += 1;
  } else {
    int tmp = 0, tmp_count = 0;
    if (flag->count_e % 10 == 0) {
      flag->count_e /= 10;
      flag->tmp[1] = flag->count_e + '0';
      flag->count_e /= 10;
      flag->tmp[0] = flag->count_e + '0';
      tmp_count = 2;
      flag->count_e = 0;
    }
    while (flag->count_e != 0) {
      tmp = flag->count_e % 10;
      flag->tmp[tmp_count] = tmp + '0';
      flag->count_e /= 10;
      tmp_count++;
    }
    tmp_count--;
    for (; tmp_count >= 0; tmp_count--) {
      str1[*count] = flag->tmp[tmp_count];
      *count += 1;
    }
    *count -= 1;
  }
}
