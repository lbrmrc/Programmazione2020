#include <stdio.h>

int somma(int v[], int dl) {
  int i, s = 0;
  for (i = 0; i < dl; i++)
    s += v[i];
  return s;
}

int main(void) {
  int a[5] = {4, 1, 0, 8, 5};
  printf("%d\n", somma(a, 5));  // stampa 18
}