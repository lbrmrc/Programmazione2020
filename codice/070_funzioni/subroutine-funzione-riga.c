#include <stdio.h>

riga(int n, char carattere) {
  int i;
  for (i = 0; i < n; i++)
    printf("%c", carattere);
  printf("\n");
}

logo(char carattere) {
  riga(15, carattere);
  printf("%c   Rubrica   %c\n", carattere, carattere);
  riga(15, carattere);
}

main() {
  int scelta, ritorno;
  logo('*');
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  logo('#');
  printf("Chiamata del contatto %d in corso\n", scelta);
  printf("Fine\n");
}