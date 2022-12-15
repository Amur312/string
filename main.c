#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
  
    char st[] = "10.2e2";
  int i = 0, p = 0 , er = 0;
  size_t q = 1, qi = 0, g = 0, ii = 0, ei, error = 0, ee = 0;
  float fl, ql;
  if (st[ii] == '-' && st[ii + 1] >= '0' && st[ii + 1] <= '9') {
    qi++;
    ii++;
  }
  if (st[ii] == '+' && st[ii + 1] >= '0' && st[ii + 1] <= '9') ii++;
  if (st[ii] >= '0' && st[ii] <= '9') {
    fl = st[ii] - '0';
    printf("1 %f\n", fl);
    while (st[ii + 1] >= '0' && st[ii + 1] <= '9') {
      fl = fl * 10;
      printf("2 %f\n", fl);
      ql = st[ii + 1] - '0';
      printf("3 %f\n", ql);
      fl = fl + ql;
      printf("4 %f\n", fl);
      ii++;
      printf("5 %ld\n", ii);
    }
    if (st[ii + 1] == '.') {
      ii++;
      ii++;
      while (st[ii] >= '0' && st[ii] <= '9') {
        ql = st[ii] - '0';
        printf("6 %f\n", ql);
         printf("q %ld\n", q);
        ql = ql / (pow(10, q));
        printf("7 %f\n", ql);
        fl = fl + ql;
        printf("8 %f\n", fl);
        q++;
        ii++;
        g++;
      }
    //   if (fo[ee] == 'e' || fo[ee] == 'E') {
    //     if ((st[ii] == 'e' || st[ii] == 'E') && st[ii + 1] == '+') {
    //       ii++;
    //       ii++;
    //       if (st[ii] == '0') ii++;
    //       if (st[ii] >= '1' && st[ii] <= '9') {
    //         ei = st[ii] - '0';
    //         ii++;
    //       }
    //       if (st[ii] >= '1' && st[ii] <= '9') {
    //         ei = ei * 10;
    //         ei = ei + (st[ii] - '0');
    //       }
    //       for (size_t z = 0; z != ei; z++) {
    //         fl = fl * 10;
    //       }
    //     }
    //     if ((st[ii] == 'e' || st[ii] == 'E') && st[ii + 1] == '-') {
    //       ii++;
    //       ii++;
    //       if (st[ii] == '0') ii++;
    //       if (st[ii] >= '1' && st[ii] <= '9') {
    //         ei = st[ii] - '0';
    //         ii++;
    //       }
    //       if (st[ii] >= '1' && st[ii] <= '9') {
    //         ei = ei / 10;
    //         ei = ei + (st[ii] - '0');
    //       }
    //       for (size_t z = 0; z != ei; z++) {
    //         fl = fl / 10;
    //       }
    //     }
    //   }
      if (qi != 0) fl = -fl;
    }
    p = fl;
  } else {
    error++;
    er = error;
  }
  ii++;
  i = ii;

}