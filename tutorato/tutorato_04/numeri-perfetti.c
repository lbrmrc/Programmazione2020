#include <stdio.h>

int sommaDivisori(int numero) {
	int i;
	int somma = 0;
	
	for(i = 1; i <= numero/2; i++) {
		if(numero%i == 0) {
			somma = somma + i;
		}
	}	
	return somma;
}

int main() {
	int i;
	
	for(i = 1; i <= 100; i++) {
		if(i == sommaDivisori(i)) {
			printf("%d numero perfetto\n",i);
		}
	}
}
