#include "tipi.h"
#include "generatoreListe.h"
#include "elimTesta.h"

int main(void) {
  Lista l;
  listaNonOrdinata(&l, 3);
  elimTesta(&l);
  return 0;
}