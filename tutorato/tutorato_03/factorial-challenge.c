/*
Il ragionamento è questo: per avere uno zero in fondo al risultato devo 
devo individuare quante volte ottengo una moltiplicazione per 10 nel fattoriale 
(quindi ogni volta che si ha 5*2). 
Il numero di 2 nel fattoriale è sicuramente molto più grande del numero di 5 
perché ad ogni numero pari di fatto ho una moltiplicazione per 2, quindi non 
è fondamentale inserire il controllo sui 2. 
Per individuare il numero di 5 si può fare in questo modo, prendo per esempio 1000!: 
conto quante volte il numero è divisibile per 5 e ottengo 200. 
Questo non basta perché quando ho una potenza di 5 (es 25 = 5*5) il numero 5 si 
ripete due volte, ho quindi ogni 25 un 5 in più nel prodotto e per individuare 
quanti sono divido per 25: 1000/25 = 40 e sommati ai 200 di prima ho 240. 
Per lo stesso ragionamento, quando incontro la successiva potenza di 5 (ora 5*5*5 = 125) 
ho un ulteriore 5: 1000/125 = 8, 240+8 = 248. 
Stessa cosa per 5^4 = 625, 1000/625 = 1, 248 + 1 = 249. 
Ora mi posso fermare perché la successiva potenza di 5 supera il numero iniziale 
e ovviamente non lo divide. 
*/


#include <stdio.h>

int trailingZeros(int number) {
	int zeroCount = 0;
	int fivePower;
	
	for(fivePower = 5; fivePower <= number; fivePower = fivePower*5) {
		zeroCount = zeroCount + number/fivePower;
	}
	
	return zeroCount;
}

int main() {
  int n;
  printf("Inserire numero: ");
  scanf("%d", &n);
  printf("Il numero di zeri finali è: %d\n", trailingZeros(n));
  return 0;
}
