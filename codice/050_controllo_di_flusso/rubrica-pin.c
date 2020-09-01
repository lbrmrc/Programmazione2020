#include <stdio.h>

main() {
  int pin, scelta;
  scanf("%d", &pin);
  if (pin == 44122)
    printf("Accesso consentito\n");
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  printf("Chiamata al contatto %d in corso\n", scelta);
  printf("Fine\n");
}