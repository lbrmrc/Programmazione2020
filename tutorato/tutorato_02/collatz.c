/*
La congettura di Collatz riguarda il seguente algoritmo:

Si prenda un numero intero positivo n.
Se n = 1 l'algoritmo termina.
Se n è pari, lo si divida per 2; se n dispari lo si moltiplichi per 3 e si aggiunga 1.

La congettura di Collatz asserisce che questo algoritmo giunge sempre a termine, 
indipendentemente dal valore di partenza.
Prendere in ungresso due numeri a e b e, per tutti i numeri tra a e b, 
stampare quanti cicli compie l'algoritmo.	
*/

#include <stdio.h>

main(){
	int valoreIniziale;
	int valoreFinale;
	int i, nCicli, n;
	
	printf("Inserire valore iniziale: ");
	scanf("%d",&valoreIniziale);
	
	printf("Inserire valore finale: ");
	scanf("%d",&valoreFinale);
	
	for(i=valoreIniziale; i<=valoreFinale; i++){
		n = i;
		nCicli = 0;
		
		while(n!=1){
			if(n%2 == 0){
				n = n/2;
			}
			else{
				n = 3*n+1;
			}
			nCicli++;
		}
		
		printf("Numero: %d, cicli: %d\n",i,nCicli);
	}
}