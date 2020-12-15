#include <stdio.h>
#include "tipi.h"
#include "generatoreListe.h"
#include "stampa.h"

int main(void) {
  Lista l;
  listaNonOrdinata(&l, 3);
  stampa(l);  
  return 0;
}