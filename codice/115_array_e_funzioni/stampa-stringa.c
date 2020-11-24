#include <stdio.h>

void stampa_stringa(char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; i++)
    printf("%c", s[i]);
}

int main(void) {
  char parola[10] = "Ferrara";
  stampa_stringa(parola);
  printf("\n");
  return 0;
}