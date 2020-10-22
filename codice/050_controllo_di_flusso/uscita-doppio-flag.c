#include <stdio.h>

main() {
  int i, j;

  int finito = 0; // flag
  for (i = 1; !finito && i <= 10; i++) {
    for (j = 1; !finito && j <= 10; j++) {
      printf("%3d ", i * j);
      if (i * j > 50)
        finito = 1; // flag diventa vero quando abbiamo stampato un numero maggiore di 50
    }
    printf("\n");
  }
  printf("Finito\n");
}