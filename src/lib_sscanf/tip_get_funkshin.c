#include "../s21_string.h"

void funkshin_for_int(const char *const_Buffer, struct pars_format *format_i) {
  int x = 0;
  int count_shirina = 0;
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  int znak = 1;
  int flag_cifra = 0;
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    count_shirina++;
  }
  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    count_shirina++;
  }
  if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
    flag_cifra = 1;
  }

  while (flag_cifra == 1) {
    format_i->count = 1;
    x = x * 10 + (const_Buffer[count_i] - 48);
    count_i++;
    count_shirina++;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    } else {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
    if (format_i->shirina != 0 && count_shirina == format_i->shirina) {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
  }
  x = znak * x;
  format_i->znachenie_int = x;
}

void funkshin_for_int_h(const char *const_Buffer,
                        struct pars_format *format_i) {
  short int x = 0;
  int count_shirina = 0;
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  int znak = 1;
  int flag_cifra = 0;
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    count_shirina++;
  }
  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    count_shirina++;
  }
  if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
    flag_cifra = 1;
    format_i->count = 1;
  }

  while (flag_cifra == 1) {
    x = x * 10 + (const_Buffer[count_i] - 48);
    count_i++;
    count_shirina++;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    } else {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
    if (format_i->shirina != 0 && count_shirina == format_i->shirina) {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
  }
  x = znak * x;
  format_i->znachenie_int_h = x;
}

void funkshin_for_int_l(const char *const_Buffer,
                        struct pars_format *format_i) {
  long long int x = 0;
  int count_shirina = 0;
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    count_shirina++;
  }
  int znak = 1;
  int flag_cifra = 0;
  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    count_shirina++;
  }
  if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
    flag_cifra = 1;
    format_i->count = 1;
  }

  while (flag_cifra == 1) {
    x = x * 10 + (const_Buffer[count_i] - 48);
    count_i++;
    count_shirina++;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    } else {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
    if (format_i->shirina != 0 && count_shirina == format_i->shirina) {
      flag_cifra = 0;
      format_i->count_pointer_Buffer = count_i;
    }
  }
  x = znak * x;
  format_i->znachenie_int_l = x;
}

void funkshin_for_f(const char *const_Buffer, struct pars_format *format_i) {
  double x = 0;
  float y = 0;
  float n = 0.1;
  int flag_e = 0;
  int shirina = 0;

  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  float znak = 1;
  int flag_cifra = 0;
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
    shirina++;
  }

  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    shirina++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    shirina++;
  }

  if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
    flag_cifra = 1;
    format_i->count = 1;
  }

  while (flag_cifra == 1) {
    x = x * 10 + (const_Buffer[count_i] - 48);
    count_i++;
    shirina++;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    } else {
      flag_cifra = 0;
    }
    if (format_i->shirina != 0) {
      if (shirina >= format_i->shirina) {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
    }
  }

  if (const_Buffer[count_i] == '.') {
    count_i++;
    shirina++;

    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
      if (format_i->shirina != 0) {
        if (shirina >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }

      while (flag_cifra == 1) {
        y = y + (const_Buffer[count_i] - 48) * n;
        n = n * 0.1;
        count_i++;
        shirina++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
          flag_cifra = 1;
        } else if (const_Buffer[count_i] == 'e') {
          flag_cifra = 0;
          flag_e = 1;
          count_i++;
          shirina++;
        } else {
          flag_cifra = 0;
          count_i++;
          shirina++;
          format_i->count_pointer_Buffer = count_i;
        }
        if (format_i->shirina != 0) {
          if (shirina >= format_i->shirina) {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
          }
        }
      }
    }
  }

  if (const_Buffer[count_i] == 'e') {
    flag_cifra = 0;
    flag_e = 1;
    count_i++;
    shirina++;
  }
  x = x + y;
  int e = 0;

  if (flag_e == 1) {
    if (const_Buffer[count_i] == '-') {
      count_i++;
      shirina++;
      e = -(const_Buffer[count_i] - 48);
    }
    if (const_Buffer[count_i] == '+') {
      count_i++;
      shirina++;
      e = const_Buffer[count_i] - 48;
    }
    count_i++;
    shirina++;
    flag_cifra = 0;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    }

    while (flag_cifra == 1) {
      e = e * 10 + (const_Buffer[count_i] - 48);
      count_i++;
      shirina++;
      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i + 1;
      }
      if (format_i->shirina != 0) {
        if (shirina >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }

    x = x * pow(10, e);
  }

  x = znak * x;
  format_i->znachenie_float = x;
  format_i->count_pointer_Buffer = count_i;
};

void funkshin_for_f_L(const char *const_Buffer, struct pars_format *format_i) {
  long double x = 0;
  long double y = 0;
  long double n = 0.1;
  short int flag_e = 0;
  long double znak = 1;
  short int flag_cifra = 0;
  long int e = 0;
  int shirina = 0;

  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }

  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    shirina++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    shirina++;
  }
  if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
    flag_cifra = 1;
    format_i->count = 1;
  }

  while (flag_cifra == 1) {
    x = x * 10 + (const_Buffer[count_i] - 48);
    count_i++;
    shirina++;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    } else {
      flag_cifra = 0;
    }
    if (format_i->shirina != 0) {
      if (shirina >= format_i->shirina) {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
    }
  }

  if (const_Buffer[count_i] == '.') {
    count_i++;
    shirina++;

    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
      if (format_i->shirina != 0) {
        if (shirina >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }

      while (flag_cifra == 1) {
        y = y + (const_Buffer[count_i] - 48) * n;
        n = n * 0.1;
        count_i++;
        shirina++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
          flag_cifra = 1;
        } else if (const_Buffer[count_i] == 'e') {
          flag_cifra = 0;
          flag_e = 1;
          count_i++;
        } else {
          flag_cifra = 0;
          count_i++;
          format_i->count_pointer_Buffer = count_i;
        }
        if (format_i->shirina != 0) {
          if (shirina >= format_i->shirina) {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
          }
        }
      }
    }
  }

  if (const_Buffer[count_i] == 'e') {
    flag_cifra = 0;
    flag_e = 1;
    count_i++;
    shirina++;
  }
  x = x + y;
  if (flag_e == 1) {
    if (const_Buffer[count_i] == '-') {
      count_i++;
      shirina++;
      e = -(const_Buffer[count_i] - 48);
    }
    if (const_Buffer[count_i] == '+') {
      count_i++;
      shirina++;
      e = const_Buffer[count_i] - 48;
    }
    count_i++;
    shirina++;
    flag_cifra = 0;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    }

    while (flag_cifra == 1) {
      e = e * 10 + (const_Buffer[count_i] - 48);
      count_i++;
      shirina++;
      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i + 1;
      }
      if (format_i->shirina != 0) {
        if (shirina >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    x = x * pow(10, e);
  }

  x = znak * x;
  format_i->znachenie_float_L = x;
  format_i->count_pointer_Buffer = count_i;
};

void funkshin_for_s(const char *const_Buffer, struct pars_format *format_i) {
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  *format_i->znachenie_s = '\0';
  int i = 0;
  int flag = 1;
  format_i->count = 1;
  if (const_Buffer[count_i] == '\0' ||
      const_Buffer[count_i] == ' ' /* || const_Buffer[count_i] == '\\' */) {
    flag = 0;
    format_i->count = 0;
  }
  while (flag != 0) {
    format_i->znachenie_s[i] = const_Buffer[count_i];
    i++;
    count_i++;
    if (const_Buffer[count_i] == '\0' || const_Buffer[count_i] == 32) {
      flag = 0;
      format_i->count_pointer_Buffer = count_i;
    }
    if (format_i->shirina != 0 && i >= format_i->shirina) {
      flag = 0;
      format_i->count_pointer_Buffer = count_i;
    }
  }
}

void funkshin_for_i(const char *const_Buffer, struct pars_format *format_i) {
  // int x = 0;
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  int shirina_i = 0;
  int znak = 1;
  int flag_cifra = 0;
  int flag_bykva = 0;
  int flag_8 = 0;
  int flag_16 = 0;
  long int tmp = 0;
  long int res = 0;
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }

  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '0') {
    flag_8 = 1;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == 'x') {
    flag_8 = 0;
    flag_16 = 1;
    count_i++;
    shirina_i++;
  }
  if (format_i->arg_p == 1) {
    flag_16 = 1;
    format_i->count = 1;
  }
  if (format_i->arg_x == 1) {
    format_i->count = 1;
    flag_16 = 1;
    flag_8 = 0;
  }
  if (format_i->arg_X == 1) {
    format_i->count = 1;
    flag_16 = 1;
    flag_8 = 0;
  }
  if (format_i->arg_o == 1) {
    format_i->count = 1;
    flag_16 = 0;
    flag_8 = 1;
  }
  if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
    flag_16 = 1;
    flag_8 = 0;
  }
  if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
    flag_16 = 1;
    flag_8 = 0;
  }
  if (flag_8 == 0 && flag_16 == 0 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 0) {
    funkshin_for_int(const_Buffer, format_i);
    format_i->znachenie_i = format_i->znachenie_int;
  }
  if (flag_8 == 1) {
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
      flag_cifra = 1;
    }
    char arr[12] = {"\0"};
    int i = 0;
    while (flag_cifra == 1) {
      format_i->count = 1;
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;

      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
      if (format_i->shirina != 0) {
        if (shirina_i >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    i = (int)s21_strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j++) {
      tmp = (arr[i] - 48) * pow(8, j);
      res = res + tmp;
      i--;
    }

    res = znak * res;
    format_i->znachenie_i = res;
  }

  if (flag_16 == 1) {
    char arr[128] = {"\0"};
    int i = 0;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    }
    if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
      flag_cifra = 1;
    }
    if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
      flag_cifra = 1;
    }

    while (flag_cifra == 1) {
      format_i->count = 1;
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;
      flag_cifra = 0;
      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
      }
      if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
        flag_cifra = 1;
      }
      if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
        flag_cifra = 1;
      }
      if (flag_cifra != 1) {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
      if (format_i->shirina != 0) {
        if (shirina_i >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    i = (int)s21_strlen(arr) - 1;

    for (int j = 0; arr[j] != '\0'; j++) {
      if (arr[j] >= 'A' && arr[j] <= 'F') {
        flag_bykva = 1;
      } else if (arr[j] >= 'a' && arr[j] <= 'f') {
        flag_bykva = 1;
      } else {
        flag_bykva = 0;
      }

      if (flag_bykva == 0) {
        tmp = (arr[j] - 48) * pow(16, i);
        res = res + tmp;
        i--;
      } else if (flag_bykva == 1) {
        int b = 0;
        if (arr[j] == 'a' || arr[j] == 'A') {
          b = 10;
        }
        if (arr[j] == 'b' || arr[j] == 'B') {
          b = 11;
        }
        if (arr[j] == 'c' || arr[j] == 'C') {
          b = 12;
        }
        if (arr[j] == 'd' || arr[j] == 'D') {
          b = 13;
        }
        if (arr[j] == 'e' || arr[j] == 'E') {
          b = 14;
        }
        if (arr[j] == 'f' || arr[j] == 'F') {
          b = 15;
        }
        tmp = b * pow(16, i);
        res = res + tmp;
        i--;
      }
    }
    format_i->znachenie_i = res;
  }
}

void funkshin_for_i_h(const char *const_Buffer, struct pars_format *format_i) {
  int shirina_i = 0;
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  short int znak = 1;
  int flag_cifra = 0;
  int flag_bykva = 0;
  int flag_8 = 0;
  int flag_16 = 0;
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '0') {
    flag_8 = 1;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == 'x') {
    flag_8 = 0;
    flag_16 = 1;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
    flag_16 = 1;
  }
  if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
    flag_16 = 1;
  }
  if (format_i->arg_p == 1) {
    flag_16 = 1;
  }
  if (format_i->arg_x == 1) {
    flag_16 = 1;
    flag_8 = 0;
  }
  if (format_i->arg_X == 1) {
    flag_16 = 1;
    flag_8 = 0;
  }
  if (format_i->arg_o == 1) {
    flag_16 = 0;
    flag_8 = 1;
  }
  if (flag_8 == 0 && flag_16 == 0 && format_i->dlina_h == 1 &&
      format_i->dlina_l == 0) {
    funkshin_for_int_h(const_Buffer, format_i);
    format_i->znachenie_i_h = format_i->znachenie_int_h;
  }
  if (flag_8 == 1) {
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
      flag_cifra = 1;
      format_i->count = 1;
    }
    char arr[12] = {"\0"};
    int i = 0;
    while (flag_cifra == 1) {
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;

      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
      if (format_i->shirina != 0) {
        if (shirina_i >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    short int tmp = 0;
    short int res = 0;
    i = (int)s21_strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j++) {
      tmp = (arr[i] - 48) * pow(8, j);
      res = res + tmp;
      i--;
    }

    res = znak * res;
    format_i->znachenie_i_h = res;
  }

  if (flag_16 == 1) {
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
      format_i->count = 1;
    }
    char arr[128] = {"\0"};
    int i = 0;
    if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
      flag_cifra = 1;
      format_i->count = 1;
    }
    if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
      flag_cifra = 1;
      format_i->count = 1;
    }

    while (flag_cifra == 1) {
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;

      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
      } else if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
        flag_cifra = 1;
      } else if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
      if (format_i->shirina != 0) {
        if (shirina_i >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    short int tmp = 0;
    short int res = 0;
    i = (int)s21_strlen(arr) - 1;

    for (int j = 0; arr[j] != '\0'; j++) {
      if (arr[j] >= 'A' && arr[j] <= 'F') {
        flag_bykva = 1;
      } else if (arr[j] >= 'a' && arr[j] <= 'f') {
        flag_bykva = 1;
      } else {
        flag_bykva = 0;
      }
      if (flag_bykva == 0) {
        tmp = (arr[i] - 48) * pow(16, j);
        res = res + tmp;
        i--;
      } else {
        int b = 0;
        if (arr[i] == 'a' || arr[i] == 'A') {
          b = 10;
        }
        if (arr[i] == 'b' || arr[i] == 'B') {
          b = 11;
        }
        if (arr[i] == 'c' || arr[i] == 'C') {
          b = 12;
        }
        if (arr[i] == 'd' || arr[i] == 'D') {
          b = 13;
        }
        if (arr[i] == 'e' || arr[i] == 'E') {
          b = 14;
        }
        if (arr[i] == 'f' || arr[i] == 'F') {
          b = 15;
        }
        tmp = b * pow(16, j);
        res = res + tmp;
        i--;
      }
    }
    format_i->znachenie_i_h = res;
  }
}

void funkshin_for_i_l(const char *const_Buffer, struct pars_format *format_i) {
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  int shirina_i = 0;
  long int znak = 1;
  int flag_cifra = 0;
  int flag_bykva = 0;
  int flag_8 = 0;
  int flag_16 = 0;
  if (const_Buffer[count_i] == '-') {
    znak = -znak;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '+') {
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == '0') {
    flag_8 = 1;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] == 'x') {
    flag_8 = 0;
    flag_16 = 1;
    count_i++;
    shirina_i++;
  }
  if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
    flag_16 = 1;
  }
  if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
    flag_16 = 1;
  }
  if (flag_8 == 0 && flag_16 == 0 && format_i->dlina_h == 0 &&
      format_i->dlina_l == 1) {
    funkshin_for_int_l(const_Buffer, format_i);
    format_i->znachenie_i_l = format_i->znachenie_int_l;
  }
  if (flag_8 == 1) {
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
      flag_cifra = 1;
    }
    char arr[12] = {"\0"};
    int i = 0;
    while (flag_cifra == 1) {
      format_i->count = 1;
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;

      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
    }
    long long int tmp = 0;
    long long int res = 0;
    i = (int)s21_strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j++) {
      tmp = (arr[i] - 48) * pow(8, j);
      res = res + tmp;
      i--;
    }

    res = znak * res;
  }

  if (flag_16 == 1) {
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
      flag_cifra = 1;
    }
    char arr[128] = {"\0"};
    int i = 0;
    if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
      flag_cifra = 1;
    }
    if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
      flag_cifra = 1;
    }

    while (flag_cifra == 1) {
      format_i->count = 1;
      arr[i] = const_Buffer[count_i];
      i++;
      count_i++;
      shirina_i++;

      if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
      } else if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') {
        flag_cifra = 1;
      } else if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') {
        flag_cifra = 1;
      } else {
        flag_cifra = 0;
        format_i->count_pointer_Buffer = count_i;
      }
      if (format_i->shirina != 0) {
        if (shirina_i >= format_i->shirina) {
          flag_cifra = 0;
          format_i->count_pointer_Buffer = count_i;
        }
      }
    }
    long long int tmp = 0;
    long long int res = 0;
    i = (int)s21_strlen(arr) - 1;

    for (int j = 0; arr[j] != '\0'; j++) {
      if (arr[j] >= 'A' && arr[j] <= 'F') {
        flag_bykva = 1;
      } else if (arr[j] >= 'a' && arr[j] <= 'f') {
        flag_bykva = 1;
      } else {
        flag_bykva = 0;
      }
      if (flag_bykva == 0) {
        tmp = (arr[i] - 48) * pow(16, j);
        res = res + tmp;
        i--;
      } else {
        int b = 0;
        if (arr[i] == 'a' || arr[i] == 'A') {
          b = 10;
        }
        if (arr[i] == 'b' || arr[i] == 'B') {
          b = 11;
        }
        if (arr[i] == 'c' || arr[i] == 'C') {
          b = 12;
        }
        if (arr[i] == 'd' || arr[i] == 'D') {
          b = 13;
        }
        if (arr[i] == 'e' || arr[i] == 'E') {
          b = 14;
        }
        if (arr[i] == 'f' || arr[i] == 'F') {
          b = 15;
        }
        tmp = b * pow(16, j);
        res = res + tmp;
        i--;
      }
    }
    format_i->znachenie_i_l = res;
  }
}

void funkshin_for_c(const char *const_Buffer, struct pars_format *format_i) {
  int count_i = format_i->count_pointer_Buffer;  //положение указателя
  while (const_Buffer[count_i] == ' ' || const_Buffer[count_i] == '\n' ||
         const_Buffer[count_i] == '\t' || const_Buffer[count_i] == '\r' ||
         const_Buffer[count_i] == '\x0B' || const_Buffer[count_i] == '\f') {
    count_i++;
  }
  format_i->znachenie_c = const_Buffer[count_i];
  format_i->count_pointer_Buffer = (count_i + 1);
}

void funkshin_for_e(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_L == 0) {
    funkshin_for_f(const_Buffer, format_i);
    format_i->znachenie_e = format_i->znachenie_float;
  } else if (format_i->dlina_L == 1) {
    funkshin_for_f_L(const_Buffer, format_i);
    format_i->znachenie_e_L = format_i->znachenie_float_L;
  }
}

void funkshin_for_E(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_L == 0) {
    funkshin_for_f(const_Buffer, format_i);
    format_i->znachenie_E = format_i->znachenie_float;
  } else if (format_i->dlina_L == 1) {
    funkshin_for_f_L(const_Buffer, format_i);
    format_i->znachenie_E_L = format_i->znachenie_float_L;
  }
}

void funkshin_for_u(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_h == 0 && format_i->dlina_l == 0) {  // int
    funkshin_for_int(const_Buffer, format_i);
    format_i->znachenie_u = (unsigned int)format_i->znachenie_int;
  }
  if (format_i->dlina_h == 1 && format_i->dlina_l == 0) {  // short int
    funkshin_for_int_h(const_Buffer, format_i);
    format_i->znachenie_u_h = (unsigned int)format_i->znachenie_int_h;
  }
  if (format_i->dlina_h == 0 && format_i->dlina_l == 1) {  // long int
    funkshin_for_int_l(const_Buffer, format_i);
    format_i->znachenie_u_l = (unsigned int)format_i->znachenie_int_l;
  }
}

void funkshin_for_o(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_h == 0 && format_i->dlina_l == 0) {  // int
    funkshin_for_i(const_Buffer, format_i);
    format_i->znachenie_o = (unsigned int)format_i->znachenie_i;
  }
  if (format_i->dlina_h == 1 && format_i->dlina_l == 0) {  // short int
    funkshin_for_i_h(const_Buffer, format_i);
    format_i->znachenie_o_h = (unsigned int)format_i->znachenie_i_h;
  }
  if (format_i->dlina_h == 0 && format_i->dlina_l == 1) {  // long int
    funkshin_for_i_l(const_Buffer, format_i);
    format_i->znachenie_o_l = (unsigned int)format_i->znachenie_i_l;
  }
}

void funkshin_for_x(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_h == 0 && format_i->dlina_l == 0) {  // int
    funkshin_for_i(const_Buffer, format_i);
    format_i->znachenie_x = (unsigned int)format_i->znachenie_i;
  }
  if (format_i->dlina_h == 1 && format_i->dlina_l == 0) {  // short int
    funkshin_for_i_h(const_Buffer, format_i);
    format_i->znachenie_x_h = (unsigned int)format_i->znachenie_i_h;
  }
  if (format_i->dlina_h == 0 && format_i->dlina_l == 1) {  // long int
    funkshin_for_i_l(const_Buffer, format_i);
    format_i->znachenie_x_l = (unsigned int)format_i->znachenie_i_l;
  }
};

void funkshin_for_X(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_h == 0 && format_i->dlina_l == 0) {  // int
    funkshin_for_i(const_Buffer, format_i);
    format_i->znachenie_X = (unsigned int)format_i->znachenie_i;
  }
  if (format_i->dlina_h == 1 && format_i->dlina_l == 0) {  // short int
    funkshin_for_i_h(const_Buffer, format_i);
    format_i->znachenie_X_h = (unsigned int)format_i->znachenie_i_h;
  }
  if (format_i->dlina_h == 0 && format_i->dlina_l == 1) {  // long int
    funkshin_for_i_l(const_Buffer, format_i);
    format_i->znachenie_X_l = (unsigned int)format_i->znachenie_i_l;
  }
};

void funkshin_for_g(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_L == 0) {
    funkshin_for_f(const_Buffer, format_i);
    format_i->znachenie_g = format_i->znachenie_float;
  } else if (format_i->dlina_L == 1) {
    funkshin_for_f_L(const_Buffer, format_i);
    format_i->znachenie_g_L = format_i->znachenie_float_L;
  }
};
void funkshin_for_G(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_L == 0) {
    funkshin_for_f(const_Buffer, format_i);
    format_i->znachenie_G = format_i->znachenie_float;
  } else if (format_i->dlina_L == 1) {
    funkshin_for_f_L(const_Buffer, format_i);
    format_i->znachenie_G_L = format_i->znachenie_float_L;
  }
};

void get_shirina(struct pars_format *format_i) {
  int f = 0;
  int x = 0;
  while (format_i->znachenie_count_cifra[f] != '\0') {
    x = x * 10 + (format_i->znachenie_count_cifra[f] - 48);
    f++;
  }
  format_i->shirina = x;
};
void funkshin_for_p(const char *const_Buffer, struct pars_format *format_i) {
  if (format_i->dlina_h == 0 && format_i->dlina_l == 0) {  // int
    funkshin_for_i(const_Buffer, format_i);
    format_i->znachenie_p = format_i->znachenie_i;
  }
  if (format_i->dlina_h == 1 && format_i->dlina_l == 0) {  // short int
    funkshin_for_i_h(const_Buffer, format_i);
    format_i->znachenie_p_h = format_i->znachenie_i_h;
  }
  if (format_i->dlina_h == 0 && format_i->dlina_l == 1) {  // long int
    funkshin_for_i_l(const_Buffer, format_i);
    format_i->znachenie_p_l = format_i->znachenie_i_l;
  }
};
void funkshin_for_n(struct pars_format *format_i) {
  if (format_i->count_pointer_Buffer == 0) {
    format_i->znachenie_n = 0;
  } else {
    format_i->znachenie_n = format_i->count_pointer_Buffer + 1;
  }
}
