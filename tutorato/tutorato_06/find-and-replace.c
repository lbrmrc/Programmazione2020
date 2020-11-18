#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define MAX 100

/*
Commento:
ho modificato il testo dell'esercizio: inizialmente utilizava nell'esempio
"stringa di prova". L'ho sostituito con "stringa_di_prova". Questo perché
la scanf continua a leggere finché non incontra una nuova linea o uno spazio bianco.
Inserendo "stringa di prova" viene letto solo "stringa".

Come ho commentato nella soluzione, ho inserito uno spazio prima del '%c' nella
scanf del carattere da cercare e sostituire. Questo perché la scanf usata per
i char necessita di uno spazio prima della lettura del carattere, altrimenti viene letto
il carattere precedente (che in questo caso era '\n'). Per vedere questo comportamento
basta rimuovere lo spazio prima di '%c' e mettere subito dopo la scanf, printf("%c",trova).

Per avere ulteriori informazioni riguardo a questi comportamenti aprire
un terminale e digitare: man scanf.
Andare poi nella parte "Conversions" e cercare s, per le stringhe e c per i char.

Damiano

*/

void findAndReplace(char *frase, int lunghezzaStringa, char trova, char sostituisci, char *fraseModificata) {

}

int main() {  
	char frase[MAX];  
	char fraseModificata[MAX]; 
	int lunghezzaStringa; 
	char trova;
	char sostituisci;
	int i;
	
	printf("Inserire stringa: ");
	scanf("%s",frase);
	
	printf("Inserire carattere da cercare: ");
	scanf(" %c",&trova); //******************************** NOTARE LO SPAZIO PRIMA DI %c
	
	printf("Inserire carattere da sostituire: ");
	scanf(" %c",&sostituisci); //************************** NOTARE LO SPAZIO PRIMA DI %c
	
	lunghezzaStringa = strlen(frase);

	for(i = 0; i < lunghezzaStringa; i++) { 
		if(frase[i] == trova) 
			fraseModificata[i] = sostituisci; 
		else fraseModificata[i] = frase[i] ;
	}
	
	fraseModificata[lunghezzaStringa] = '\0' ;

	printf("Risultato: %s\n",fraseModificata);
	
	return 0;
}