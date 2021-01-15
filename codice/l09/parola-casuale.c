#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int intero_casuale(int minimo, int massimo){
    return minimo + (rand() % (massimo - minimo + 1));
}

typedef char Parola[31];

Parola parole[100000];
int numero_parole = 0;

void parolaCasuale(Parola pc){
     // generare numero casuale fro 0 e numero_parole-1
    int numero_casuale = intero_casuale(0, numero_parole -1);
    strcpy(pc, parole[numero_casuale]);
}

int main() {
  FILE* fp;
  Parola p;

  srand(time(NULL));

  if ((fp = fopen("words.italian.txt", "rt")) == NULL) {
    printf("Errore apertura words.italian.txt\n");
    exit(1);
  }

  // ... operazioni su file
  // map da file a array
   while (fscanf(fp, "%s", p) == 1){
       strcpy(parole[numero_parole], p);
       numero_parole++;
   }

  if (fclose(fp) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }

    parolaCasuale(p) ;
    printf("%s\n", p);

  return 0;
}