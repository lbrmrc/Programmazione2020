#include <stdio.h>

#define MAX 100
#define K 10

/*
occorrenze restituisce il numero di volte che si ripete l'elemento che si ripete più volte
*/

/*
soluzione base
per ogni elemento dell'array scorre tutta la parte rimanente dell'array.
Quindi per un array di n elementi scorre l'array n volte, poco efficiente
soprattutto per array di grandi dimensioni
*/
int occorrenzeBase(int *a, int numeroElementi, int *elementoPiuRipetuto) {
	int contatore = 0;
	int maxContatore = 0;
	int ripetuto;
	int i, j;
	
	for(i = 0; i < numeroElementi; i++) {
		for(j = i; j < numeroElementi; j++) {
			if(a[i] == a[j]) {
				contatore++;
			}
		}
		if(contatore > maxContatore) {
			maxContatore = contatore;
			ripetuto = a[i];
		}
		
		contatore = 0;
	}
	
	*elementoPiuRipetuto = ripetuto;
	
	return maxContatore;
}

/*
soluzione migliorata
Si può sfruttare il fatto che il valore degli elementi inseriti sia < K 
*/
int occorrenzeMigliorato(int *a, int numeroElementi, int *elementoPiuRipetuto) {
	int supporto[K] = {0}; 
	int i;
	int maxTemp = 0;
	int maxElemento;
	
	for(i = 0; i < numeroElementi; i++) {
		supporto[a[i]]++;
	}
	
	for(i = 0; i < K; i++) {
		if(supporto[i] > maxTemp) {
			maxElemento = i;
			maxTemp = supporto[i];
		}
	}
	
	*elementoPiuRipetuto = maxElemento;
	
	return supporto[maxElemento];
	
}

int main() {
	int a[MAX];
	int elementoPiuRipetutoBase;
	int elementoPiuRipetutoMigliorato;
	int contatoreBase;
	int contatoreMigliorato;
	int numeroElementi;
	int i;
	
	printf("Inseire numero elementi: ");
	scanf("%d",&numeroElementi);
	
	for(i = 0; i < numeroElementi; i++) {
		printf("Inserire elemento %d: ",i);
		scanf("%d",&a[i]);
	}
	
	contatoreBase = occorrenzeBase(a, numeroElementi, &elementoPiuRipetutoBase);
	contatoreMigliorato = occorrenzeMigliorato(a, numeroElementi, &elementoPiuRipetutoMigliorato);

	printf("Base: Numero:%d Ripetizioni:%d\n",elementoPiuRipetutoBase,contatoreBase);
	printf("Migliorato: Numero:%d Ripetizioni:%d\n",elementoPiuRipetutoMigliorato,contatoreMigliorato);
		
	return 0;
}