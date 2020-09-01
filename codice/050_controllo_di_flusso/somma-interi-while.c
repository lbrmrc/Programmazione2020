#include <stdio.h>

main() {
  int numero, somma = 0;
  printf("Digita un intero (negativo termina):\n");
  scanf("%d", &numero);
  while (numero >= 0) {
    somma += numero;
    printf("Digita un intero (negativo termina):\n");
    scanf("%d", &numero);
  }
  printf("La somma e` %d\n", somma);
}