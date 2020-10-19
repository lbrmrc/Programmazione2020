/*
Data una scacchiera 8X8, prendere in ingresso le posizioni di due regine e 
controllare non si attacchino. 
La regina in una scacchiera può muoversi in verticale, 
in orizzontale e in diagonale, come mostrato in ﬁgura, 
quindi le due regine non devono essere sulla stessa 
linea orizzontale o verticale o diagonale.
*/
#include <stdio.h>

main(){
	int x1,x2;
	int y1,y2;
	
	printf("Inserire posizione regina 1: ");
	scanf("%d %d",&x1,&y1);
	
	printf("Inserire posizione regina 2: ");
	scanf("%d %d",&x2,&y2);
	
	//controllo orizzontale
	if(x1 == x2){
		printf("Stessa linea orizzontale\n");
	}
	
	//controllo orizzontale
	if(y1 == y2){
		printf("Stessa linea verticale\n");
	}
	
	//controllo diagonale
	if(((x2-x1) == (y2-y1)) || ((x2-x1) == -1*(y2-y1))){
		printf("Stessa diagonale\n");
	}
}