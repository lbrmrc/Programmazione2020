#include <stdio.h>
#define DIM 5

main() {
  int a[DIM], i, s;

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  s = 0;
  for (i = 0; i < DIM; i++)
    s = s + a[i];
}