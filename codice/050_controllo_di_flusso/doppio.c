#include <stdio.h>

main() {
  int n;

// corpo del ciclo: input e output
input:
  printf("Inserisci un intero (negativo termina)\n");
  scanf("%d", &n);
  printf("%d\n", n * 2);
  if (n >= 0) // condizione di permanenza
    goto input; // salto all'inizio del corpo
  else
    printf("Fine\n");
}