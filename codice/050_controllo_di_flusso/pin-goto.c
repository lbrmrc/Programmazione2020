#include <stdio.h>

main() {
  int pin;
richiesta:
  scanf("%d", &pin);
  if (pin != 44122)
    goto richiesta;
  printf("Accesso consentito\n");
}
