#include <stdio.h>

main() {
  int dividendo, divisore;
  scanf("%d%d", &dividendo, &divisore);
  printf("Q: %d\n", dividendo / divisore);
  printf("R: %d\n", dividendo % divisore);
}