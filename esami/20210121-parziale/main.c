#include <stdio.h>
#include <stdlib.h>

#include "listaUrl.h"

int main(int argc, char* argv[]) {
  Visita v;
  FILE* fp;
  Lista l, lOrd;
  if (argc != 2) {
    printf("Uso: %s fileVisite\n", argv[0]);
    exit(1);
  }
  if ((fp = fopen(argv[1], "rb")) == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }
  nuovaLista(&l);
  // solita reduce(aggiorna,[],file)
  while (fread(&v, sizeof(Visita), 1, fp) == 1)
    aggiorna(&l, v);
  fclose(fp);
  stampa(l);
  // parte 2
  printf("\n");
  ordina(l, &lOrd);
  stampa(lOrd);
  return 0;
}
