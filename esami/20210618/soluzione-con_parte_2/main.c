#include <stdio.h>
#include <stdlib.h>

#include "listaGiornate.h"

int main(int argc, char* argv[]) {
  Record a;
  FILE* fp;
  Lista l;
  if (argc != 2) {
    printf("Uso: %s fileVisite\n", argv[0]);
    exit(1);
  }
  nuovaLista(&l);
  if ((fp = fopen(argv[1], "rb")) == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }
  while (fread(&a, sizeof(Record), 1,fp) == 1) {
    aggiorna(&l,a);
  }
  fclose(fp);
  stampa(l);
  return 0;
}
