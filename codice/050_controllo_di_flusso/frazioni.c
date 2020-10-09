#include <stdio.h>

main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if (a * d == b * c)
    printf("Stesso numero\n");
  else
    printf("Non stesso numero\n");
}