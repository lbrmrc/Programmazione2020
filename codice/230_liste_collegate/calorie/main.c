#include <stdio.h>
#include <stdlib.h>

#include "listaAlimento.h"

int main(int argc, char* argv[]) {
  char nome[31];
  float quantita;
  Lista l;
  float calorieTotali;

  FILE* ft;
  if (argc != 3) {
    printf("Uso: %s fileCalorie filePasto\n", argv[0]);
    exit(1);
  }

  caricaCalorie(argv[1], &l);

  if ((ft = fopen(argv[2], "rt")) == NULL) {
    printf("Errore apertura file %s", argv[2]);
    exit(2);
  }

  calorieTotali = 0.0;
  // map sulle righe del file di testo e reduce
  while (fscanf(ft, "%s%f", nome, &quantita) == 2)
  // calcolo calorie dell'alimento
  {
    float calorie100 = calorieAlimento(nome, l);
    float calorieConsumate = calorie100 * quantita / 100.0;
    calorieTotali += calorieConsumate;
  }

  fclose(ft);

  printf("Calorie totali: %.1f\n", calorieTotali);
  return 0;
}