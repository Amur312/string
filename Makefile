all: s21_sscanf
s21_sscanf: s21_sscanf.o tip_get_funkshin.o parser.o
	gcc s21_sscanf.o tip_get_funkshin.o parser.o -o s21_sscanf

s21_sscanf.o: s21_sscanf.c
	gcc -c s21_sscanf.c

tip_get_funkshin.o: tip_get_funkshin.c
	gcc -c tip_get_funkshin.c

parser.o: parser.c
	gcc -c parser.c

clean:
	rm *.o
rebuild:    
	make clean
	make
