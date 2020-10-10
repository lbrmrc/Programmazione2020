#include <stdio.h>

main() {
  int pin;
  do
    scanf("%d", &pin); // corpo
  while (pin != 44122);  // condizione di permanenza
  printf("Accesso consentito\n");
}
