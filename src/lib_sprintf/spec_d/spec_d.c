// created by pizpotli
#include "../../s21_string.h"

void spec_d(char *str, spec *flag) {
  if (flag->d == LONG_MIN) {
    flag->d += 1;
    flag->lon = 1;
  }
  char c;
  if (flag->g == 1) {
    flag->count_tochn_d -= 1;
  }
  int len = 1, len_count = 0, x = 0, tmp = 0;
  if ((flag->buf = (char *)malloc(100 * sizeof(char))) != s21_NULL) {
    len++;
    if (flag->d >= 0) {
      if (flag->fl == 0) {
        flag->znak = 1;
      }
    }
    if (flag->d < 0) {
      flag->d *= -1;
      if (flag->fl == 0) {
        flag->znak = 2;
      }
    }
    if (flag->d != 0) {
      for (int i = 0; x == 0; i++) {
        flag->g_tochn += 1;
        tmp = flag->d % 10;
        if (flag->lon == 1) {
          tmp += 1;
          flag->lon = 0;
        }
        c = tmp + '0';
        flag->buf[len_count] = c;
        if (flag->fl == 1 && flag->d == 0) {
          len++;
          len_count++;
        }
        if (flag->fl == 0 && flag->count_tochn == -1 && flag->d == 0) {
          len++;
          len_count++;
        }
        if (flag->d >= 0) {
          len++;
          len_count++;
          flag->d = flag->d / 10;
          if (flag->d == 0) {
            flag->buf[len_count] = '\0';
            x = -1;
          }
        } else {
          flag->buf[len_count] = '\0';
          x = -1;
        }
      }
    } else {
      if (flag->count_tochn == -1 || flag->fl == 1) {
        len++;
        flag->buf[len_count] = '0';
        len_count++;
        flag->buf[len_count] = '\0';
      } else {
        flag->buf[len_count] = '\0';
        x = -1;
      }
    }
    len_count--;
    if (flag->fl == 0) {
      spec_d_1(flag, str);
      spec_d_2(flag, str, &len_count);
    }
  } else {
    exit(0);
  }
}

void spec_d_1(spec *flag, char *str) {
  flag->strlen = s21_strlen(flag->buf);
  if (flag->s == 1) {
    spec_d_1_s_1(flag);
  }
  spec_d_1_uslovie(str, flag);
  if (flag->zero == 1 && flag->x == 1 && flag->resh == 1) {
    spec_d_1_zero_1(str, flag);
  }

  if (flag->left == 0 && flag->shirina1 > 0) {
    while (flag->shirina1 != 0) {
      if (flag->zero == 1 && flag->s == 0) {
        str[flag->count_form] = '0';
      } else {
        str[flag->count_form] = ' ';
      }
      flag->count_form += 1;
      flag->shirina1 -= 1;
    }
  }
  if (flag->zero == 0 && flag->x == 1 && flag->resh == 1) {
    spec_d_1_zero_0(str, flag);
  }

  if (flag->s == 0) {
    spec_d_1_s_0(str, flag);
  }

  if (flag->count_tochn_d > 0) {
    for (int i = 0; i < flag->count_tochn_d; i++) {
      if (flag->s == 1) {
        flag->shirina1 += 1;
      } else {
        str[flag->count_form] = '0';
        flag->count_form += 1;
      }
    }
  }
}

void spec_d_2(spec *flag, char *str, int *len_count) {
  while (*len_count >= 0 && flag->buf[0] != '\0') {
    str[flag->count_form] = flag->buf[*len_count];
    flag->count_form += 1;
    *len_count -= 1;
  }
  for (int i = 0; i < *len_count && flag->fl == 1; i++) {
    str[flag->count_form] = flag->buf[i];
    flag->count_form += 1;
  }
  if (flag->left == 1 && flag->shirina1 > 0) {
    while (flag->shirina1 != 0) {
      str[flag->count_form] = ' ';
      flag->count_form += 1;
      flag->shirina1 -= 1;
    }
  }
  free(flag->buf);
  flag->buf = s21_NULL;
}

void spec_d_1_s_0(char *str, spec *flag) {
  if ((flag->znak1 == 0 && flag->znak == 1) && flag->u == 0 && flag->o == 0 &&
      flag->x == 0 && flag->space == 1 && flag->left == 1) {
    str[flag->count_form] = ' ';
    flag->count_form += 1;
  }
  if (flag->znak == 2 && flag->zero == 0 && flag->x == 0 && flag->o == 0) {
    str[flag->count_form] = '-';
    flag->count_form += 1;
    if (flag->left == 1 && flag->znak1 == 1) {
      flag->shirina1 -= 1;
    }
  }
  if (flag->znak1 == 1 && flag->zero == 0 && flag->x == 0 && flag->znak == 1 &&
      flag->o == 0) {
    str[flag->count_form] = '+';
    flag->count_form += 1;
    if (flag->left == 1) {
      flag->shirina1 -= 1;
    }
  }
}

void spec_d_1_s_1(spec *flag) {
  if (flag->buf[0] == '\0' && flag->c1 == 1) {
    flag->shirina1 -= 1;
  }
  if (flag->strlen > flag->count_tochn_s && flag->count_tochn != -1) {
    flag->strlen = flag->count_tochn_s;
  } else {
    flag->count_tochn_s = flag->strlen;
  }
}

void spec_d_1_zero_1(char *str, spec *flag) {
  str[flag->count_form] = '0';
  if (flag->o1 == 0) {
    if (flag->X == 1) {
      str[flag->count_form + 1] = 'X';
    } else {
      str[flag->count_form + 1] = 'x';
    }
    flag->count_form += 2;
  } else {
    flag->count_form += 1;
  }
}

void spec_d_1_zero_0(char *str, spec *flag) {
  str[flag->count_form] = '0';
  if (flag->o1 == 0) {
    if (flag->X == 1) {
      str[flag->count_form + 1] = 'X';
    } else {
      str[flag->count_form + 1] = 'x';
    }
    flag->count_form += 2;
  } else {
    flag->count_form += 1;
  }
}

void spec_d_1_uslovie(char *str, spec *flag) {
  if (flag->strlen > flag->count_tochn_d) {
    flag->count_tochn_d = flag->strlen;
  }
  if (flag->znak1 == 1 && flag->x == 0 && flag->u == 0 && flag->left == 0 &&
      flag->o == 0) {
    flag->shirina1 -= 1;
  }
  if (flag->znak == 2 && flag->u == 0 && flag->x == 0 && flag->znak1 == 0 &&
      flag->o == 0) {
    flag->shirina1 -= 1;
  }
  flag->shirina1 -= flag->count_tochn_d;
  flag->count_tochn_d -= flag->strlen;
  if ((flag->znak1 == 0 && flag->znak == 1) && flag->u == 0 && flag->x == 0 &&
      flag->space == 1) {
    flag->shirina1 -= 1;
  }
  if (flag->znak == 2 && flag->zero == 1 && flag->x == 0 && flag->o == 0) {
    str[flag->count_form] = '-';
    flag->count_form += 1;
  }
  if (flag->znak1 == 1 && flag->zero == 1 && flag->x == 0 && flag->znak == 1 &&
      flag->o == 0) {
    str[flag->count_form] = '+';
    flag->count_form += 1;
  }
  if ((flag->znak1 == 0 && flag->znak == 1) && flag->u == 0 && flag->o == 0 &&
      flag->x == 0 && flag->space == 1 && flag->left == 0) {
    str[flag->count_form] = ' ';
    flag->count_form += 1;
  }
  if (flag->x == 1 && flag->resh == 1) {
    if (flag->o1 == 1) {
      flag->shirina1 -= 1;
    } else {
      flag->shirina1 -= 2;
    }
  }
}