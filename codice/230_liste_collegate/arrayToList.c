#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;
typedef Nodo* Lista;

Lista* ricerca(Lista* pl) {
  while (*pl)
    pl = &(*pl)->next;
  return pl;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void insCoda(Lista* pl, Dato d) {
  pl = ricerca(pl);
  insTesta(pl, d);
}

Lista arrayToList(int v[], int dl) {
  Lista l = NULL;
  int i;
  for (i = 0; i < dl; i++)
    insCoda(&l, v[i]);
  return l;
}

int main() {
  Lista l;
  int a[] = {2, 5, 1, 0};

  l = arrayToList(a, 4);
  return 0;
}