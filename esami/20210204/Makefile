pazienti: main.o listaPazienti.o
	gcc -g -o pazienti main.o listaPazienti.o

main.o: main.c listaPazienti.h
	gcc -c -g main.c

listaPazienti.o: listaPazienti.c listaPazienti.h
	gcc -c -g listaPazienti.c