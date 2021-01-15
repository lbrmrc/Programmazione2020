orari: listainsegnamenti.o main.o
	gcc -g -o orari listainsegnamenti.o main.o
main.o: main.c listainsegnamenti.h
	gcc -c main.c -g
listainsegnamenti.o: listainsegnamenti.c listainsegnamenti.h
	gcc -c listainsegnamenti.c -g

clean:
	rm main.o listainsegnamenti.o orari