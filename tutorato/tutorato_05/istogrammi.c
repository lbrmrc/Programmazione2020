#include <stdio.h>

#define SIZE 100

void stampaAsterischi(int n, int indice) {
	int i;
	printf("Elemento %d: %d ",indice, n);
	for(i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}

int main() {
	int i;
	int a[SIZE];
	int nElementi;
	
	printf("Inserire numero elementi: ");
	scanf("%d",&nElementi);
	
	for(i = 0; i < nElementi; i++) {
		printf("Inserire elemento: ");
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < nElementi; i++) {
		stampaAsterischi(a[i],i);
	}

}