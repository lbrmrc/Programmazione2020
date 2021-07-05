#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaGiornate.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Record d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

int confronto(Record r1, Record r2) {
  // confronta i record per data e, se le date sono uguali, per ordine
  // lessicografico dell'attività svolta
  // restituisce < 0 se r1 precede r2, = 0 se sono
  // uguali, > 0 se r2 precede r1
  if (r1.mese != r2.mese)
    return r1.mese - r2.mese;
  if (r1.giorno != r2.giorno)
    return r1.giorno - r2.giorno;
  return strcmp(r1.attivita, r2.attivita);
}

void aggiorna(Lista* pl, Record a) {
  while (*pl != NULL && confronto((*pl)->dato, a) < 0)
    pl = &(*pl)->next;
  if (*pl && confronto((*pl)->dato, a) == 0) {
    (*pl)->dato.ore += a.ore;
  } else
    insTesta(pl, a);
}

void stampa(Lista l) {
  float oreTotali = 0.;
  int mese, giorno;
  if (l == NULL)
    return;
  do {
    printf("%d/%d, %s: %.1f ore\n", l->dato.giorno, l->dato.mese,
           l->dato.attivita, l->dato.ore);
    oreTotali += l->dato.ore;
    mese = l->dato.mese;
    giorno = l->dato.giorno;
    l = l->next;
    if (l == NULL || l->dato.mese != mese || l->dato.giorno != giorno) {
      printf("Ore totali del giorno %d/%d: %.1f\n", giorno, mese, oreTotali);
      oreTotali = 0.;
    }
  } while (l != NULL);
}
