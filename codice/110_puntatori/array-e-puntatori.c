#include <stdio.h>

int main() {
  int a[10], i;
  for (i = 0; i < 10; i++)
    *(a + i) = i; // equivalente ad a[i] = i;
  for (i = 0; i < 10; i++)
    printf("%d\n", *(a + i));
  return 0;
}