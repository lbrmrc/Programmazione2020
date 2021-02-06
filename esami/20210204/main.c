#include <stdio.h>
#include <stdlib.h>

#include "listaPazienti.h"

int main(int argc, char* argv[]) {
  Rilevazione v;
  FILE* fp;
  Lista l;
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
  while (fread(&v, sizeof(Rilevazione), 1, fp) == 1)
    aggiorna(&l, v);
  fclose(fp);
  eliminaSani(&l); // per la parte 2
  stampa(l);
  return 0;
}
