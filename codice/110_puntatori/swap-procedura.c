#include <stdio.h>

void swap(int m, int n) {
  int t;
  t = m;
  m = n;
  n = t;
}

int main() {
  int a = 2, b = 3;
  swap(a, b);
  printf("%d %d\n", a, b);
}