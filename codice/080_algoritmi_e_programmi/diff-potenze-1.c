#include <stdio.h>

int main() {
  int a, b, p1 = 1, cont;
  scanf("%d%d", &a, &b);
  
  for (cont = 0; cont < b; cont++)
    p1 *= a;
}