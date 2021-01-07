#include <stdlib.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux;
  aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void concatena(Lista* pl1, Lista l2) {
  // inizialmente, *pl1 è l1
  // alle successive  iterazioni, *pl1 è il campo next di un nodo della lista l1
  while (*pl1 != NULL)
    pl1 = &(*pl1)->next;
  *pl1 = l2;
}

int main() {
  Lista l1, l2;

  nuovaLista(&l1);
  nuovaLista(&l2);

  // inserisco 2 in testa a l1
//   insTesta(&l1, 2);
//   insTesta(&l1, 1);

  insTesta(&l2, 4);
  insTesta(&l2, 3);

  concatena(&l1, l2);

  return 0;
}