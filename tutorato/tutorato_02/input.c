/*
Leggere una serie di numeri compresi tra 1 e 100 da tastiera 
finchè non si inserisce 0 e restituire la somma dei numeri inseriti, 
il numero più grande e il numero più piccolo.
*/

#include <stdio.h>

main(){
	int minimo, massimo, numero, somma;
	
	printf("Inserire numero: ");
	scanf("%d",&numero);
	
	minimo = 101;
	massimo = 0;
	somma = 0;
	
	while(numero > 0){	
		if(numero < minimo)
			minimo = numero;
		if(numero > massimo)
			massimo = numero;
		
		somma = somma + numero;
		
		printf("Inserire numero: ");
		scanf("%d",&numero);
	} 
	
	printf("Minimo: %d, Massimo: %d Somma:%d\n", minimo, massimo, somma);
	
}