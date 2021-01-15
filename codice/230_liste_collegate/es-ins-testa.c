#include "tipi.h"
#include "generatoreListe.h"
#include "insTesta.h"

int main(void) {
  Lista l;
  listaNonOrdinata(&l, 3);
  insTesta(&l, 5);
  return 0;
}