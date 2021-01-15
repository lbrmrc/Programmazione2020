main: main.o ricorsiva.o iterativa.o
	gcc -o main main.o ricorsiva.o iterativa.o

main.o: main.c myinclude.h
	gcc -c main.c

ricorsiva.o: ricorsiva.c myinclude.h
	gcc -c ricorsiva.c
	
iterativa.o: iterativa.c myinclude.h
	gcc -c iterativa.c