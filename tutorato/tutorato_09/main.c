/*
Nel file main.c includo solamente il file header.
Non devo scrivere #include <stdio.h>
perché questa libreria viene automaticamente inclusa
da myinclude.h

compilo con 
> gcc main.c iterativa.c ricorsiva.c 
o col Makefile
> make
*/
#include "myinclude.h"

int main() {
	int array[DIM];
	int i,nElementi;
	int risultatoRicorsiva, risultatoIterativa;
	
	printf("Inserire il numero di elementi: ");
	scanf("%d",&nElementi);
	
	for(i = 0; i < nElementi; i++) {
		printf("Inserire elemento %d: ",i);
		scanf("%d",&array[i]);
	}
	
	risultatoRicorsiva = ricorsiva(array,nElementi,0);
	risultatoIterativa = iterativa(array,nElementi);
	
	if(risultatoIterativa == risultatoRicorsiva) {
		printf("Uguali: %d\n",risultatoIterativa);
	}
	else {
		printf("Iterativa: %d\n",risultatoIterativa);
		printf("Ricorsiva: %d\n",risultatoRicorsiva);
	}
	
	return 0;
}