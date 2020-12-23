#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;
typedef Nodo* Lista;

#include "generatoreListe.h"

int lunghezza(Lista l) {
  int c = 0;
  while (l) {
    c++;
    l = l->next;
  }
  return c;
}

int* listToArray(Lista l) {
  int *p, i;
  int n = lunghezza(l);
  p = (int*)malloc(sizeof(int) * n);
  // ForEach (assegna elemento a elemento i++-esimo dell'array, l)
  i = 0;
  while (l) {
    p[i] = l->dato;
    i++;
    l = l->next;
  }
  return p;
}

int main() {
  Lista l;
  int *p, i, n;
  listaNonOrdinata(&l, 6);
  p = listToArray(l);
  n = lunghezza(l);
  for (i = 0; i < n; i++) {
    printf("%d\n", p[i]);
  }
  return 0;
}