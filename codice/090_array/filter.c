#include <stdio.h>
#define DIM 10

main() {
  int a[DIM], b[DIM], i, j;
  // ...
  j = 0;
  for (i = 0; i < DIM; i++)
    if (/* proprieta` desiderata di a[i] */) {
      b[j] = a[i];
      j++;
    }
  // qui b ha dimensione logica j e contiene 
  // tutti gli elementi di a con la
  // proprieta` desiderata
}