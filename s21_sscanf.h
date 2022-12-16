#ifndef SSCANF_S21_SSCANF_H_
#define SSCANF_S21_SSCANF_H_
/*
общие заметки
1 доделать дошагивание если в буфере между аргументами много пробелов 
2 проработать вопрос с ошибками

*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

struct  pars_format {
    int flag_star; // flag star
    int shirina;
    int dlina_h;
    int dlina_l;
    int dlina_L;
    int arg_int; // argyment is int o - not, 1 - yes
    int arg_c;
    int arg_i;
    int arg_e;
    int arg_E;
    int arg_f;
    int arg_g;
    int arg_G; // zakonchil zdes
    int arg_o;
    int arg_s;
    int arg_u;
    int arg_x;
    int arg_X;
    int arg_p;
    int arg_n;
    int count_pointer_Format;
    int count_pointer_Buffer;
    int znachenie_int;
    short int znachenie_int_h;
    long int znachenie_int_l;
    double znachenie_float;
    double znachenie_e;
    double znachenie_E;
    double znachenie_g;
    double znachenie_G;
    unsigned int znachenie_u;
    unsigned short int znachenie_u_h;
    unsigned long int znachenie_u_l;
    unsigned int znachenie_o;
    unsigned short int znachenie_o_h;
    unsigned long int znachenie_o_l;
    unsigned int znachenie_x;
    unsigned short int znachenie_x_h;
    unsigned long int znachenie_x_l;
    unsigned int znachenie_X;
    unsigned short int znachenie_X_h;
    unsigned long int znachenie_X_l;
    char znachenie_s[1024];
    char znachenie_c;
    int znachenie_i;
    short int znachenie_i_h;
    long int znachenie_i_l;
};

int s21_sscanf(const char *str, const char *format, ...);
//int int_get_funkshin(const char *const_Buffer);
void parser_const_Format(const char *const_Format, struct pars_format *format_i, int pointer);
void parser_tip_arg_get_funkshin(const char *const_Buffer, const char *const_Format, struct pars_format *format_i);

void funkshin_for_int(const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_int_h(const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_int_l(const char *const_Buffer, const char *const_Format, struct pars_format *format_i);

void funkshin_for_s (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_f (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_c (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);


void funkshin_for_i (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_i_h (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_i_l (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);


void funkshin_for_e (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_E (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_u (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_o (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);

void funkshin_for_x (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_X (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_g (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);
void funkshin_for_G (const char *const_Buffer, const char *const_Format, struct pars_format *format_i);

#endif  //  SSCANF_S21_SSCANF_H_
