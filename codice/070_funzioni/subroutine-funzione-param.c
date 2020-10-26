#include <stdio.h>

logo(char carattere) {
  int i;
  for (i = 0; i < 15; i++)
    printf("%c", carattere);
  printf("\n");
  printf("%c   Rubrica   %c\n", carattere, carattere);
  for (i = 0; i < 15; i++)
    printf("%c", carattere);
  printf("\n");
}

main() {
  int scelta;

  logo('*');
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);

  logo('#');
  printf("Chiamata del contatto %d in corso\n", scelta);

  printf("Fine\n");
}