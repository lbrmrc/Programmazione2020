#include <malloc.h>
#include "tipi.h"
#include "elimTesta.h"

Lista* ricerca(Lista* pl, int d) {
  while (*pl) {
    if ((*pl)->dato == d)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

int elim1(Lista* pl, int d) {
  pl = ricerca(pl, d);
  if (*pl) {
    elimTesta(pl);
    return 1;
  } else
    return 0;
}