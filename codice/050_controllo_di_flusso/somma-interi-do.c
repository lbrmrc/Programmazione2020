#include <stdio.h>

main() {
  int numero, somma = 0;
  do {
    printf("Digita un intero (negativo termina):\n");
    scanf("%d", &numero);
    if (numero >= 0)
      somma += numero;
  } while (numero >= 0);
  printf("La somma e` %d\n", somma);
}