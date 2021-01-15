#include "tipi.h"

Lista* ricerca(Lista* pl, Dato d) {
  // finche' la lista ha elementi
  while (*pl) {
    // se l'elemento corrente ha la proprieta` desiderata
    if ((*pl)->dato == d)
      // esco
      break;
    // altrimenti passo all'elemento successivo
    pl = &(*pl)->next;
  }
  // qui l e` l'indirizzo della lista desiderata, o di quella vuota
  return pl;
}