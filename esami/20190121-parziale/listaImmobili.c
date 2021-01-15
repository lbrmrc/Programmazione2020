#include <stdio.h>
#include <stdlib.h>

#include "listaImmobili.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Immobile imm) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = imm;
  aux->next = *pl;
  *pl = aux;
}

void insOrd(Lista* pl, Immobile imm) {
  // salto tutti gli immobili con distanza minore
  while (*pl && (*pl)->dato.distanzaDalCentro < imm.distanzaDalCentro)
    pl = &(*pl)->next;

  insTesta(pl, imm);
}

int precede(Immobile imm1, Immobile imm2) {
  // la relazione di ordine specificata
  return imm1.nVani > imm2.nVani ||
         imm1.nVani == imm2.nVani &&
             imm1.distanzaDalCentro < imm2.distanzaDalCentro;
}

void insOrdNVani(Lista* pl, Immobile imm) {
  // salto tutti gli immobili che precedono quello da inserire
  // secondo la relazione definita sopra
  while (*pl && precede((*pl)->dato, imm))
    pl = &(*pl)->next;
  insTesta(pl, imm);
}

void stampa(Lista l, FILE* f) {
  // una funzione sola per stampa su standard output e su file
  while (l) {
    fprintf(f, "%s %d %.3f\n", l->dato.indirizzo, l->dato.nVani,
            l->dato.distanzaDalCentro);
    l = l->next;
  }
}

Lista filtra(Lista l, int nVaniMin) {
  // restituisce una seconda lista, ordinata come specificato,
  // contenente gli immobili con almeno nVaniMin vani
  Lista l2;
  nuovaLista(&l2);
  while (l) {
    if (l->dato.nVani >= nVaniMin)
      insOrdNVani(&l2, l->dato);
    l = l->next;
  }
  return l2;
}
