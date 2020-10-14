#include <stdio.h>

main() {
  int n1, n2, n3;

  printf("inserisci tre numeri interi\n");

  scanf("%d%d%d", &n1, &n2, &n3);

  if (n1 >= n2)

    if (n1 >= n3)

      printf("%d\n", n1);

  if (n2 > n1)

    if (n2 >= n3)

      printf("%d\n", n2);

  if (n3 > n1)

    if (n3 > n2)

      printf("%d\n", n3);
}