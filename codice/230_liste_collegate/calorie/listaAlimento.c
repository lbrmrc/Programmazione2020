#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaAlimento.h"

Lista* ricerca(Lista* pl) {
  while (*pl)
    pl = &(*pl)->next;

  return pl;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void insCoda(Lista* pl, Dato d) {
  pl = ricerca(pl);
  insTesta(pl, d);
}

void caricaCalorie(char nomeFileBinario[], Lista* pl) {
  int numero;
  Dato d;
  FILE* fb;
  fb = fopen(nomeFileBinario, "rb");
  if (fb == NULL) {
    printf("Impossibile aprire %s\n", nomeFileBinario);
    exit(3);
  }

  *pl = NULL;
  while (fread(&d, sizeof(Dato), 1, fb) == 1)
    insCoda(pl, d);

  fclose(fb);
}

float calorieAlimento(char nomeAlimento[], Lista l) {
  while (l != NULL) {
    if (strcmp(nomeAlimento, l->dato.nome) == 0)
      return l->dato.calorie;
    l = l->next;
  }
  printf("Alimento non trovato\n");
  exit(4);
}