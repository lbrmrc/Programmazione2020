#include <stdio.h>

main() {
  int pin;
  int tent = 0;
  do {
    // corpo
    scanf("%d", &pin);
    tent++;
  } while (pin != 44122 && tent < 3);  // condizione di permanenza
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
 }