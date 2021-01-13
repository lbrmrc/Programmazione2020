persone: main.o listaPersone.o
	gcc -g -o persone listaPersone.o main.o

main.o: main.c listaPersone.h
	gcc -c -g main.c

listaPersone.o: listaPersone.c listaPersone.h
	gcc -c -g listaPersone.c