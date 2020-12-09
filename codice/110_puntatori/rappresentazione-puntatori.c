#include <stdio.h>

int main() {
  int a = 2, b = 10, *p;
  p = &a;
  printf("%d\n", *p);
  p = &b;
  printf("%d\n", *p);
  return 0;
}