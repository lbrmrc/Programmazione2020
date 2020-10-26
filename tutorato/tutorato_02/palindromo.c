/*
Leggere da tastiera un intero (< 2147483647) e controllare se è palindromo.
Un numero è palindromo quando le sue cifre rappresentano lo stesso valore sia che siano lette da destra che da sinistra.
Es: 1234321 è palindromo.
*/


#include <stdio.h>

main(){
	int n, num;
	int reversed, digit;
	
	printf("Inserire numero: ");
	scanf("%d",&n);
	
	num = n;
	reversed = 0;
	
	while (num > 0) {
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num = num / 10;
	}
	
	if(n == reversed)
		printf("%d è palindromo\n",n);
	else
		printf("%d NON è palindromo\n",n);
}