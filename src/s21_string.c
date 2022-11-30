#include "s21_string.h"
#include "string.h"
int main() { 
     // Исходный массив
   unsigned char src[15]="123a56789";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = s21_memchr (src, 'a', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);
  

   return 0;
 }

void *s21_memchr(const void *str, int c, size_t n) {

    for(int i = 0; i < n; i++){
        if(*((char *)str + i)== c){
            return (char *) str + i;
        }
    }
    return NULL;

}