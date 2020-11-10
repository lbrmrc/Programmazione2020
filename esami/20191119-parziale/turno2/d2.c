#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  do {
    if (a % 3)
      a--;
    else
      a /= 2;
  } while (1);

  return 0;
}