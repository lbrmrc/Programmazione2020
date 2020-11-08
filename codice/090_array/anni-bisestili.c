#include <stdio.h>
#define DIM 201

int bisestile(int anno) {
  if (anno % 400 == 0)
    return 1;
  if (anno % 4 == 0 && anno % 100 != 0)
    return 1;
  return 0;
}

int main() {
  int a[DIM], b[DIM];
  int i;
  int dl;  // dimensione logica di b

  // ForEach(inizializzazione a 1900 + indice, a)
  for (i = 0; i < DIM; i++)
    a[i] = 1900 + i;

  // Filter(bisestile, a, b)
  dl = 0;
  for (i = 0; i < DIM; i++)
    if (bisestile(a[i])) {
      b[dl] = a[i];
      dl++;
    }

  // ForEach(stampa, b)
  for (i = 0; i < dl; i++)
    printf("%d ", b[i]);
  printf("\n");

  return 0;
}