#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  b = a;
  a = b;
  printf("%d %d\n", a, b);
}