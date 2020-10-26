/*
L'algoritmo di Euclide è un algoritmo per trovare il massimo comune divisore 
(mcd) tra due numeri interi.

L'algoritmo è il seguente: 
Siano a e b due interi con 0 <= b < a.
Se b = 0 allora mcd(a,b) = a.
Se b != 0 allora a = b*q + r con 0 <= r < b, con q quoziente e r resto della divisione tra a e b
Porre a = b e b = r.
Ripartire dal punto 1.

L'algoritmo continua finchè non s trova un b = 0.
Prendere in ingresso a e b e calcolarne l'mcd. 
Es: mcd(126,147) = 21.
*/

#include <stdio.h>

main(){
	int a,b,t;
	
	printf("Inserire primo numero: ");
	scanf("%d",&a);
	
	printf("Inserire secondo numero: ");
	scanf("%d",&b);
	
	
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}

	printf("mcd %d\n",a);
}