/*
Trovare i numeri perfetti tra 1 e 10000. 
Un numero si dice perfetto se è uguale alla somma dei suoi divisori.
Esempio: 28 = 1+2+4+7+14 è un numero perfetto
*/


#include <stdio.h>

main(){
	int elementi = 0;
	int somma = 0; 
	int max;
	int i, j;
	
	printf("Inserire valore massimo: ");
	scanf("%d",&max);
	
	//ciclo su tutti i numeri
	for(i=2; i<max; i++){
		//cerco divisori
		for(j=1; j<=i/2; j++){
			//se è un divisore
			if((i%j) == 0){
				somma = somma + j;
			}				
		}
		printf("Numero: %d, Somma: %d\n",i,somma);
		if(somma == i)
			printf("Numero perfetto: %d\n",i);
		
		somma = 0;
	}	
}