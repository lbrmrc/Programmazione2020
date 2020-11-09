#include <stdio.h>

int perimetro(int l1, int l2, int l3) {
	return l1+l2+l3;
}

float area(int l1, int l2, int l3) {
	float p = perimetro(l1,l2,l3)/2;
	
	return p*(p-l1)*(p-l2)*(p-l3);
}

int main() {
	int l1, l2, l3;
	
	printf("Inserire l1, l2, l3: ");
	scanf("%d%d%d",&l1,&l2,&l3);
	
	printf("Perimetro: %d\n",perimetro(l1,l2,l3));
	printf("Area al quadrato: %f\n",area(l1,l2,l3));
	
}
