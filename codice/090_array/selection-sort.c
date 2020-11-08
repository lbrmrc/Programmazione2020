#include <stdio.h>
#define DIM 5
int main() {
  int a[] = {4, 1, 8, 0, 5}, dlo;

  for (dlo = 0; dlo < DIM - 1; dlo++) {
    int min = dlo, j;
    for (j = dlo + 1; j < DIM; j++)
      if (a[j] < a[min])
        min = j;
    if (dlo != min) {
      int temp = a[min];
      a[min] = a[dlo];
      a[dlo] = temp;
    }
  }
  for (dlo = 0; dlo < DIM; dlo++)
    printf("%d ", a[dlo]);
  printf("\n");
}