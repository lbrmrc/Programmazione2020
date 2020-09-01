#include <stdio.h>

main() {
  int i, j;

  int finito = 0;
  for (i = 1; !finito && i <= 10; i++) {
    for (j = 1; !finito && j <= 10; j++) {
      printf("%3d ", i * j);
      if (i * j > 50)
        finito = 1;
    }
    printf("\n");
  }
  printf("Finito\n");
}