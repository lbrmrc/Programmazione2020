#include <stdio.h>
#include <string.h>
#include "stringhe.h"

int main() {
  int accesso_consentito = 0;
  char password[4];
  
  printf("Password?\n");
  leggiStringa(password,3);

  if (strcmp(password, "abc") == 0)
    accesso_consentito = 1;
  if (accesso_consentito)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}