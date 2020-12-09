#include <stdio.h>
#define DIM 5

int somma(int v[DIM]) {
  int i, s = 0;
  for (i = 0; i < DIM; i++)
    s += v[i];
  return s;
}

int main(void) {
  int a[DIM] = {4, 1, 0, 8, 5};
  printf("%d\n", sizeof(a));
  printf("%d\n", somma(a)); // stampa 18
}