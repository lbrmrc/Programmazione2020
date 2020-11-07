#include <stdio.h>
#define DIM 201

int bisestile(int anno) {
  return anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0;
}

int main() {
  int a[DIM], b[DIM];
  int i;
  int dl = 0;  // dimensione logica di b
  // ForEach (inizializzazione, a)
  for (i = 0; i < DIM; i++)
    a[i] = 1900 + i;

  // b <- Filter(Bisestile, a)
  for (i = 0; i < DIM; i++)
    if (bisestile(a[i]))  // a[i] è bisestile
    {
      b[dl] = a[i];
      dl++;
    }

  // ForEach (stampa, b)
  for (i = 0; i < dl; i++)
    printf("%d ", b[i]);
  printf("\n");
  return 0;
}