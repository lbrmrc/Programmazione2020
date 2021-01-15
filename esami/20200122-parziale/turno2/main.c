#include <stdio.h>
#include <stdlib.h>

#include "listaCani.h"

#define N_ULTIME 6

int main(int argc, char* argv[]) {
  FILE* f;
  Lista l;
  Vaccino v;
  if (argc != 2) {
    printf("Uso: %s fileVaccinazioni\n");
    exit(1);
  }
  nuovaLista(&l);
  f = fopen(argv[1], "rb");
  if (f == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }
  // per ogni record letto
  while (fread(&v, sizeof(Vaccino), 1, f) == 1)
    // aggiorno la lista dei cani
    aggiorna(&l, v);
  fclose(f);
  // stampo la lista dei vaccini non effettuati per ogni cane
  stampaVacciniMancanti(l);
  // parte 2
  stampaVaccinati(l);
  return 0;
}