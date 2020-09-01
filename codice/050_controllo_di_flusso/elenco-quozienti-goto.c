#include <stdio.h>

main() {
  int i = 1;
ciclo:
  printf("%d\n", 100 / i);
  i++;
  if (i <= 10)
    goto ciclo;
}