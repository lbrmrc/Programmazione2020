#include <stdio.h>

main() {
  int numero, somma = 0;
richiedi:
  printf("Digita un intero (negativo termina):\n");
  scanf("%d", &numero);
  if (numero < 0)
    goto fine;
  somma += numero;
  goto richiedi;
fine:
  printf("La somma e` %d\n", somma);
}