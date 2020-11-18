#include <stdio.h>

#define DIM 20

int main() {
	int i;
	int n = 0;
	char tmp;
	char stringa[DIM];
	
	printf("Inserire stringa: ");
	scanf("%s",stringa);
	
	while(stringa[n] != '\0') {
		n++;
	}
	
	for(i = 0; i < n/2; i++) {
		tmp = stringa[i];
		stringa[i] = stringa[n-i-1];
		stringa[n-i-1] = tmp;
	}
	
	printf("Invertita: %s\n",stringa);
	return 0;
}