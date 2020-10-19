/*
Data una scacchiera 8X8, prendere in ingresso una posizione 
(es: 1 3 prima riga terza colonna) e dire se è una casella bianca o nera. 
Veriﬁcare anche che la posizione inserita sia valida 
(es: 9 1 non è valida perché la scacchiera è 8X8).
*/
#include <stdio.h>

main(){
	int x,y;
	
	printf("Inserire posizione x e y: ");
	scanf("%d %d",&x,&y);

	if(x < 1 || x > 8 || y < 1 || y > 8) {
		printf("Posizione non valida\n");
	}
	else if((x%2 != 0 && y%2) != 0 || (x%2 == 0 && y%2 == 0)){
		printf("Bianca\n");
	}
	else{
		printf("Nera\n");
	}
}