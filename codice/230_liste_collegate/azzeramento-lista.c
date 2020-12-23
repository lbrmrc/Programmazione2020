#include <stdio.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

#include "generatoreListe.h"

void azzera(Lista l) {
  // ForEach(assegna 0, l)
  while (l) {
    // agisco sulla testa di l (l->dato)
    l->dato = 0;
    // assegno a l la sua coda (l->next),
    // passo all'elemento successivo
    l = l->next;
  }
}

void stampa(Lista l) {
  // ForEach (stampa, l)
  while (l) {
    printf("%d\n", l->dato);
    l = l->next;
  }
}

int main() {
  Lista l;
  listaNonOrdinata(&l, 6);
  azzera(l);
  stampa(l);
  return 0;
}