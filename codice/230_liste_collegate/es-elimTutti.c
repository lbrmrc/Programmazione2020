#include "tipi.h"
#include "generatoreListe.h"
#include "elimTutti.h"

int main(void) {
  Lista l;
  listaNonOrdinata(&l, 4);
  elimTutti(&l, 2);
  return 0;
}