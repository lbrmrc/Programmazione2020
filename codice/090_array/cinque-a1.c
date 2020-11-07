#include <stdio.h>

int main(void) {
  int numeri[5];
  scanf("%d", &numeri[0]);
  scanf("%d", &numeri[1]);
  scanf("%d", &numeri[2]);
  scanf("%d", &numeri[3]);
  scanf("%d", &numeri[4]);

  printf("%d\n", numeri[4]);
  printf("%d\n", numeri[3]);
  printf("%d\n", numeri[2]);
  printf("%d\n", numeri[1]);
  printf("%d\n", numeri[0]);

  return 0;
}