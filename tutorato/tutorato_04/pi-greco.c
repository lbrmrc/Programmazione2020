/*
Calcolare pi greco come somma della serie indicata nel pdf
*/

#include <stdio.h>

int main() {
	int i,numeroIterazioni;
	int divisore = 1;
	float piValue = 0;
	
	printf("Inserire numero iterazioni: ");
	scanf("%d",&numeroIterazioni);
	
	for(i=1; i<=numeroIterazioni; i++){
		if(i%2 == 0){
			piValue = piValue - (float) 1/divisore;
		}
		else{
			piValue = piValue + (float) 1/divisore;
		}
		
		divisore = divisore + 2;
	}
	
	printf("Valore: %f\n",4*piValue);

}	