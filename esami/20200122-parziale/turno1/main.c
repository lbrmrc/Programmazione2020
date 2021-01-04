#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "listaVeicoli.h"

#define N_ULTIME 3

int main(int argc, char* argv[]) {
  int i;
  FILE* f;
  Lista l;
  Accesso a;

  // variabili per la parte 2
  char ultimeTarghe[N_ULTIME][8] = {""};
  char t[8];

  if (argc != 2) {
    printf("Uso: %s fileAccessi\n", argv[0]);
    exit(1);
  }
  nuovaLista(&l);
  f = fopen(argv[1], "rb");
  if (f == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }
  // per ogni record letto
  while (fread(&a, sizeof(Accesso), 1, f) == 1) {
    // aggiorno la lista dei veicoli
    aggiorna(&l, a.targa);
    // quanto segue è per la parte 2
    // si inserisce l'ultima targa letta all'indice 0
    // e si fanno scalare a destra le targhe già presenti
    // fermandosi se si ritrova l'ultima letta
    strcpy(t, a.targa);
    i = 0;
    do {
      char temp[8];
      strcpy(temp, t);
      strcpy(t, ultimeTarghe[i]);
      strcpy(ultimeTarghe[i], temp);
      i++;
    } while (i < N_ULTIME && strcmp(t, ultimeTarghe[0]) != 0);
  }
  fclose(f);
  stampaImporti(l);

  // stampa su file delle ultime N_ULTIME targhe
  f = fopen("ultime.txt", "wt");
  if (f == NULL) {
    printf("Errore apertura file ultime.txt\n");
    exit(3);
  }
  for (i = 0; i < N_ULTIME; i++)
    fprintf(f, "%s\n", ultimeTarghe[i]);
  fclose(f);
  return 0;
}