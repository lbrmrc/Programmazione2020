#include <stdio.h>

main() {
  int pin;
  int tentativi = 0;
  do {
    tentativi++;
    scanf("%d", &pin);
  } while (tentativi < 3 && pin != 44122);
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}
