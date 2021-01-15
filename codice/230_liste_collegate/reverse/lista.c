// Implementazione ADT lista

#include <stdlib.h>
#include <stdio.h>

#include "lista.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux == NULL)
    exit(100);
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void reverse(Lista l1, Lista* pl2) {
  nuovaLista(pl2);
  // ForEach(insTesta(pl2, elemento), l1)
  while (l1) {
    insTesta(pl2, l1->dato);
    l1 = l1->next;
  }
}

void stampa(Lista l) {
  // ForEach(stampa elemento, l)
  while (l) {
    printf("%.2f ", l->dato);
    l = l->next;
  }
  printf("\n");
}
