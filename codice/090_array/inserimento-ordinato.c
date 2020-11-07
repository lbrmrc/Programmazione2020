#include <stdio.h>
#define DIM 5

int main(void) {
  int m, a[DIM], dl, j;

  for (dl = 0; dl < DIM; i++) {
    scanf("%d", &m);
    j = dl;
    while (j > 0 && /* m precede a[j-1] secondo il criterio usato*/) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }
  // l'array e` ordinato secondo il criterio usato
}