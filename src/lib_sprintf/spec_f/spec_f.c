// created by pizpotli
#include "../../s21_string.h"

void spec_f(char *str, spec *flag) {
  if (flag->count_tochn == -1 && flag->g2 == 0) {
    flag->count_tochn_d = 6;
  }
  if (flag->zero == 1 && flag->count_tochn != -1) {
    flag->count_tochn_d = flag->count_tochn;
  }
  if (flag->zero == 1 && flag->count_tochn_f_1 != 0) {
    flag->count_tochn_d = flag->count_tochn_f_1;
  }
  if (flag->f < 0) {
    flag->znak = 2;
  } else {
    flag->znak = 1;
  }
  char str1[200] = {"0"};
  int i = 0;
  flag->d = flag->f;
  check_zero(flag);
  if (flag->d == flag->f) {
    spec_d(str1, flag);
    flag->d = flag->f;
    spec_f_1(flag, str1, &i);
    spec_f_3(flag, str1, &i);
    if (flag->ee == 1) {
      spec_e_print(&i, str1, flag);
    }
    revers(str1, flag);
    maloc(flag, str1);
    spec_d_1(flag, str);
    spec_d_2(flag, str, &i);
    s21_memset(str1, 0, sizeof(char));
  } else {
    spec_d(str1, flag);
    if (flag->f < 0) {
      flag->f *= -1;
    }
    flag->d = flag->f;
    flag->f -= flag->d;
    spec_f_1(flag, str1, &i);
    spec_f_2(flag, &i, str1);
    if (flag->ee == 1) {
      spec_e_print(&i, str1, flag);
    }
    revers(str1, flag);
    maloc(flag, str1);
    if (flag->g1 == 1) {
      i = s21_strlen(flag->buf) - 1;
    }
    spec_d_1(flag, str);
    spec_d_2(flag, str, &i);
    s21_memset(str1, 0, sizeof(char));
  }
}

void spec_f_1(spec *flag, char *str1, int *i) {
  int x;
  x = (int)s21_strlen(flag->buf);
  x -= 1;
  while (x >= 0) {
    str1[*i] = flag->buf[x];
    *i += 1;
    x--;
  }
  if (((flag->e == 1 || flag->fl == 1) &&
       (flag->resh == 1 && flag->count_tochn_d == 0)) ||
      (flag->count_tochn_d != 0) || (flag->g1 == 1 && flag->resh == 1)) {
    str1[*i] = '.';
    *i += 1;
  }
  free(flag->buf);
  flag->buf = s21_NULL;
}

void spec_f_2(spec *flag, int *count, char *str1) {
  char c;
  long int x;

  for (int i = 0; i < flag->count_tochn_d; i++) {
    flag->f = flag->f * 10;
    if (i == (flag->count_tochn_d - 1) && flag->g == 1) {
      if ((flag->f * 10) >= 5) {
        flag->f += 1;
      }
    }
    x = (long int)flag->f;
    flag->f = (long double)flag->f - (long double)x;
    if (x == 0) {
      str1[*count] = 48;
      *count += 1;
    }
    if (x != 0) {
      x = (long int)x % 10;
      c = x + 48;
      str1[*count] = c;
      *count += 1;
    }
  }
  int k = *count - 1;
  if (flag->g == 0) {
    while (k != 0) {
      flag->f *= 10;
      x = flag->f;
      if (flag->f >= 5 && flag->f != 0) {
        if (str1[k] == '.') {
          k--;
          if (str1[k] == '9') {
            str1[k] = '1';
            flag->count_e -= 1;
            if (flag->ft == 1) {
              k++;
              int tmp = str1[k];
              str1[k] = '0';
              k++;
              int tmp2 = str1[k];
              *count += 1;
              for (int i = k; i < *count; i++) {
                str1[i] = tmp;
                tmp = tmp2;
                tmp2 = str1[i + 1];
              }
              break;
            }
          } else {
            str1[k] = str1[k] + 1;
          }
          continue;
        }
        if (str1[k] != '9') {
          str1[k] += 1;
          k = 0;
        } else {
          str1[k] = '0';
          k--;
          flag->f -= x;
        }
      } else {
        k = 0;
      }
    }
  }
  *count -= 1;
}

void spec_f_3(spec *flag, char *str1, int *i) {
  if ((flag->d == flag->f && flag->g2 == 0) ||
      (flag->count_tochn != -1 && flag->g2 == 1)) {
    for (; flag->count_tochn_d > 0; flag->count_tochn_d -= 1) {
      str1[*i] = '0';
      *i += 1;
    }
    *i -= 1;
  } else {
    flag->count_tochn_d = 0;
    *i -= 1;
  }
}

void revers(char *str1, spec *flag) {
  if (flag->g1 == 1 && flag->g2 == 0) {
    int x;
    x = s21_strlen(str1) - 1;
    for (; str1[x] == '0'; x--) {
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
  }
  char str[200] = {"\0"};
  int i = 0;
  for (; str1[i] != '\0'; i++) {
    str[i] = str1[i];
  }
  i--;
  for (int j = 0; i >= 0; i--) {
    str1[j] = str[i];
    j++;
  }
}
