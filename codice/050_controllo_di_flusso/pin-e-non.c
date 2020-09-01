#include <stdio.h>

main() {
  int pin;
  scanf("%d", &pin);
  if (pin == 44122)
    printf("Accesso consentito\n");
  if (pin != 44122)
    printf("Accesso negato\n");
}
