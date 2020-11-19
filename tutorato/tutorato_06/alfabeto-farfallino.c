#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_1 100
#define max_2 300

int main() {
	char frase[max_1] ;
	char frasemodificata[max_2] ;
	int lung_stringa ;
	int i = 0;
	int j = 0;

	printf("Inserisci una parola di al massimo %d caratteri: ", max_1);
	scanf("%s",frase) ;

	lung_stringa = strlen(frase) ;

	printf("La parola inserita: %s\n",frase) ;
	printf("La frase contiene %d caratteri \n", lung_stringa) ;

	for(i=0; i<lung_stringa; i++) {
		if ( frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
			frasemodificata[j]=frase[i];
			frasemodificata[j+1] = 'f';
			frasemodificata[j+2]=frase[i];
			j=j+3;
		}
		else {
			frasemodificata[j] = frase[i] ;
			j++;
		}
	}
	frasemodificata[j] = '\0' ;
	
	/* STAMPA LA FRASE MODIFICATA */
	printf("La frase modificata e': %s\n",frasemodificata) ;
	return 0;
}
