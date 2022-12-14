#include "s21_string.h"
#include <math.h>
int main() {

 
  char arr[] = " Amur" ;
  float a ;
  s21_sscanf(arr,"%p", &a);
  printf("%p\n", a);
  sscanf(arr, "%p", &a);
  printf("%p\n", a);
  return 0;
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
      if (format[count] == 'p') {
        
        p_option(str, &i, A);
        count++;
      }
      if (format[count] == 'n') {
        int *argc = va_arg(A, int *);
        *argc = i;
        count++;
      }

      if (format[count] == ' ')
        count++;
    }
  }
  va_end(A);
  return 0;
}

void p_option(const char *str, int *i, va_list A) {
  s21_size_t result = 0, count = *i, sign = 0, base = 0,flag =0;

  if (str[count] == '-') {
    flag++;
    count++;
  }
  if (str[count] == '+')
    count++;
  if (str[count] == '0' && str[count + 1] == 'x') {
    count++;
    count++;
  }
  while (str[count] != ' ' && str[count] != '\0') {
    if (str[count + 1] >= '0' || str[count + 1] <= '9') {
      count++;
      sign++;
    } else {
      if (str[count + 1] >= 'A' && str[count + 1] <= 'F') {
        count++;
        sign++;
      } else {
        if (str[count + 1] >= 'a' && str[count + 1] <= 'f') {
          count++;
          sign++;
        } else {
          break;
        }
      }
    }
  }
  count = count - sign;
  sign--;
  while (str[count] != ' ' && str[count] != '\0') {
    if (str[count] >= '0' && str[count] <= '9') {
      base = str[count] - '0';
      base = base * (pow(16, sign));
      count++;
      sign--;
      result = result + base;
    }
    if (str[count] >= 'A' && str[count] <= 'F') {
      base = str[count] - 65;
      base = base + 10;
      base = base * (pow(16, sign));
      count++;
      sign--;
      result = result + base;
    }
    if (str[count] >= 'a' && str[count] <= 'f') {
      base = str[count] - 97;
      base = base + 10;
      base = base * (pow(16, sign));
      count++;
      sign--;
      result = result + base;
    }
  }
  if (flag != 0) result = -result; 
  void **argc= va_arg(A, void *);
  *argc = (void *)(0x0 + result);
  *i = count;
  
}