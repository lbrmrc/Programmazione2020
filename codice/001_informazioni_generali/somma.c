#include <stdio.h>

int main() {
  int a, b, c;
  printf("Immetti due numeri interi:\n");
  scanf("%d%d", &a, &b);
  c = a + b;
  printf("La somma di %d e %d e` %d\n", a, b, c);
  return 0;
}
