#include <stdio.h>

#define DIM 20
#define MAXSIZE 100

typedef struct pietra {
	int valore;
	char nome[DIM];
} pietra;

// selection sort
void ordina(pietra *listaPietre, int nPietre) {
	int i,j,min;
	pietra p;
	
	for(i = 0; i < nPietre; i++) {
		min = i;
		for(j = i+1; j < nPietre; j++) {
			if(listaPietre[j].valore > listaPietre[min].valore) {
				min = j;
			}
		}
		p = listaPietre[min];
		listaPietre[min] = listaPietre[i];
		listaPietre[i] = p;
	}	
}

int main() {
	int nPietre;
	int selezionate;
	int i;
	pietra listaPietre[MAXSIZE];
	
	printf("Inserire in numero di pietre trovate: ");
	scanf("%d",&nPietre);
	
	if(nPietre > DIM) {
		printf("Il numero di pietre deve essere minore di 100\n");
		return -1;
	}
	
	for(i = 0; i < nPietre; i++) {
		printf("Inserire nome pietra: ");
		scanf("%s",listaPietre[i].nome);
		printf("Inserire valore pietra: ");
		scanf("%d",&listaPietre[i].valore);
		printf("\n");
	}
	
	printf("Quante pietre si riescono a trasportare: ");
	scanf("%d",&selezionate);
	
	if(selezionate > nPietre) {
		printf("Troppe. Seleziono tutte\n");
		selezionate = nPietre;
	}
	
	ordina(listaPietre,nPietre);
	
	for(i = 0; i < selezionate; i++) {
		printf("Nome: %s\nValore: %d\n\n",listaPietre[i].nome,listaPietre[i].valore);
	}
	
	
}