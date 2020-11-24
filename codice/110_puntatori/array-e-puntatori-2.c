#include <stdio.h>

int main() {
  int a[10], *p, i;
  for (i = 0, p = a; i < 10; i++, p++)
    *p = i;
  for (i = 0, p = a; i < 10; i++, p++)
    printf("%d\n", *p);
  return 0;
}