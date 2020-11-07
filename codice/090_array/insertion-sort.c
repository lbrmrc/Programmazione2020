#include <stdio.h>
#define DIM 5

int main(void) {
  int a[] = {4, 1, 8, 0, 5}, i, dl = 0;

  for (dl = 0; dl < DIM; dl++) {
    int j = dl, m = a[dl];
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