// stampa 5 righe di 20 asterischi

#include <stdio.h>

star() {
  int i;
  for (i = 0; i < 20; i++)
    printf("*");
  printf("\n");
}

main() {
  int j;
  for (j = 0; j < 5; j++)
    star();
}