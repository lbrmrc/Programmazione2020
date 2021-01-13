#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaUtenti.h"

typedef struct {
  char cf[17];
} CodiceFiscale;

int main(int argc, char* argv[]) {
  FILE* fb;
  FILE* ft;
  Lista l;
  CodiceFiscale c;
  char codice[17];
  int attivita;

  if (argc != 3) {
    printf("Uso: %s fileUtenti fileIngressi\n", argv[0]);
    exit(1);
  }

  nuovaLista(&l);

  if ((fb = fopen(argv[1], "rb")) == 0) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  // l = map (<cf, 4,4,4>, FILE_CF)
  while (fread(&c, sizeof(CodiceFiscale), 1, fb) == 1) {
    Dato d;
    strcpy(d.cf, c.cf);
    d.att1 = 4;
    d.att2 = 4;
    d.att3 = 4;
    insTesta(&l, d);
  }
  fclose(fb);

  if ((ft = fopen(argv[2], "rt")) == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }
  // reduce (decrementoContatoreOErrore, l,  FILE_INGRESSI)
  while (fscanf(ft, "%s%d", codice, &attivita) == 2) {
    decrementoContatoreOErrore(&l, codice, attivita);
  }
  fclose(ft);
  stampa(l);

  return 0;
}