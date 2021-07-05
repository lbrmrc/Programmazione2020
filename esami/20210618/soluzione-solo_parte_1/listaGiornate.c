#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaGiornate.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

int confrontoDate(int g1, int m1, int g2, int m2) {
  // < 0 se la data g1/m1 precede g2/m2
  // = 0 se sono uguali
  // > 0 se g2/m2 precede g1/m1
  if (m1 != m2)
    return m1 - m2;
  return g1 - g2;
}

void aggiorna(Lista* pl, Record a) {
  while (*pl != NULL && confrontoDate((*pl)->dato.giorno, (*pl)->dato.mese,
                                      a.giorno, a.mese) != 0)
    pl = &(*pl)->next;
  if (*pl && confrontoDate((*pl)->dato.giorno, (*pl)->dato.mese, a.giorno,
                           a.mese) == 0) {
    (*pl)->dato.ore += a.ore;
  } else {
    Dato d;
    d.giorno = a.giorno;
    d.mese = a.mese;
    d.ore = a.ore;
    insTesta(pl, d);
  }
}

void stampa(Lista l) {
  while (l) {
    printf("%d/%d %.1f\n", l->dato.giorno, l->dato.mese, l->dato.ore);
    l = l->next;
  }
}
