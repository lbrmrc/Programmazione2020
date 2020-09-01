#include <stdio.h>

main() {
  int numero, somma = 0;
  while (1) {
    printf("Digita un intero (negativo termina):\n");
    scanf("%d", &numero);
    if (numero < 0)
    break;
    somma += numero;    
  }
  printf("La somma e` %d\n", somma);
}