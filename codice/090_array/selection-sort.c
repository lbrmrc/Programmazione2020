#include <stdio.h>
#define DIM 5
int main() {
  int a[] = {4, 1, 8, 0, 5}, i;

  for (i = 0; i < DIM - 1; i++) {
    int min = i, j;
    for (j = i + 1; j < DIM; j++)
      if (a[j] < a[min])
        min = j;
    if (i != min) {
      int temp = a[min];
      a[min] = a[i];
      a[i] = temp;
    }
  }
  for (i = 0; i < DIM; i++)
    printf("%d ", a[i]);
  printf("\n");
}