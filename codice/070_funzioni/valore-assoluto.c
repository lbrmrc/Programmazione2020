#include <stdio.h>

int valoreAssoluto(int n) {
  int va;  // valore assoluto di n
  if (n >= 0)
    va = n;
  else
    va = -n;
  // restituisce il valore assoluto di n
  return va;
}

int main() {
  int m;
  scanf("%d", &m);
  printf("%d\n", valoreAssoluto(m));
  return 0;
}