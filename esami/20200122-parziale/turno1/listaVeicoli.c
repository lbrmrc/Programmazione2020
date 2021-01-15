#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "listaVeicoli.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Veicolo v) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = v;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista* pl, char targa[]) {
  while (*pl && strcmp((*pl)->dato.targa, targa) != 0)
    pl = &(*pl)->next;
    // se il veicolo non è già presente nella lista aggiungo il relativo elemento in coda
  if (*pl == NULL) {
    Veicolo v;
    strcpy(v.targa, targa);
    v.accessi = 0;
    insTesta(pl, v);
  }
  // in ogni caso incremento il contatore degli accessi
  (*pl)->dato.accessi++;
}

float importo(int accessi) {
  // calcola l'importo che dipende dal numero di accessi
  if (accessi <= 0)
    return 0.0;
  if (accessi <= 5)
    return 2.0 * accessi;
  if (accessi <= 10)
    return 1.9 * accessi;
  return 1.8 * accessi;
}

void stampaImporti(Lista l) {
  while (l != NULL) {
    printf("%s %.2f\n", l->dato.targa, importo(l->dato.accessi));
    l = l->next;
  }
}
