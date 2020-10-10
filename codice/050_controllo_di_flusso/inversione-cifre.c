#include <stdio.h>

main() {
  int n;

  scanf("%d", &n);  // input del numero

  while (n > 0)  // condizione di permanenza: c'è almeno una cifra
  {
    // corpo del ciclo
    printf("%d", n % 10);  // stampa dell'ultima cifra
    n = n / 10;  // aggiornamento di n a se stesso esclusa ultima cifra
    // n /= 10;
  }

  printf("\n");
}