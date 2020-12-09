#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {

	int arrayBambini[MAX] = {0};
	int numeroBambini;	
	int i;
	int k;
	int current;
	int n;
	
	printf("Inserire numero di bambini: ");
	scanf("%d",&numeroBambini);
	printf("Inserire k: ");
	scanf("%d",&k);
	
	i = 0;
	current = 1;
	n = numeroBambini;
	
	
	while(n > 1) {
		//indice i che scorre sempre tutti gli elementi dell'arrayBambini
		//indice current che aumenta solamente se i non è uscito dal cerchio
		
		if((arrayBambini[i] == 0) && ((current)%k == 0)) {
			arrayBambini[i] = 1;
			//printf("%d ",i);
			n--;
			current = 1;
		}
		
		if(arrayBambini[i] == 0) {
			current++;
		}
		
		if(i == numeroBambini-1) {
			i=0;
		}
		else { 
			i++;
		}		
	}
	
	for(i = 0; i < numeroBambini; i++) {
		if(arrayBambini[i] == 0) {
			printf("Senza regalo %d\n",i+1);
		}
	}

}