/*
Data una conﬁgurazione tris, determinare se è vincente. 
Esempio: (1,1), (1,2), (1,3) è vincente perché i tre elementi sono allineati.
*/
#include <stdio.h>

main(){
	int x1,x2,x3;
	int y1,y2,y3;
	
	printf("Inserire coordinate x e y primo punto: ");
	scanf("%d %d",&x1,&y1);
	
	printf("Inserire coordinate x e y secondo punto: ");
	scanf("%d %d",&x2,&y2);
	
	printf("Inserire coordinate x e y terzo punto: ");
	scanf("%d %d",&x3,&y3);
	
	//controllo se sono allineati orizzontalmente
	if(x1 == x2 && x2 == x3){
		printf("Vincente, allineati orizzontalmente\n");
	}
	
	//controllo se sono allineati verticalmente
	if(y1 == y2 && y2 == y3){
		printf("Vincente, allineati verticalmente\n");
	}
	
	//controllo diagonale
	if((x1 == y1 && x2 == y2 && x3 == y3) || (x1 + y1 == 4 && x2 + y2 == 4 && x3 + y3 == 4)){
		printf("Vincente, allineati diagonalmente\n");
	}		
}