#include <stdio.h>

main() {
  int i, numero, somma = 0;
  for (i = 0; i < 5; i++) {
    printf("Digita un intero:\n");
   scanf("%d", &numero);

    if (numero < 0)
      goto fine_iterazione;
    somma += numero;
  fine_iterazione:;
  }
  printf("La somma e` %d\n", somma);
}