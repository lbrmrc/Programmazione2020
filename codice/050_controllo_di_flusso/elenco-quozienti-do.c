#include <stdio.h>

main() {
  int i = 1;
  do {
    printf("%d\n", 100 / i);
    i++;
  } while (i <= 10);
}