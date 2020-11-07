#include <stdio.h>

int main(void) {
  int numeri[5];
  int i;
  for (i = 0; i < 5; i++)
    scanf("%d", &numeri[i]);

  for (i = 4; i >= 0; i--)
    printf("%d\n", numeri[i]);
}