#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

void outputLista(Lista l, FILE *f){
    // analoga alla stampa di una lista
    while (l != NULL){
        fprintf(f, "%s %d\n", l->dato.parola, l->dato.n_occorrenze);
        l = l->next;
    }   
}