#include "s21_sscanf.h"

void funkshin_for_int(const char *const_Buffer, const char *const_Format, struct pars_format *format_i) {
    int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    int znak = 1;
    int flag_cifra = 0;
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
         printf("const_Buffer[count_i] == %d \n", (const_Buffer[count_i] - 48));

    }

    while(flag_cifra == 1) {
        x = x * 10 + (const_Buffer[count_i] - 48);
        count_i ++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i + 1;
        }
    }
    x = znak * x;
    format_i->znachenie_int = x;
}

void funkshin_for_int_h(const char *const_Buffer, const char *const_Format, struct pars_format *format_i) {
    short int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    int znak = 1;
    int flag_cifra = 0;
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
    }

    while(flag_cifra == 1) {
        x = x * 10 + (const_Buffer[count_i] - 48);
        count_i ++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i + 1;
        }
    }
    x = znak * x;
    format_i->znachenie_int_h = x;
}

void funkshin_for_int_l(const char *const_Buffer, const char *const_Format, struct pars_format *format_i) {
    long int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    int znak = 1;
    int flag_cifra = 0;
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
    }

    while(flag_cifra == 1) {
        x = x * 10 + (const_Buffer[count_i] - 48);
        count_i ++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i + 1;
        }
    }
    x = znak * x;
    format_i->znachenie_int_l = x;
}




void funkshin_for_f (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){

    double x = 0;
    float y = 0;
    float n = 0.1;
    int flag_e = 0;
    
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    float znak = 1;
    int flag_cifra = 0;
    while (const_Buffer[count_i] == ' '){ // добавить в остальные функции
        count_i ++;
    }

    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
        printf("%c", const_Buffer[count_i]);
    }

    while(flag_cifra == 1) {
        x = x * 10 + (const_Buffer[count_i] - 48);
        count_i ++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            printf("float_x = %f\n", x);
            //format_i->count_pointer_Buffer = count_i;
        }
    }


    if (const_Buffer[count_i] == '.') {
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;

            while(flag_cifra == 1) {
                printf("c == %c \n", const_Buffer[count_i]);
                y = y + (const_Buffer[count_i] - 48) * n;
                n = n * 0.1;
                count_i ++;
                if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
                    flag_cifra = 1;
                } else if (const_Buffer[count_i] == 'e'){
                    flag_cifra = 0;
                    flag_e = 1;
                    count_i ++;
                } else {
                    flag_cifra = 0;
                    count_i ++;
                    format_i->count_pointer_Buffer = count_i;
                    printf("%lf", y);
                }

            }
        }
    }

    x = x + y;
    int e = 0;

    if (flag_e == 1) {
        if (const_Buffer[count_i] == '-') {
            count_i ++;
            e = - (const_Buffer[count_i] - 48);
        }
        if (const_Buffer[count_i] == '+') {
            count_i ++;
            e = const_Buffer[count_i] - 48;
        }
    count_i ++;
    flag_cifra = 0;
    if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
        flag_cifra = 1;
    }

    while(flag_cifra == 1) {
        e = e * 10 + (const_Buffer[count_i] - 48);
        count_i ++;
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i + 1;
        }
    }

    x = x * pow(10, e);
    }

    x = znak * x;
    printf("x = %lf\n", x);
    format_i->znachenie_float = x;
    format_i->count_pointer_Buffer = count_i + 1;
    //printf("format_i->znachenie_float == %lf\n" , format_i->znachenie_float);
    //printf("float_x = %lf\n", x);
    //printf("float_t = %f\n", t);
};

void funkshin_for_s (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    *format_i->znachenie_s = '\0';
    int i = 0;
    int flag = 1;
    if (const_Buffer[count_i] == '\0' || const_Buffer[count_i] == ' ') {
        flag = 0;
    }
    while (flag != 0)
    {   format_i->znachenie_s[i] = const_Buffer[count_i];
        /*printf("%c\n" , const_Buffer[count_i]);
        printf("%d", count_i);*/
        i++;
        count_i ++;
        if (const_Buffer[count_i] == '\0' || const_Buffer[count_i] == 32) {
            flag = 0;
            format_i->count_pointer_Buffer = count_i + 1;
        }
    }
    /*int f = 0;
    while (format_i->znachenie_s[f] != '\0')
    {
        printf("%c" , format_i->znachenie_s[f]);
        f ++;
    }*/
    
}

void funkshin_for_i (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    int znak = 1;
    int flag_cifra = 0;
    int flag_bykva = 0;
    int flag_8 = 0;
    int flag_16 = 0;
    int count_x = 0;
    int itog = 0;
    // printf("const_Buffer_i = %c \n", const_Buffer[count_i]);
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] == '0'){
        flag_8 = 1;
        count_i ++;
        // printf("flag_8 = %d \n", flag_8);
    }
    if (const_Buffer[count_i] == 'x'){
        flag_8 = 0;
        flag_16 = 1;
        count_i ++;
        printf("flag_16 = %d \n", flag_16);
    }

    if (flag_8 == 1){
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
        }
        char arr[12] = {"\0"};
        int i = 0;
        while(flag_cifra == 1) {
        arr[i] = const_Buffer[count_i];
        //printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
    //printf("%s \n", arr);
    int tmp = 0;
    int res = 0;
    i = (int)strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j ++){
        tmp = (arr[i] - 48) * pow(8, j);
        res = res + tmp;
        i--;
    }
    
    res = znak * res;
    //printf("res = %d \n", res);
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

        while(flag_cifra == 1) {
            arr[i] = const_Buffer[count_i];
        printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57 ) {
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') { 
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') { 
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
        //printf("%s \n", arr);
        int tmp = 0;
        int res = 0;
        i = (int)strlen(arr) - 1;

        for (int j = 0; arr[j] != '\0'; j ++){
            if (arr[j] >= 'A' && arr[j] <= 'F') { 
                flag_bykva = 1;
            }
            if (arr[j] >= 'a' && arr[j] <= 'f') { 
                flag_bykva = 1;
            }
            else {
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
            i --;
            }
        }
    printf("res_16 = %d \n", res);
    format_i->znachenie_i = res;
    }
}

void funkshin_for_i_h (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    short int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    short int znak = 1;
    int flag_cifra = 0;
    int flag_bykva = 0;
    int flag_8 = 0;
    int flag_16 = 0;
    int count_x = 0;
    short int itog = 0;
    // printf("const_Buffer_i = %c \n", const_Buffer[count_i]);
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] == '0'){
        flag_8 = 1;
        count_i ++;
        // printf("flag_8 = %d \n", flag_8);
    }
    if (const_Buffer[count_i] == 'x'){
        flag_8 = 0;
        flag_16 = 1;
        count_i ++;
        printf("flag_16 = %d \n", flag_16);
    }

    if (flag_8 == 1){
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
        }
        char arr[12] = {"\0"};
        int i = 0;
        while(flag_cifra == 1) {
        arr[i] = const_Buffer[count_i];
        //printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
    //printf("%s \n", arr);
    short int tmp = 0;
    short int res = 0;
    i = (int)strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j ++){
        tmp = (arr[i] - 48) * pow(8, j);
        res = res + tmp;
        i--;
    }
    
    res = znak * res;
    //printf("res = %d \n", res);
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

        while(flag_cifra == 1) {
            arr[i] = const_Buffer[count_i];
        //printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57 ) {
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') { 
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') { 
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
        //printf("%s \n", arr);
        short int tmp = 0;
        short int res = 0;
        i = (int)strlen(arr) - 1;

        for (int j = 0; arr[j] != '\0'; j ++){
            if (arr[j] >= 'A' && arr[j] <= 'F') { 
                flag_bykva = 1;
            }
            if (arr[j] >= 'a' && arr[j] <= 'f') { 
                flag_bykva = 1;
            }
            else {
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
            i --;
            }
        }
    //printf("res_16 = %d \n", res);
    format_i->znachenie_i_h = res;
    }
}

void funkshin_for_i_l (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    long int x = 0;
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    long int znak = 1;
    int flag_cifra = 0;
    int flag_bykva = 0;
    int flag_8 = 0;
    int flag_16 = 0;
    int count_x = 0;
    long int itog = 0;
    // printf("const_Buffer_i = %c \n", const_Buffer[count_i]);
    if (const_Buffer[count_i] == '-'){
        znak = - znak;
        count_i ++;
    }
    if (const_Buffer[count_i] == '0'){
        flag_8 = 1;
        count_i ++;
        // printf("flag_8 = %d \n", flag_8);
    }
    if (const_Buffer[count_i] == 'x'){
        flag_8 = 0;
        flag_16 = 1;
        count_i ++;
    }

    if (flag_8 == 1){
        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
        flag_cifra = 1;
        }
        char arr[12] = {"\0"};
        int i = 0;
        while(flag_cifra == 1) {
        arr[i] = const_Buffer[count_i];
        //printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 55) {
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
    //printf("%s \n", arr);
    long int tmp = 0;
    long int res = 0;
    i = (int)strlen(arr) - 1;
    for (int j = 0; arr[j] != '\0'; j ++){
        tmp = (arr[i] - 48) * pow(8, j);
        res = res + tmp;
        i--;
    }
    
    res = znak * res;
    //printf("res = %d \n", res);
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

        while(flag_cifra == 1) {
            arr[i] = const_Buffer[count_i];
        //printf("ARR = %c \n", arr[i]);
        i ++;
        count_i ++;

        if (const_Buffer[count_i] >= 48 && const_Buffer[count_i] <= 57 ) {
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'A' && const_Buffer[count_i] <= 'F') { 
            flag_cifra = 1;
        } else if (const_Buffer[count_i] >= 'a' && const_Buffer[count_i] <= 'f') { 
            flag_cifra = 1;
        } else {
            flag_cifra = 0;
            format_i->count_pointer_Buffer = count_i;
        }
        }
        //printf("%s \n", arr);
        long int tmp = 0;
        long int res = 0;
        i = (int)strlen(arr) - 1;

        for (int j = 0; arr[j] != '\0'; j ++){
            if (arr[j] >= 'A' && arr[j] <= 'F') { 
                flag_bykva = 1;
            }
            if (arr[j] >= 'a' && arr[j] <= 'f') { 
                flag_bykva = 1;
            }
            else {
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
            i --;
            }
        }
    //printf("res_16 = %d \n", res);
    format_i->znachenie_i_l = res;
    }
}

void funkshin_for_c (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    int count_i = format_i->count_pointer_Buffer; //положение указателя
    int i = 0;
    int flag = 1;
    format_i->znachenie_c = const_Buffer[count_i];
    format_i->count_pointer_Buffer = (count_i + 2);
    //printf("%c \n", format_i->znachenie_c);

}

void funkshin_for_e (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    funkshin_for_f(const_Buffer, const_Format, format_i);
    format_i->znachenie_e = format_i->znachenie_float;
}

void funkshin_for_E (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    funkshin_for_f(const_Buffer, const_Format, format_i);
    format_i->znachenie_E = format_i->znachenie_float;
}

void funkshin_for_u (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    if (format_i->dlina_h == 0 && format_i->dlina_l == 0){ //int
        funkshin_for_int(const_Buffer, const_Format, format_i);
        format_i->znachenie_u = (unsigned int)format_i->znachenie_int;
    }
    if (format_i->dlina_h == 1 && format_i->dlina_l == 0){ //short int 
        funkshin_for_int_h(const_Buffer, const_Format, format_i);
        format_i->znachenie_u_h = (unsigned int)format_i->znachenie_int_h;
    }
    if (format_i->dlina_h == 0 && format_i->dlina_l == 1){ // long int 
        funkshin_for_int_l(const_Buffer, const_Format, format_i);
        format_i->znachenie_u_l = (unsigned int)format_i->znachenie_int_l;
    }
}

void funkshin_for_o (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    if (format_i->dlina_h == 0 && format_i->dlina_l == 0){ //int
        funkshin_for_i(const_Buffer, const_Format, format_i);
        format_i->znachenie_o = (unsigned int)format_i->znachenie_i;
    }
    if (format_i->dlina_h == 1 && format_i->dlina_l == 0){ //short int 
        funkshin_for_i_h(const_Buffer, const_Format, format_i);
        format_i->znachenie_o_h = (unsigned int)format_i->znachenie_i_h;
    }
    if (format_i->dlina_h == 0 && format_i->dlina_l == 1){ // long int 
        funkshin_for_i_l(const_Buffer, const_Format, format_i);
        format_i->znachenie_o_l = (unsigned int)format_i->znachenie_i_l;
    }
}

void funkshin_for_x (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    if (format_i->dlina_h == 0 && format_i->dlina_l == 0){ //int
        funkshin_for_i(const_Buffer, const_Format, format_i);
        format_i->znachenie_x = (unsigned int)format_i->znachenie_i;
    }
    if (format_i->dlina_h == 1 && format_i->dlina_l == 0){ //short int 
        funkshin_for_i_h(const_Buffer, const_Format, format_i);
        format_i->znachenie_x_h = (unsigned int)format_i->znachenie_i_h;
    }
    if (format_i->dlina_h == 0 && format_i->dlina_l == 1){ // long int 
        funkshin_for_i_l(const_Buffer, const_Format, format_i);
        format_i->znachenie_x_l = (unsigned int)format_i->znachenie_i_l;
    }
};


void funkshin_for_X (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    if (format_i->dlina_h == 0 && format_i->dlina_l == 0){ //int
    printf("format_i->znachenie_ix = %X\n",format_i->znachenie_X);
        funkshin_for_i(const_Buffer, const_Format, format_i);
        printf("funkshin_for_X\n");
        format_i->znachenie_X = (unsigned int)format_i->znachenie_i;
        printf("format_i->znachenie_ix = %i\n",format_i->znachenie_i);
        printf("format_i->znachenie_ix = %d\n",format_i->znachenie_X);
    }
    if (format_i->dlina_h == 1 && format_i->dlina_l == 0){ //short int 
        funkshin_for_i_h(const_Buffer, const_Format, format_i);
        format_i->znachenie_X_h = (unsigned int)format_i->znachenie_i_h;
    }
    if (format_i->dlina_h == 0 && format_i->dlina_l == 1){ // long int 
        funkshin_for_i_l(const_Buffer, const_Format, format_i);
        format_i->znachenie_X_l = (unsigned int)format_i->znachenie_i_h;
    }
};


void funkshin_for_g (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    funkshin_for_f(const_Buffer, const_Format, format_i);
    format_i->znachenie_g = format_i->znachenie_float;
};
void funkshin_for_G (const char *const_Buffer, const char *const_Format, struct pars_format *format_i){
    funkshin_for_f(const_Buffer, const_Format, format_i);
    format_i->znachenie_G = format_i->znachenie_float;
};

// void funkshin_for_p(const char *str, int *i, va_list A) {
//   int result = 0, count = *i, sign = 0, base = 0, flag =0;

//   if (str[count] == '-') {
//     flag++;
//     count++;
//   }
//   if (str[count] == '+')
//     count++;
//   if (str[count] == '0' && str[count + 1] == 'x') {
//     count++;
//     count++;
//   }
//   while (str[count] != ' ' && str[count] != '\0') {
//     if (str[count + 1] >= '0' || str[count + 1] <= '9') {
//       count++;
//       sign++;
//     } else {
//       if (str[count + 1] >= 'A' && str[count + 1] <= 'F') {
//         count++;
//         sign++;
//       } else {
//         if (str[count + 1] >= 'a' && str[count + 1] <= 'f') {
//           count++;
//           sign++;
//         } else {
//           break;
//         }
//       }
//     }
//   }
//   count = count - sign;
//   sign--;
//   while (str[count] != ' ' && str[count] != '\0') {
//     if (str[count] >= '0' && str[count] <= '9') {
//       base = str[count] - '0';
//       base = base * (pow(16, sign));
//       count++;
//       sign--;
//       result = result + base;
//     }
//     if (str[count] >= 'A' && str[count] <= 'F') {
//       base = str[count] - 65;
//       base = base + 10;
//       base = base * (pow(16, sign));
//       count++;
//       sign--;
//       result = result + base;
//     }
//     if (str[count] >= 'a' && str[count] <= 'f') {
//       base = str[count] - 97;
//       base = base + 10;
//       base = base * (pow(16, sign));
//       count++;
//       sign--;
//       result = result + base;
//     }
//   }
//   if (flag != 0) result = -result; 
//   void **argc= va_arg(A, void *);
//   *argc = (void *)(0x0 + result);
//   *i = count;
  
// }
