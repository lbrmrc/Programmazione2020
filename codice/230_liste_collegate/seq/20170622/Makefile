scontrini: listino.o main.o
	gcc -g -o scontrini listino.o main.o

listino.o: listino.c listino.h
	gcc -g -c listino.c

main.o: main.c listino.h
	gcc -g -c main.c