#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listino.h"

typedef struct {
  int codice;
  char descrizione[30];
  float prezzo;
} Record;

int main(int argc, char* argv[]) {
  int codice;
  Lista l;
  FILE* fb;
  VoceListino prezzi[DIM];
  Record r;

  if (argc != 2) {
    printf("Uso: %s listino\n");
    exit(-1);
  }

  if ((fb = fopen(argv[1], "rb")) == 0) {
    printf("Errore apertura %s\n", argv[1]);
    exit(-2);
  }

  while (fread(&r, sizeof(Record), 1, fb) == 1) {
    strcpy(prezzi[r.codice].descrizione, r.descrizione);
    prezzi[r.codice].prezzo = r.prezzo;
  }
  fclose(fb);

  nuovaLista(&l);
  do {
    scanf("%d", &codice);
    if (codice >= 0)
      registraConsumazione(&l, codice);
  } while (codice >= 0);

  scontrino(l, prezzi);

  return 0;
}
