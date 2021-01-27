#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaUrl.h"

int confrontoOrari(int o1, int m1, int o2, int m2) {
  // restituisce un valore < 0 se o1:m1 precede o2:m2
  // 0 se o1:m1 e o2:m2 sono uguali
  // > 0 se o1:m1 segue o2:m2
  if (o1 != o2)
    return o1 - o2;
  else
    return m1 - m2;
}

int confrontoDati(Dato d1, Dato d2) {
  // restituisce un valore < 0 se d1 precede d2
  // secondo la relazione d'ordine specificata nella parte 2
  // = 0 se sono uguali ai fini dell'ordine
  // > 0 se  d2 precede d1
  if (d1.visite != d2.visite)
    return d2.visite - d1.visite;
  else
    return -confrontoOrari(d1.oreUltimaVisita, d1.minutiUltimaVisita,
                           d2.oreUltimaVisita, d2.minutiUltimaVisita);
}

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void insOrd(Lista* pl, Dato d) {
  while (*pl && confrontoDati((*pl)->dato, d) < 0)
    pl = &(*pl)->next;
  insTesta(pl, d);
}

void ordina(Lista l, Lista* plOrd) {
  // *plOrd è l ordinata con insertionSort
  nuovaLista(plOrd);
  while (l) {
    insOrd(plOrd, l->dato);
    l = l->next;
  }
}

void aggiorna(Lista* pl, Visita v) {
  // se non esiste un elemento per l'URL lo crea,
  // altrimenti ne incrememnta il contatore
  // e se necessario aggiorna l'orario della visita più recente
  int trovato = 0;
  while (!trovato && *pl != NULL) {
    if (strcmp((*pl)->dato.url, v.url) == 0) {
      (*pl)->dato.visite++;
      if (confrontoOrari((*pl)->dato.oreUltimaVisita,
                         (*pl)->dato.minutiUltimaVisita, v.ore, v.minuti) < 0) {
        (*pl)->dato.oreUltimaVisita = v.ore;
        (*pl)->dato.minutiUltimaVisita = v.minuti;
      }
      trovato = 1;
    }
    pl = &(*pl)->next;
  }
  if (!trovato) {
    Dato d;
    strcpy(d.url, v.url);
    d.visite = 1;
    d.oreUltimaVisita = v.ore;
    d.minutiUltimaVisita = v.minuti;
    insTesta(pl, d);
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    if (l->dato.visite >= 5)
      printf("%s %d %d:%s%d\n", l->dato.url, l->dato.visite,
             l->dato.oreUltimaVisita,
             (l->dato.minutiUltimaVisita < 10 ? "0" : ""),
             l->dato.minutiUltimaVisita);
    l = l->next;
  }
}