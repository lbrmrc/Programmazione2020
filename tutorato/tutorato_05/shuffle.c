#include <stdio.h>

#define MAX 100

int main() {
	// NB, l'array deve contenere un numero pari di elementi
	int a[MAX];
	int numeroElementi;
	int i = 0;
	int mid;
	int temp;
	
	printf("Inserire numero di elementi: ");
	scanf("%d",&numeroElementi);
	
	if(numeroElementi%2 != 0) {
		printf("L'array deve contenere un numero pari di elementi\n");
		return -1;
	}
		
	
	for(i = 0; i < numeroElementi; i++) {
		printf("Inserire elemento %d: ",i);
		scanf("%d",&a[i]);
	}
	
	// stampo array
	printf("Prima:\t");
	for(i = 0; i < numeroElementi; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	
	// shuffle
	mid = numeroElementi/2;

	
	for(i = 0; i < mid; i++) {
		temp = a[i];
		a[i] = a[mid+i];
		a[mid+i] = temp; 
	}
	
	// stampo array
	printf("Dopo:\t");
	for(i = 0; i < numeroElementi; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}