immobili: listaImmobili.o main.o
	gcc -g -o immobili listaImmobili.o main.o

listaImmobili.o: listaImmobili.c listaImmobili.h
	gcc -g -c listaImmobili.c

main.o: main.c listaImmobili.h
	gcc -g -c main.c