#include <stdio.h>
#define DIM 5
int main(void) {
  int i, a[] = {2, 4, 1, 6, 2}, b[5];

  for (i = 0; i < DIM; i++) {
    b[i] = 2 * a[i];
  }
  return 0;
}