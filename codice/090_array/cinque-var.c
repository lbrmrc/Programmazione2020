#include <stdio.h>

int main(void) {
  int DIM;
  scanf("%d", &DIM);
  int numeri[DIM];
  int i;
  for (i = 0; i < DIM; i++)
    scanf("%d", &numeri[i]);

  for (i = DIM - 1; i >= 0; i--)
    printf("%d\n", numeri[i]);
  return 0;
}