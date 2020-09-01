#include <stdio.h>

main() {
  int dividendo;
  printf("Inserisci un numero intero\n");
  scanf("%d", &dividendo);
  printf("Q: %d\n", dividendo / 7);
  printf("R: %d\n", dividendo % 7);
}