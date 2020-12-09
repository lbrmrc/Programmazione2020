#include <stdio.h>

#define DIM 100

int inRange(int n) {
	return n < DIM;
}

void leggiElementi(char *a, int nElementi) {
	int i;
	for(i = 0; i < nElementi; i++) {
		printf("Inserire elemento %d: ",i);
		scanf(" %c",&a[i]);
	}
}

int arrayLen(char *a) {
	int i = 0;
	
	while(*a) {
		i++;
		*a++;
	}
	
	return i;
}

int rimuoviDuplicati(char *a1, char *a2) {
	int n1 = arrayLen(a1);
	int n2 = arrayLen(a2);
	int i,j,k;
	int contatoreRimossi = 0;
	
	for(i = 0; i < n1; i++) {
		for(j = 0; j < n2; j++) {
			if(a1[i] == a2[j]) {
				// rimuovo elemento shiftando tutti
				// gli elementi a sinistra di 1
				// vado fino ad n peché devo spostare anche il '\0'
				for(k = i; k < n1; k++) {
					a1[k] = a1[k+1];
				}
				n1--;
				contatoreRimossi++;
			}
		}
	}
	
	return contatoreRimossi;
}

void stampaArray(char *a) {
	while(*a) {
		printf("%c",*a);
		*a++;
	}
	printf("\n");
}

int main() {
	int n1,n2;
	int rimossi;
	char a1[100], a2[100];
	
	printf("Inserire dimensione array 1: ");
	scanf("%d",&n1);
	if(!inRange(n1)) {
		printf("Dimensione array 1 deve essere < 100\n");
		return -1;
	}
	
	printf("Inserire dimensione array 2: ");
	scanf("%d",&n2);
	if(!inRange(n1)) {
		printf("Dimensione array 2 deve essere < 100\n");
		return -1;
	}
	
	leggiElementi(a1,n1);
	printf("Letto array 1\n");
	
	leggiElementi(a2,n2);
	printf("Letto array 2\n");

	rimossi = rimuoviDuplicati(a1,a2);
	
	printf("Eliminati: %d\n",rimossi);
	
	printf("Risultato: \n");
	stampaArray(a1);
	
	return 0;
}