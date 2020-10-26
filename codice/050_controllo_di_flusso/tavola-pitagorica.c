// stampa della tavola pitagorica

#include <stdio.h>

main() {
  // prima riga: sequenza 1, 2, 3, 4,... 10
  int i, j;

  for (i = 1; i <= 10; i++) {
    // i assume i valori della sequenza 1, 2, ... , 10
    // i-esima riga
    for (j = 1; j <= 10; j++)
      // j assume i valori della sequenza 1, 2, ... , 10
      // j-esima colonna
      printf("%d ", i * j);
    printf("\n");
  }
}