#include "tipi.h"
#include "insOrd.h"

int main(void) {
  Lista l;
  nuovaLista(&l);
  insOrd(&l, 3);
  insOrd(&l, 1);
  insOrd(&l, 4);
  insOrd(&l, 2);
  return 0;
}