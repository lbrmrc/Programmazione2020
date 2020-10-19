//Scrivere un programma che controlli se un numero è pari o dispari
#include <stdio.h>

main(){
	int n;
	
	printf("Inserire numero: ");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("Pari\n");
	}
	else{
		printf("Dispari\n");
	}
}