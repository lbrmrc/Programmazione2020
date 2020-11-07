#include <stdio.h>
#define DIM 5

int main(void) {
  int m, a[DIM], dl, i, j;

  for (dl = 0; dl < DIM; dl++) {
    scanf("%d", &m);
    j = dl;
    while (j > 0 && m < a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }
  for (i = 0; i < dl; i++)
    printf("%d ", a[i]);
  printf("\n");
}