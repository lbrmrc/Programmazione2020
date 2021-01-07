#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiornaLista(Lista* pl, char parola[LUNGHEZZA_MAX]) {
  // se parola non è già presente
  // crea un nuovo elemento per parola con n_occorrenze 1
  // altrimenti
  // incrementa n_occorrenze dell'elemento corrispondente

  int trovata = 0;

  while (*pl != NULL) {
    if (strcmp(parola, (*pl)->dato.parola) == 0) {
      trovata = 1;
      (*pl)->dato.n_occorrenze++;
    }
    pl = &(*pl)->next;
  }

  if (!trovata) {
    Dato d;
    strcpy(d.parola, parola);
    d.n_occorrenze = 1;
    insTesta(pl, d);
  }
}

void outputLista(Lista l, FILE* f) {
  // analoga alla stampa di una lista
  while (l != NULL) {
    fprintf(f, "%s %d\n", l->dato.parola, l->dato.n_occorrenze);
    l = l->next;
  }
}

int precede(Dato d1, Dato d2) {
  if (d1.n_occorrenze > d2.n_occorrenze)
    return 1;
  if (d1.n_occorrenze == d2.n_occorrenze && strcmp(d1.parola, d2.parola) < 0)
    return 1;
  return 0;
}

Lista* ricerca(Lista* pl, Dato d) {
  while (*pl != NULL && precede((*pl)->dato, d)) {
    pl = &(*pl)->next;
  }
  return pl;
}

void insOrd(Lista* pl, Dato d) {
  pl = ricerca(pl, d);
  insTesta(pl, d);
}

void ordina(Lista l, Lista* pl_ord) {
  while (l) {
    insOrd(pl_ord, l->dato);
    l = l->next;
  }
}