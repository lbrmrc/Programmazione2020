#include <stdio.h>

main() {
  int scelta;
  printf("###############\n");
  printf("#   Rubrica   #\n");
  printf("###############\n");
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  if (scelta > 0) {
    printf("###############\n");
    printf("#   Rubrica   #\n");
    printf("###############\n");
    printf("Chiamata del contatto %d in corso\n", scelta);
  }
  printf("Fine\n");
}