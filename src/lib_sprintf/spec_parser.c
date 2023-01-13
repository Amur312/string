// created by pizpotli
#include "../s21_string.h"

void spec_parser(int *i, const char *format, spec *flag, va_list *arg) {
  int x, error = 0, count = 0;
  *i += 1;
  for (; error != 1; *i += 1) {
    x = format[*i];
    switch (x) {
      case '%':
        error = 1;
        break;
      case ' ':
        flag->space = 1;
        break;
      case '-':
        flag->left = 1;
        break;
      case '+':
        flag->znak1 = 1;
        break;
      case '#':
        flag->resh = 1;
        break;
      case '0':
        flag->tmp[count] = '0';
        count++;
        flag->shirina = 1;
        break;
      case '1':
        flag->tmp[count] = '1';
        count++;
        flag->shirina = 1;
        break;
      case '2':
        flag->tmp[count] = '2';
        count++;
        flag->shirina = 1;
        break;
      case '3':
        flag->tmp[count] = '3';
        count++;
        flag->shirina = 1;
        break;
      case '4':
        flag->tmp[count] = '4';
        count++;
        flag->shirina = 1;
        break;
      case '5':
        flag->tmp[count] = '5';
        count++;
        flag->shirina = 1;
        break;
      case '6':
        flag->tmp[count] = '6';
        count++;
        flag->shirina = 1;
        break;
      case '7':
        flag->tmp[count] = '7';
        count++;
        flag->shirina = 1;
        break;
      case '8':
        flag->tmp[count] = '8';
        count++;
        flag->shirina = 1;
        break;
      case '9':
        flag->tmp[count] = '9';
        count++;
        flag->shirina = 1;
        break;
      case '*':
        flag->shirina = 2;
        flag_shirina_count(flag, arg);
        break;
      case 'l':
        flag->l = 1;
        break;
      case 'h':
        flag->h = 1;
        break;
      case 'L':
        flag->L = 1;
        break;
      case 'd':
        spec_write(x, flag);
        error = 1;
        break;
      case 'i':
        spec_write(x, flag);
        error = 1;
        break;
      case 'f':
        spec_write(x, flag);
        error = 1;
        break;
      case 'u':
        spec_write(x, flag);
        error = 1;
        break;
      case 'e':
        spec_write(x, flag);
        error = 1;
        break;
      case 'c':
        spec_write(x, flag);
        flag->count_tochn_d = 0;
        error = 1;
        break;
      case 'E':
        spec_write(x, flag);
        error = 1;
        break;
      case 'x':
        spec_write(x, flag);
        error = 1;
        break;
      case 'X':
        spec_write(x, flag);
        error = 1;
        break;
      case 's':
        spec_write(x, flag);
        flag->count_tochn_d = 0;
        error = 1;
        break;
      case 'n':
        spec_write(x, flag);
        error = 1;
        break;
      case 'g':
        spec_write(x, flag);
        error = 1;
        break;
      case 'G':
        spec_write(x, flag);
        error = 1;
        break;
      case 'p':
        spec_write(x, flag);
        error = 1;
        break;
      case 'o':
        spec_write(x, flag);
        error = 1;
        break;
      case '.':
        flag_toch(flag, i, format, arg);
        break;
    }
  }
  *i -= 1;
  if (flag->shirina == 1) {
    flag->tmp[count] = '\0';
    spec_shirina(flag);
  }
}

void spec_shirina(spec *flag) {
  int i = 0;
  flag->count_tochn_f = flag->count_tochn_d;
  flag->strlen = s21_strlen(flag->tmp);
  for (; flag->tmp[i] == '0'; i++) {
    flag->zero = 1;
    flag->count_tochn_d = 0;
  }
  for (; flag->tmp[i] != '\0'; i++) {
    flag->shirina1 = (flag->shirina1 * 10) + (flag->tmp[i] - '0');
  }
}

void flag_toch(spec *flag, int *i, const char *format, va_list *arg) {
  *i += 1;
  flag->error = 0;
  int x, count = 0;
  flag->count_tochn = 0;
  if ((x = format[*i]) == '*') {
    flag->count_tochn_d = va_arg(*arg, int);
  } else {
    for (; flag->error != 1; *i += 1) {
      x = format[*i] - 48;
      if (x >= 0 && x <= 9) {
        flag->tochnost[count] = x;
        count += 1;
      } else {
        flag->error = 1;
      }
    }
    flag->tochnost[count] = '\0';
    *i -= 2;
    flag->count_tochn_d = flag->tochnost[0];
    for (int i = 1; i < count; i++) {
      x = flag->tochnost[i];
      flag->count_tochn_d = flag->count_tochn_d * 10 + x;
    }
  }
  flag->count_tochn_s = flag->count_tochn_f_1 = flag->count_tochn_d;
}

void spec_write(int x, spec *flag) {
  flag->spec[1] = x;
  flag->spec[2] = '\0';
}

void flag_shirina_count(spec *flag, va_list *arg) {
  flag->shirina1 = va_arg(*arg, int);
}
