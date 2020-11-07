#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);

  {
    int temp = b;
    b = a;
    a = temp;
  }

  printf("%d %d\n", a, b);
}