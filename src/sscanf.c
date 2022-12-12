#include "s21_string.h"
#include <math.h>
int main() {
  char str[20] = "1.2,2,3,4,5,6,7,8,9"; // str1[20];  // str2[20];
  float a = 1.3;
  s21_sscanf(str, "%i", &a);
  printf("%f\n", a);
  sscanf(str, "%i", &a);
  printf("%f\n", a);
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
     
      if (format[count] == 'i' || format[count] == 'o') {
        int *argc = va_arg(A, int *);
        i_option(str, &i, argc, &error);
        count++;
      }
     
      if (format[count] == 'E' || format[count] == 'e') {
      }
      if (format[count] == ' ')
        count++;
    }
  }
}

void i_option(const char *str, int *i, int *argc, int *error) {
  size_t step = 0, step_i = 0, step_ii = *i;
  int res = 0;
  int base = 0;
  if (str[step_ii] == '-') {
    step++;
    step_ii++;
  }
  if (str[step_ii] == '+')
    step_ii++;

  if (str[step_ii] == '0' && str[step_ii + 1] == 'x') {
    step_ii++;
    step_i++;
    while (str[step_ii] == '\0' && str[step_ii] == ' '){
      if (str[step_ii + 1] >= '0' || str[step_ii + 1] <= '9'){
        step_ii++;
        step_i++;
       } else {
        if (str[step_ii + 1] >= 'A' && str[step_ii + 1] <= 'F'){
          step_ii++;
          step_i++;
        }else{
          if (str[step_ii + 1] >= 'a' && str[step_ii + 1] <= 'f'){
            step_ii++;
            step_i++;
           }else{
            break;
           }
        }
       }
    }
    step_ii = step_ii - step_i;
    step_i--;
   
    while (str[step_ii] == '\0' && str[step_ii] == ' '){
      if (str[step_ii] >= '0' && str[step_ii] <= '9'){
        base = str[step_ii] - '0';
        base = base * pow(16, step_i);
        res = res + base;
        step_ii++;
        step_i--;
      }
      if (str[step_ii] >= 'A' && str[step_ii] <= 'F'){
        base = str[step_ii] - 65; // 65 == 
        base = base + 10;
        base = base * pow(16, step_i);
        res = res + base;
        step_ii++;
        step_i--;
      } 
      if (str[step_ii] >= 'a' && str[step_ii] <= 'f'){
        base = str[step_ii] - 97; // 97 == a
        base = base + 10;
        base = base * pow(16, step_i);
        res = res + base;
        step_ii++;
        step_i--;
      }
    }  
      if (step != 0) res = -res;
      *argc = res;
    } else {
          if (str[step_ii + 1] >= '0' && str[step_ii + 1] <= '7'){
            step_ii++;
            while (str[step_ii] != '\0' && str[step_ii] != ' '){
              if (str[step_ii + 1] <= '0' || str[step_ii + 1] >= '7') 
                break;
              step_ii++;
              step_i++;
            }
            step_ii = step_ii - step_i;
            step_i--;
            while(str[step_ii] != '\0' && str[step_ii] != ' '){
              if (str[step_ii] >= '0' && str[step_ii] <= '9'){
                base = str[step_ii] - '0';
                base = base * (pow(8, step_i));
                step_ii++;
                step_i--;
                res = res + base;
              }
            }
            if (step != 0) res = -res;
            *argc = res; 
          }else{
            error++;
          }
          step_ii++;
         }
      *i = step_ii;

}     


void e_option(){

}