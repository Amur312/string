// created by pizpotli
#include "../../s21_string.h"

void spec_u(char *str, spec *flag) {
  int len_count = 0;
  char c;
  unsigned long tmp = 0;
  if ((flag->buf = (char *)malloc(100 * sizeof(char))) != s21_NULL) {
    if (flag->dd != 0) {
      for (; flag->dd != 0; len_count++) {
        tmp = flag->dd % 10;
        c = tmp + '0';
        flag->buf[len_count] = c;
        flag->dd /= 10;
      }
      flag->buf[len_count] = '\0';
      len_count--;
    } else {
      if (flag->count_tochn == -1) {
        flag->buf[len_count] = '0';
        flag->buf[len_count + 1] = '\0';
      } else {
        flag->buf[len_count] = '\0';
      }
    }
    spec_d_1(flag, str);
    spec_d_2(flag, str, &len_count);
    free(flag->buf);
  } else {
    exit(0);
  }
}