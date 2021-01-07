#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(int argc, char* argv[]) {
  Lista l, l_ordinata;
  FILE *f_in, *f_out;
  char parola[LUNGHEZZA_MAX];

  if (argc != 3) {
    printf("Uso: %s file_in file_out\n", argv[0]);
    exit(3);
  }

  f_in = fopen(argv[1], "rt");
  if (f_in == NULL) {
    printf("Impossibile aprire %s\n", argv[1]);
    exit(1);
  }

  nuovaLista(&l);
  // elaborazione di f_in attraverso l
  // reduce (aggiornaLista, [], f_in)
  while (fscanf(f_in, "%s", parola) == 1)
    aggiornaLista(&l, parola);
  fclose(f_in);

  nuovaLista(&l_ordinata);
  ordina(l, &l_ordinata);

  f_out = fopen(argv[2], "wt");
  if (f_out == NULL) {
    printf("Impossibile aprire %s\n", argv[2]);
    exit(2);
  }
  outputLista(l_ordinata, f_out);
  fclose(f_out);

  return 0;
}