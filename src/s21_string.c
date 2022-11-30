#include "s21_string.h"
#include "string.h"
int main() { 
  // Исходный массив
   unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = s21_memchr (src, '1', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='@';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

   return 0;
 }

void *s21_memchr(const void *str, int c, s21_size_t n) {
    unsigned char * str2 = (unsigned char*) str;
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(*((char *)str + i)== c){
            str2 = (char *) str + i;
            flag = 1;
            break;
        }
    }
      return flag ? (void*)str2 : s21_NULL;

}