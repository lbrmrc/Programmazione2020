#include <stdio.h>

main() {
  int scelta;
  printf("*** Rubrica ***\n");
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto (-1 per terminare)\n");
  scanf("%d", &scelta);
  if (scelta > 0) {
    printf("*** Rubrica ***\n");
    printf("Chiamata del contatto %d in corso\n", scelta);
  }
  printf("Fine\n");
}