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

void elimTutti(Lista* pl, int d) {
  while (*pl) {
    pl = ricerca(pl, d);
    if (*pl)
      elimTesta(pl);
  }
}