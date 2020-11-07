#include <stdio.h>

int f(int d);

int main() {
  int a = 0, i[] = {1, 1, 1};
  while (a < 2)
    i[a] = f(++a);

  for (i[0] = 2; i[0] >= 0; i[0]--)
    printf("%d ", i[i[0]]);
  printf("\n");
  return 0;
}