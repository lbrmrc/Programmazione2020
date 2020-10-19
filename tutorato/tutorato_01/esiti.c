/*Dato in ingresso il risultato di un esame, 
stampare la corrispondente valutazione secondo la seguente tabella: 
18 - 20 suﬃciente 
21 - 23 discreto 
24 - 26 buono 
27 - 29 distinto 
30 - 32 ottimo
*/

#include <stdio.h>

main(){
	int valutazione;
	
	printf("Inserire valutazione: ");
	scanf("%d",&valutazione);
	
	if(valutazione < 18 || valutazione > 32){
		printf("Valutazione non valida\n");
	}
	else if(valutazione >= 18 && valutazione <= 20){
		printf("Sufficiente\n");
	}
	else if(valutazione >= 21 && valutazione <= 23){
		printf("Discreto\n");
	}
	else if(valutazione >= 24 && valutazione <= 26){
		printf("Buono\n");
	}
	else if(valutazione >= 27 && valutazione <= 29){
		printf("Distinto\n");
	}
	else if(valutazione >= 30 && valutazione <= 32){
		printf("Ottimo\n");
	}
}