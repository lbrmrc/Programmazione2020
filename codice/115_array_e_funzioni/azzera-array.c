#include <stdio.h>

void azzera(int v[], int dl) {
  int i;
  for (i = 0; i < dl; i++)
    v[i] = 0;
}

int main(void) {
  int i = 0, a[3] = {1, 2, 3};
  azzera(a, 3);
  for (i = 0; i < 3; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}