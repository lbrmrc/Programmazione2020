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
  Record r;
  float oreTotaliGiornata;
  if (l == NULL)
    return;
  oreTotaliGiornata = 0.;
  r.ore = 0;
  do {
    oreTotaliGiornata += l->dato.ore;
    r.ore += l->dato.ore;
    r.giorno = l->dato.giorno;
    r.mese = l->dato.mese;
    strcpy(r.attivita, l->dato.attivita);
    l = l->next;
    if (l == NULL || confronto(r, l->dato) != 0) {
      printf("%d/%d %s: %.1f\n", r.giorno, r.mese, r.attivita, r.ore);
      r.ore = 0.;
    }
    if (l == NULL || r.giorno != l->dato.giorno || r.mese != l->dato.mese) {
      printf("Ore totali del giorno %d/%d: %.1f\n", r.giorno, r.mese,
             oreTotaliGiornata);
      oreTotaliGiornata = 0.;
    }
  } while (l != NULL);
}
