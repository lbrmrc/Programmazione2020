#include <stdio.h>

int a;

void incrementa() {
  a++;
}

int main() {
  a = 1;
  printf("%d\n", a);
  incrementa();
  printf("%d\n", a);
  return 0;
}