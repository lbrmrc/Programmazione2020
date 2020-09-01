#include <stdio.h>

main() {
  int pin, scelta;
  scanf("%d", &pin);
  if (pin == 44122) printf("Accesso consentito\n");
  if (pin == 44122) printf("1. Tizio 335-1234567\n");
  if (pin == 44122) printf("2. Caio 347-1234567\n");
  if (pin == 44122) printf("Scegliere un contatto");
  if (pin == 44122) scanf("%d", &scelta);
  if (pin == 44122)
    printf("Chiamata al contatto %d\n", scelta);
  printf("Fine\n");
}