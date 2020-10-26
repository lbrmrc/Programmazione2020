#include <stdio.h>

int potenza(int base, int esp) {
  int cont, prod = 1;
  for (cont = 0; cont < esp; cont++)
    prod *= base;
  return prod;
}

main() {
  int a = 3;
  int b = 2;
  printf("%d\n", potenza(a, b));
  printf("%d\n", potenza(b, a));
}