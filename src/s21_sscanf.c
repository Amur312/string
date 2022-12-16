#include "s21_string.h"
#include <math.h>
int main() {
char arr[] = "1.7e3";
 float a;
 s21_sscanf(arr,"%g", &a);
 printf("%f\n", a); 
 sscanf(arr,"%g", &a);
 printf("%f\n", a);
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
      if(format[count] == 'g' || format[count] == 'G'){
        float *argc = va_arg(A, float*);
        g_option(str,&i,A);
        count++:
      }

      if (format[count] == ' ')
        count++;
    }
  }
  va_end(A);
  return 0;
}

void p_option(const char *str, int *i, va_list A) {
  int result = 0, count = *i, sign = 0, base = 0, flag =0;

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


void g_option(const char str, int *i, va_list A, int *error){
    s21_size_t count = 0, sign = 0, float_f = 0, num , num_e,count_f = 1;

    while (src[count] == ' ' || src[count] == '\n' || src[count] == '\t' ||
          src[count] == '%') {
    count += 1;
  }
  if (src[count] == '-' && src[count + 1] >= '0' && src[count + 1] <= '9')
    {
      sign = 1;
      count++;
    }
  else if(src[count] == '+' && src[count + 1] >= '0' && src[count + 1] <= '9'){
    sign = 0;
    if(src[count] == '+'){
      count++;
    }
  } else{
    *error = 1;
  }
  if(src[count + 1] >= '0' && src[count + 1] <= '9'){
    float_f = src[count] - '0';
    while (src[count + 1] >= '0' && src[count + 1] <= '9') {
      float_f = float_f * 10;
      num = src[count + 1] - '0';
      float_f = float_f + num;
      count++;
    }
    if (src[count] == '.') {
      count+= 2;
      while (src[count] >= '0' && src[count] <= '9') {
        num = src[count] - '0';
        num = num / (pow(10, count_f));
        float_f = float_f + num;
        count++;
        count_f++;
        
      }
      if (src[count] == 'e' || src[count] == 'E')
      {
        
        count++;
        if (src[count] == '-'){
          count++;
          if (str[count] == '0') count++;
          if(str[count] >= '1' && str[count] <= '9'){
              num_e = str[count] - '0';
              count++;
          }
          if(str[count] >= '1' && ctr[count] <= '9'){
              num_e = num_e / 10;
              num_e = (str[count] - '0') + num_e;
          }
          for (int i = 0; i != num_e; i++) {
            float_f *= 10;
          }
        }
        else if (src[count] == '+')
        {
          count++;
          if (src[count] == '+'){
          count++;
          if (str[count] == '0') count++;
          if(str[count] >= '1' && ctr[count] <= '9'){
              num_e = str[count] - '0';
              count++;
          }
          if(str[count] >= '1' && ctr[count] <= '9'){
              num_e = num_e * 10;
              num_e = (str[count] - '0') + num_e;
          }
          for (int i = 0; i != num_e; i++) {
            float_f /= 10;
          }
        }
        
        }
      }
      if (sign != 0) float_f = -float_f;
    }   
  }else {
    error++;
  }
  count++
  *i = count;

}