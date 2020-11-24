#include <stdio.h>

int main() {
  int a = 1, b = 2;
  int *pa = &a, *pb = &b;
  pa = pb;
  printf("%d %d\n", *pa, *pb);
  *pa = 3;
  printf("%d %d\n", *pa, *pb);
  return 0;
}