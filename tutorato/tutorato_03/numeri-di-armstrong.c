#include <stdio.h>

int power(int base, int esponente) {
	int i = 0;
	int value = 1;
	
	for(i = 0; i < esponente; i++) {
		value = value*base;
	}
	
	return value;
}

int armstrong(int numero, int cifre) {
	int numeroTest = numero;
	int resto;
	int risultato = 0;
	int potenza;
	
	while (numeroTest != 0) {
        resto = numeroTest%10;
		potenza = power(resto, cifre);
        risultato = risultato + potenza;
        numeroTest /= 10;
    }
	
	if(risultato == numero)
		return 1;
	else
		return 0;
}


int countDigits(int numero) {
	int cifre = 0;
	
	while(numero) {
		numero = numero/10;
		cifre++;
	}
	
	return cifre;
}

int main() {
	int numero;
	int cifre;
	int esito;
	
	printf("Inserire numero: ");
	scanf("%d",&numero);

	cifre = countDigits(numero);
	
	esito = armstrong(numero,cifre);
	
	if(esito == 1)
		printf("%d è un numero di Armstrong\n",numero);
	else
		printf("%d NON è un numero di Armstrong\n",numero);
	
	return 0;
}
