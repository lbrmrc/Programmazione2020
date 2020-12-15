#include <stdio.h>
#include "tipi.h"

int somma(Lista l) {
  int s = 0;
  while (l) {
    s += l->dato;
    l = l->next;
  }
  return s;
}