#include <stdio.h>
#include <string.h>

typedef struct {
  char password[16];
  char nome_utente[16];
} credenziali;

int main() {
  char pwd[16];
  credenziali c;
  printf("Nome utente?\n"); scanf("%s", c.nome_utente);
  printf("Password?\n"); scanf("%s", c.password);
  strcpy(pwd, "segreto");
  if (strcmp(c.password, pwd) == 0)
    printf("Accesso consentito per %s\n", c.nome_utente);
  else
    printf("Accesso negato per %s\n", c.nome_utente);
}