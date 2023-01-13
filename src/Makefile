CC = gcc -Wall -Werror -Wextra -std=c11 -D_GNU_SOURSE
OS = $(shell uname -s)
L = lib_sprintf/
LO = lib_sprintf/obj/
LT = lib_string/
LS = lib_sscanf/
S = spec_
SU = suite_test_
ifeq ($(OS), Linux)
UBU = -lm -lpthread -lrt -lsubunit
else
UBU = 
endif

all: clean s21_string.a test gcov_report

s21_string.a:
	mkdir lib_sprintf/obj
	$(CC) -c $(LS)parser.c -o $(LO)parser.o
	$(CC) -c $(LS)s21_sscanf.c -o $(LO)s21_sscanf.o
	$(CC) -c $(LS)tip_get_funkshin.c -o $(LO)tip_get_funkshin.o
	$(CC) -c $(LT)memchr/s21_memchr.c -o $(LO)s21_memchr.o
	$(CC) -c $(LT)memcmp/s21_memcmp.c -o $(LO)s21_memcmp.o
	$(CC) -c $(LT)memcpy/s21_memcpy.c -o $(LO)s21_memcpy.o
	$(CC) -c $(LT)memmove/s21_memmove.c -o $(LO)s21_memmove.o
	$(CC) -c $(LT)memset/s21_memset.c -o $(LO)s21_memset.o
	$(CC) -c $(LT)strcspn/s21_strcspn.c -o $(LO)s21_strcspn.o
	$(CC) -c $(LT)strchr/s21_strchr.c -o $(LO)s21_strchr.o
	$(CC) -c $(LT)strtok/s21_strtok.c -o $(LO)s21_strtok.o
	$(CC) -c $(LT)strlen/s21_strlen.c -o $(LO)s21_strlen.o
	$(CC) -c $(LT)strrchr/s21_strrchr.c -o $(LO)s21_strrchr.o
	$(CC) -c $(LT)strcat/s21_strcat.c -o $(LO)s21_strcat.o
	$(CC) -c $(LT)strncat/s21_strncat.c -o $(LO)s21_strncat.o
	$(CC) -c $(LT)strcmp/s21_strcmp.c -o $(LO)s21_strcmp.o
	$(CC) -c $(LT)strncmp/s21_strncmp.c -o $(LO)s21_strncmp.o
	$(CC) -c $(LT)strpbrk/s21_strpbrk.c -o $(LO)s21_strpbrk.o
	$(CC) -c $(LT)strspn/s21_strspn.c -o $(LO)s21_strspn.o
	$(CC) -c $(LT)strstr/s21_strstr.c -o $(LO)s21_strstr.o
	$(CC) -c $(LT)to_upper/s21_to_upper.c -o $(LO)s21_to_upper.o
	$(CC) -c $(LT)to_lower/s21_to_lower.c -o $(LO)s21_to_lower.o
	$(CC) -c $(LT)insert/s21_insert.c -o $(LO)s21_insert.o
	$(CC) -c $(LT)trim/s21_trim.c -o $(LO)s21_trim.o
	$(CC) -c $(LT)strcpy/s21_strcpy.c -o $(LO)s21_strcpy.o
	$(CC) -c $(LT)strerror/s21_strerror.c -o $(LO)s21_strerror.o
	$(CC) -c $(LT)strncpy/s21_strncpy.c -o $(LO)s21_strncpy.o
	$(CC) -c s21_sprintf.c -o $(LO)s21_sprintf.o
	$(CC) -c $(L)maloc.c -o $(LO)maloc.o
	$(CC) -c $(L)$(S)parser.c -o $(LO)$(S)parser.o
	$(CC) -c $(L)$(S)spec.c -o $(LO)$(S)spec.o
	$(CC) -c $(L)$(S)d/$(S)d.c -o $(LO)$(S)d.o
	$(CC) -c $(L)$(S)c/$(S)c.c -o $(LO)$(S)c.o
	$(CC) -c $(L)$(S)e/$(S)e.c -o $(LO)$(S)e.o
	$(CC) -c $(L)$(S)f/$(S)f.c -o $(LO)$(S)f.o
	$(CC) -c $(L)$(S)g/$(S)g.c -o $(LO)$(S)g.o
	$(CC) -c $(L)$(S)o/$(S)o.c -o $(LO)$(S)o.o
	$(CC) -c $(L)$(S)p/$(S)p.c -o $(LO)$(S)p.o
	$(CC) -c $(L)$(S)s/$(S)s.c -o $(LO)$(S)s.o
	$(CC) -c $(L)$(S)u/$(S)u.c -o $(LO)$(S)u.o
	$(CC) -c $(L)$(S)x/$(S)x.c -o $(LO)$(S)x.o
	ar rcs s21_string.a $(LO)*.o
	ranlib s21_string.a
clean:
	rm -rf *.o *.gcda *.info report *.gcno *.a *.out $(LO)*.o lib_sprintf/obj
test.a:
	$(CC) -c $(LS)$(SU)sscanf.c -o $(LO)$(SU)sscanf.o
	$(CC) -c $(LT)memchr/$(SU)memchr.c -o $(LO)$(SU)memchr.o
	$(CC) -c $(LT)memcmp/$(SU)memcmp.c -o $(LO)$(SU)memcmp.o
	$(CC) -c $(LT)memcpy/$(SU)memcpy.c -o $(LO)$(SU)memcpy.o
	$(CC) -c $(LT)memmove/$(SU)memmove.c -o $(LO)$(SU)memmove.o
	$(CC) -c $(LT)memset/$(SU)memset.c -o $(LO)$(SU)memset.o
	$(CC) -c $(LT)strchr/$(SU)strchr.c -o $(LO)$(SU)strchr.o
	$(CC) -c $(LT)strlen/$(SU)strlen.c -o $(LO)$(SU)strlen.o
	$(CC) -c $(LT)strrchr/$(SU)strrchr.c -o $(LO)$(SU)strrchr.o
	$(CC) -c $(LT)strcat/$(SU)strcat.c -o $(LO)$(SU)strcat.o
	$(CC) -c $(LT)strncat/$(SU)strncat.c -o $(LO)$(SU)strncat.o
	$(CC) -c $(LT)strcmp/$(SU)strcmp.c -o $(LO)$(SU)strcmp.o
	$(CC) -c $(LT)strncmp/$(SU)strncmp.c -o $(LO)$(SU)strncmp.o
	$(CC) -c $(LT)strpbrk/$(SU)strpbrk.c -o $(LO)$(SU)strpbrk.o
	$(CC) -c $(LT)strspn/$(SU)strspn.c -o $(LO)$(SU)strspn.o
	$(CC) -c $(LT)strstr/$(SU)strstr.c -o $(LO)$(SU)strstr.o
	$(CC) -c $(LT)strtok/$(SU)strtok.c -o $(LO)$(SU)strtok.o
	$(CC) -c $(LT)trim/$(SU)trim.c -o $(LO)$(SU)trim.o
	$(CC) -c $(LT)insert/$(SU)insert.c -o $(LO)$(SU)insert.o
	$(CC) -c $(LT)to_lower/$(SU)to_lower.c -o $(LO)$(SU)to_lower.o
	$(CC) -c $(LT)to_upper/$(SU)to_upper.c -o $(LO)$(SU)to_upper.o
	$(CC) -c $(LT)strcpy/$(SU)s21_strcpy.c -o $(LO)$(SU)s21_strcpy.o
	$(CC) -c $(LT)strcspn/$(SU)s21_strcspn.c -o $(LO)$(SU)s21_strcspn.o
	$(CC) -c $(LT)strerror/$(SU)s21_strerror.c -o $(LO)$(SU)s21_strerror.o
	$(CC) -c $(LT)strncpy/$(SU)s21_strncpy.c -o $(LO)$(SU)s21_strncpy.o
	$(CC) -c $(L)test.c -o $(LO)test.o
	$(CC) -c $(L)$(S)d/$(SU)d.c -o $(LO)$(SU)d.o
	$(CC) -c $(L)$(S)c/$(SU)c.c -o $(LO)$(SU)c.o
	$(CC) -c $(L)$(S)e/$(SU)e.c -o $(LO)$(SU)e.o
	$(CC) -c $(L)$(S)f/$(SU)f.c -o $(LO)$(SU)f.o
	$(CC) -c $(L)$(S)g/$(SU)g.c -o $(LO)$(SU)g.o
	$(CC) -c $(L)$(S)o/$(SU)o.c -o $(LO)$(SU)o.o
	$(CC) -c $(L)$(S)p/$(SU)p.c -o $(LO)$(SU)p.o
	$(CC) -c $(L)$(S)s/$(SU)s.c -o $(LO)$(SU)s.o
	$(CC) -c $(L)$(S)u/$(SU)u.c -o $(LO)$(SU)u.o
	$(CC) -c $(L)$(S)x/$(SU)x.c -o $(LO)$(SU)x.o
	ar rcs test.a $(LO)*.o
	ranlib test.a

test: s21_string.a test.a
	$(CC) main.c -L. s21_string.a test.a -lcheck $(UBU) -o test_sprintf.out
	./test_sprintf.out

gcov_report: s21_string.a
	$(CC) --coverage main.c s21_*.c $(L)*.c $(L)$(S)x/*.c $(L)$(S)u/*.c $(L)$(S)s/*.c $(L)$(S)p/*.c $(L)$(S)o/*.c $(L)$(S)g/*.c $(L)$(S)f/*.c $(L)$(S)e/*.c \
	$(L)$(S)d/*.c $(L)$(S)c/*.c $(LT)memchr/*.c $(LT)memcmp/*.c $(LT)memcpy/*.c $(LT)memmove/*.c $(LT)memset/*.c $(LT)strcat/*.c $(LT)strchr/*.c $(LT)strcmp/*.c \
	$(LT)strlen/*.c $(LT)strncat/*.c $(LT)strncmp/*.c $(LT)strpbrk/*.c $(LT)strrchr/*.c $(LT)strcpy/*.c $(LT)strncpy/*.c $(LT)strerror/*.c $(LT)strcspn/*.c $(LT)strspn/*.c $(LT)strstr/*.c $(LT)strtok/*.c $(LT)trim/*.c $(LT)insert/*.c \
	$(LT)to_lower/*.c $(LT)to_upper/*.c $(LS)*.c -lcheck $(UBU) s21_string.a -L. s21_string.a test.a -o test_sprintf.out
	./test_sprintf.out
	lcov -t "my_test" -c -d ./ --output-file ./test.info
	genhtml -o report test.info
	rm -rf *.gcda *.gch *.gcno *.out *.o *.out

rebuild:
	make clean
	make
leaks:
	leaks -atExit -- test_sprintf.out
may:
	make clean
	make s21_string.a
