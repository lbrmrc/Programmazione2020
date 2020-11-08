#include <stdio.h>
#define DIM 5

int main(void) {
  int a[] = {4, 1, 8, 0, 5}, i, dlo;

  for (dlo = 0; dlo < DIM; dlo++) {
    int j = dlo, m = a[dlo];
    while (j > 0 && m < a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }
  for (i = 0; i < DIM; i++)
    printf("%d ", a[i]);
  printf("\n");
}