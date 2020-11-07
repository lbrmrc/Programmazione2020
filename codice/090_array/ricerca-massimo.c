#include <stdio.h>
#define DIM 10

main() {
  int a[DIM], i, m;

  // ...
  m = 0;
  for (i = 1; i < DIM; i++)
    if (/* a[i] supera a[m] secondo 
        la proprieta` desiderata */)
      m = i;

  // l'elemento massimo e` all'indice m
}