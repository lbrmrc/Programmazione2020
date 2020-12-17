calcolo-calorie-pasto: main.o funzioniCalorie.o
	gcc -g -o calcolo-calorie-pasto main.o funzioniCalorie.o 

main.o: main.c funzioniCalorie.h
	gcc -g -c main.c

funzioniCalorie.o: funzioniCalorie.c funzioniCalorie.h
	gcc -g -c funzioniCalorie.c