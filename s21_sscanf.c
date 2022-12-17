#include "s21_sscanf.h"
#include "parser.c"
#include "tip_get_funkshin.c"
int main(void) {
  short int day = 0;
  int test = 0;
  int yars = 1;
  char month[15] = "\0";
  float flot = -999;
  char c;
  int i;
  const char const_Buffer[] ={"5777777777777777.88888"};
  const char const_Format[] = {"%hd %u %X %f %c %i"};
  s21_sscanf(const_Buffer, "%f",  &flot);

  //sscanf(const_Buffer, const_Format, &day, month, &yars, &flot , &test);
  //printf("%d \n", day);
  //printf("%s \n", month);
  //printf("%d a", yars);
  //printf("%d ", day);
  // printf("day = %hd \n", day);
  // //printf(" month = %s \n", month);
  // printf("yars = %u \n", yars);
  // printf("test = %d \n", test);
  printf("flot = %f \n", flot);
 

  // printf("char c = %c \n", c);
  // printf("i = %i \n", i);
  sscanf(const_Buffer, "%f", &flot);
  // printf("day orig = %hd \n", day);
  // printf("yars orig = %u \n", yars);
  // printf("test orig = %d \n", test);
  printf("flot_orig = %f\n", flot);
  // printf("char c orig = %c \n", c);
  // printf("i orig= %i \n", i);
  
  return 0;
}

void orig(){
  
}
int s21_sscanf(const char const_Buffer[], const char const_Format[], ...) {
  struct pars_format format_i = {0};
  va_list ap;
  va_list for_copy;
  const char *p;
  char *b;
  char *sval;
  int ival;
  int i = 0;
  int d;
  int n = strlen(const_Format);
  int count_for = 0;
  va_start(ap, const_Format);

  for (int i = 0; i < n; i++) { // start
    struct pars_format format_i = {0};
    format_i.count_pointer_Buffer = count_for;
    format_i.count_pointer_Format = i;
    parser_const_Format(const_Format, &format_i,
                        i); // ищем форматы и флаги и все остальное
    parser_tip_arg_get_funkshin(
        const_Buffer, const_Format,
        &format_i); // ищем нужные фунции в зависимости от типа переменной
                    // и запускаем её (возможно с учетом флагом)

    if (format_i.arg_int == 1 && format_i.dlina_h == 0 &&
        format_i.dlina_l == 0) {
      int d = format_i.znachenie_int;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_int == 1 && format_i.dlina_h == 1 &&
        format_i.dlina_l == 0) {
      short int d = format_i.znachenie_int_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
      // printf("srabotal_short \n");
      // printf("format_i.znachenie_int_h = %hd \n", format_i.znachenie_int_h);
    }

    if (format_i.arg_int == 1 && format_i.dlina_h == 0 &&
        format_i.dlina_l == 1) {
      long int d = format_i.znachenie_int_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
      // printf("srabotal_long \n");
      // printf("format_i.znachenie_int_l = %ld \n", format_i.znachenie_int_l);
    }
    if (format_i.arg_u == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0) {
      // printf("format_i.znachenie_u = %u \n", format_i.znachenie_u);
      unsigned int d = format_i.znachenie_u;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_u == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0) {
      // printf("format_i.znachenie_u = %u \n", format_i.znachenie_u);
      unsigned short int d = format_i.znachenie_u_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
    }

    if (format_i.arg_u == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1) {
      // printf("format_i.znachenie_u = %u \n", format_i.znachenie_u);
      unsigned long int d = format_i.znachenie_u_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
    }

    /*if (format_i.arg_s == 1){
        int f = 0;
        while (format_i.znachenie_s[f] != '\0')
        {
        printf("%c" , format_i.znachenie_s[f]);
        f ++;
        }
        char *d = va_arg(ap, char *);

    }*/

    if (format_i.arg_f == 1) {
      float *a_adress = (float *)va_arg(ap, float *);
      *a_adress = (double)*a_adress;
      *a_adress = format_i.znachenie_float;
      printf("a == %lf\n",
             format_i.znachenie_float); // после запятой не точно, доделать
                                        // преобразование в флот
      printf("a == %lf\n", *a_adress);
    }

    if (format_i.arg_c == 1) {
      char *argc = va_arg(ap, char *);
      argc[0] = format_i.znachenie_c;
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0) {
      int d = format_i.znachenie_i;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0) {
      short int d = format_i.znachenie_i_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
    }

    if (format_i.arg_i == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1) {
      long int d = format_i.znachenie_i_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0) {
      int d = format_i.znachenie_o;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0) {
      short int d = format_i.znachenie_o_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
    }

    if (format_i.arg_o == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1) {
      long int d = format_i.znachenie_o_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0) {
      int d = format_i.znachenie_x;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0) {
      short int d = format_i.znachenie_x_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
    }

    if (format_i.arg_x == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1) {
      long int d = format_i.znachenie_x_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 0) {
      int d = format_i.znachenie_X;
      int *d_adress = (int *)va_arg(ap, int *);
      *d_adress = d;
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 1 && format_i.dlina_l == 0) {
      short int d = format_i.znachenie_X_h;
      short int *d_adress = (short int *)va_arg(ap, short int *);
      *d_adress = d;
    }

    if (format_i.arg_X == 1 && format_i.dlina_h == 0 && format_i.dlina_l == 1) {
      long int d = format_i.znachenie_X_l;
      long int *d_adress = (long int *)va_arg(ap, long int *);
      *d_adress = d;
    }

    count_for = format_i.count_pointer_Buffer; //
    i = format_i.count_pointer_Format;         // lovim procent pri sled shage
  }

  va_end(ap);
  return 0;
}
