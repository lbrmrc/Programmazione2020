#include <stdio.h>
#define DIM 5

main() {
  int a[DIM], b[DIM], i, j = 0;

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < DIM; i++)
    if (a[i] > 0)
      b[i] = a[i];
}