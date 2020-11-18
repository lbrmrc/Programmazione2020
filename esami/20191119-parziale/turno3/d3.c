#include <stdio.h>

int h(int n) {
  return 1;
}

int g(int n) {
  if (n < 5) return 1;
  else return h(n - 2);
}

int f(int n) {
  if (n < 5) return 1;
  else return g(n - 2);
}

int main(void) {
  int m;
  scanf("%d", &m);
  printf("%d\n", f(m));
  return 0;
}