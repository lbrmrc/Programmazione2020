#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funzioniCalorie.h"

int caricaCalorie(char nomeFileBinario[], Alimento alimenti[]) {
  int numero;
  FILE* fb;
  fb = fopen(nomeFileBinario, "rb");
  if (fb == NULL) {
    printf("Impossibile aprire %s\n", nomeFileBinario);
    exit(3);
  }
  numero = fread(alimenti, sizeof(Alimento), 1000, fb);

  fclose(fb);
  return numero;
}

float calorieAlimento(char nomeAlimento[],
                      Alimento alimenti[],
                      int n_alimenti) {
  int i;
  for (i = 0; i < n_alimenti; i++)
    if (strcmp(nomeAlimento, alimenti[i].nome) == 0)
      return alimenti[i].calorie;
  printf("Alimento non trovato\n");
  exit(4);
}