/*
Date in ingresso le coordinate di un punto nel piano (X,Y), 
stampare in che quadrante si trova. 
(+,+) primo quadrante 
(-,+) secondo quadrante 
(-,-) terzo quadrante 
(+,-) quarto quadrante
*/

#include <stdio.h>

main(){
	int x,y;
	
	printf("Inserire X: ");
	scanf("%d",&x);
	
	printf("Inserire Y: ");
	scanf("%d",&y);
	
	if(x > 0 && y > 0){
		printf("Primo quadrante\n");
	}
	else if(x < 0 && y > 0){
		printf("Secondo quadrante\n");
	}
	else if(x < 0 && y < 0){
		printf("Terzo quadrante\n");
	}
	else if(x > 0 && y < 0){
		printf("Quarto quadrante\n");
	}
	else if((x == 0 && y > 0) || (x == 0 && y < 0)){
		printf("Punto sull'asse y\n");
	}
	else if((x > 0 && y == 0) || (x < 0 && y == 0)){
		printf("Punto sull'asse x\n");
	}
	else if(x == 0 && y== 0){
		printf("Origine\n");
	}

}