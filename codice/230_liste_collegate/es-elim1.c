#include "tipi.h"
#include "generatoreListe.h"
#include "elim1.h"

int main(void) {
  Lista l;
  listaNonOrdinata(&l, 4);
  elim1(&l, 2);
  return 0;
}