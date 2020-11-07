#include <stdio.h>

int mcm(int numeroA, int numeroB) {
	int maggiore;
	int i = 0;
	
	if(numeroA > numeroB)
		maggiore = numeroA;
	else 
		maggiore = numeroB;
	
	if(numeroA == numeroB)
		return numeroA;
	else {
		for(i = maggiore; i < numeroA*numeroB; i++) {
			if((i % numeroA == 0) && (i % numeroB == 0))
				return i;
		}
	}
}

int main() {
	int numeroA,numeroB;
	int risultatoMcm;
	
	printf("Inserire primo numero: ");
	scanf("%d",&numeroA);
	
	printf("Inserire secondo numero: ");
	scanf("%d",&numeroB);

	/*
	controllo l'input dell'utente,
	mai fidarsi, mai
	*/
	
	if(numeroA > 0 && numeroB > 0) {
		risultatoMcm = mcm(numeroA,numeroB);
		printf("mcm(%d,%d) = %d\n",numeroA,numeroB,risultatoMcm);
	}
	else
		printf("Numeri inseriti non validi\n");
	
	return 0;
}