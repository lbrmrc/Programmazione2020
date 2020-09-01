#include <stdio.h>

main() {
  int pin, scelta;
  scanf("%d", &pin);
  if (pin == 44122) {
    printf("Accesso consentito\n");
    printf("1. Tizio 335-1234567\n");
    printf("2. Caio 347-1234567\n");
    printf("Scegliere un contatto");
    scanf("%d", &scelta);
    printf("Chiamata al contatto %d\n", scelta);
  } else {
    printf("Accesso negato\n");
    printf("Il programma sta per terminare\n");
  }
  printf("Fine\n");
}