#include <stdio.h>
#include <stdlib.h>

#include "listaPersone.h"

int main(int argc, char* argv[]) {
  FILE* f;
  Persona p;
  int annoMax;
  Lista l;
  if (argc != 2) {
    printf("Uso: %s filePersone\n", argv[0]);
    exit(1);
  }

  nuovaLista(&l);

  if ((f = fopen(argv[1], "rb")) == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }

  // reduce(insOrd, [], file)
  while (fread(&p, sizeof(Persona), 1, f) == 1)
    insOrd(&l, p);
  fclose(f);

  stampa(l);

  printf("Anno max?\n");
  scanf("%d", &annoMax);
  printf("I nati entro il %d sono %d\n", annoMax, natiEntro(l, annoMax));
  return 0;
}