#include <stdio.h>
#include "tipi.h"

void stampa(Lista l) {
  while (l) {
    printf("%d ", l->dato);
    l = l->next;
  }
  printf("\n");
}