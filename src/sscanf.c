#include "s21_string.h"

int main() {
  char arr[10] = "qwerty";
  s21_sccanf("Hello", "%d");
}
int s21_sscanf(const char *str, const char *format, ...) {

  int count = 0;
  int error = 0;
  int i = 0;
  va_list A;
  va_start(A, format);
  while (format[count] != '\0') {
    if (error != 0) {
      break;
    }
    if (format[count] == '%') {
      count++;
      if (format[count] == 'c') {
      }
      if (format[count] == 'd' || format[count] == 'u') {
      }
      if (format[count] == 'i' || format[count] == 'o') {
        int *argc = va_arg(A, int *);
        i_chislo(str, &i, argc, &error);
        count++;
      }
      if (format[count] == 's') {
      }
      if (format[count] == 'n') {
      }
      if (format[count] == 'p') {
      }
      if (format[count] == 'f' || format[count] == 'e' ||
          format[count] == 'E' || format[count] == 'g' ||
          format[count] == 'G') {
      }
      if (format[count] == ' ')
        count++;
    }
  }
}

void i_option(const char *str, int *i, int *argc, int *error) {
  size_t step = 0, step_i = 0, step_ii = *i, error = *error;
  if (str[step_ii] == '-') {
    step++;
    step_ii++;
  }
  if (str[step_ii] == '+') {
    step_ii++;
  }
  if (str[step_ii] == '0' && str[step_ii + 1] == 'x') {
    step_ii++;
    step_i++;
    while (str[step_ii] == '\0' && str[step_ii] == ' ') {
      if (str[step_ii + 1] >= '0' || str[step_ii + 1] <= '9') {
        step_ii++;
        step_i++;
      } else {
        if (str[step_ii + 1] >= 'A' && str[step_ii + 1] <= 'F') {
          step_ii++;
          step_i++;
        } else {
          if (str[step_ii + 1] >= 'a' && str[step_ii + 1] <= 'f') {
            step_ii++;
            step_i++;
          } else {
            break;
          }
        }
      }
    }
    step_ii = step_ii - step_i;
    step_i--;
  }
}