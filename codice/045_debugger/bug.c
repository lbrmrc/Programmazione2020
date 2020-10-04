#include <stdio.h>

main() {
  int a, b, c;
  scanf("%d%d", &a, &b);
  c = a += b;
  printf("%d + %d = %d\n", a, b, c);
}