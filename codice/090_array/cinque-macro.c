#include <stdio.h>
#define DIM 5

int main(void) {
  int numeri[DIM];
  int i;
  for (i = 0; i < DIM; i++)
    scanf("%d", &numeri[i]);

  for (i = DIM - 1; i >= 0; i--)
    printf("%d\n", numeri[i]);

  return 0;
}