// stampa la sequenza dei divisori del numero naturale dato in input

#include <stdio.h>

main() {
  int numero, i;

  printf("Inserisci un numero naturale\n");
  scanf("%d", &numero);

  for (i = 1; i <= numero; i++) {
    // i assume i valori della sequenza fra 1 e numero
    if (numero % i == 0)  // i è divisore di numero
    {
      // i assume i valori della sequenza dei divisori di numero
      printf("%d\n", i);
    }
  }
}