//Scrivere un programma che controlli se due numeri sono divisibili. 
//Un numero a è divisibile per un numero b se a/b ha resto 0.
#include <stdio.h>

main(){
	int a,b;
	
	printf("Inserire primo numero: ");
	scanf("%d",&a);
	
	printf("\nInserire secondo numero: ");
	scanf("%d",&b);
	
	if(a%b == 0 || b%a == 0){
		printf("\nDivisibili\n");
	}
	else{
		printf("\nNon divisibili\n");
	}
}