#include <stdio.h>

main() {
  int scelta, ritorno, i; char carattere;
  ritorno = 1; carattere = '*'; goto logo;
elenco:
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  ritorno = 2; carattere = '#'; goto logo;
chiamata:
  printf("Chiamata del contatto %d in corso\n", scelta);
  goto fine;
logo:
  for (i = 0; i < 15; i++)
    printf("%c", carattere);
  printf("\n");
  printf("%c   Rubrica   %c\n", carattere, carattere);
  for (i = 0; i < 15; i++)
    printf("%c", carattere);
  printf("\n");
  if (ritorno == 1) goto elenco;
  else if (ritorno == 2) goto chiamata;
fine:
  printf("Fine\n");
}