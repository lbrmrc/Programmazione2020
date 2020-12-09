#include <stdio.h>

void soluzione(){
	int carlo; //carlo
	int antonio; //antonio
	int franco; //franco
	int carloPassato; //carloPassato
	int francoPassato; //francoPassato
	
	int maxAge = 100;
	
	int nCicli = 0;
	
	/*
	franco parla dei suoi nipoti: etafranco > etaNipoti
	antonio ha 3 anni in più di carlo
	*/
	
	/*
	Il signor franco, parlando dei suoi nipoti ad un amico che gli chiede la loro età, 
	risponde in maniera sibillina: 
	“Fra 13 anni, carlo avrà l’età che avevo io quando lui era 7 volte più giovane di me. 
	antonio, invece, ha 4 anni più di carlo e 
	1 anno in meno della differenza d’età che c’è tra me e carlo”. 
	Quanti anni ha il signor franco e quanti ne hanno i suoi nipoti? 	
	*/
	for(franco = 0; franco < maxAge; franco++){
		for(carlo = 0; carlo < franco; carlo++){
			for(antonio = carlo + 4; antonio < franco; antonio++){
				for(carloPassato = 0; carloPassato < carlo; carloPassato++){
					for(francoPassato = 0; francoPassato < franco; francoPassato++){
						nCicli++;
						if(
							(carlo + 13 == francoPassato) &&
							(francoPassato == carloPassato * 7) &&
							((franco - francoPassato) == (carlo - carloPassato)) &&
							(antonio == carlo + 4) &&
							(antonio == franco - carlo - 1)
							)
							{
								printf("carlo: %d\n",carlo);
								printf("franco: %d\n",franco);
								printf("antonio: %d\n",antonio);
								
								printf("Numero cicli: %d\n",nCicli);
								return;
							}
							
					}
				}
			}
		}
	}
}

int main(){
	soluzione();
}