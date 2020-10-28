/*
Trovare i numeri perfetti tra 2 e 10000. 
Un numero si dice perfetto se è uguale alla somma dei suoi divisori.
Esempio: 28 = 1+2+4+7+14 è un numero perfetto
*/


#include <stdio.h>

main(){
	int elementi = 0;
	int somma = 0; 
	int max;
	int i, j;
	
	// printf("Inserire valore massimo: ");
	// scanf("%d",&max);
	
	//ciclo su tutti i numeri
	// for(i=2; i<1000; i++){
	i = 2;
	
	while(i < 10000) {
		
		for(j = 1; j<=i/2; j++){
		
			if((i%j) == 0){
				somma = somma + j;
			}				
		}
		// printf("Numero: %d, Somma: %d\n",i,somma);
		if(somma == i)
			printf("Numero perfetto: %d\n",i);
		
		somma = 0;
		i++;
	}	
}

// azzerando somma
// 4 -> somma = 1 + 2 = 3
// 5 -> somma = 1 + 2 = 3
// 6 -> somma = 1 + 2 + 3 = 6 <--- PERFETTO

// non azzerando
// 4 -> somma = 1 + 2 = 3
// 5 -> somma = 3 + 1 + 2 = 6 
// 6 -> somma = 6 + 3 + 2 + 1 = 12  