#include <stdio.h>
#define DIM 50

int main() {
  float a[DIM];
  int DL, i, j;
  // punto 1
  printf("Inserisci numeri reali (negativo termina)\n");
  DL = 0;
  do {
    scanf("%f", &a[DL]);
    if (a[DL] < 0)
      break;
    DL++;
  } while (DL < 50);

  // punto 2
  for (i = 0; i < DL; i++)
    for (j = DL - 1; j > i; j--)
      if (a[j] < a[j - 1]) {  // swap di a[j] e a[j-1]
        float t;
        t = a[j];
        a[j] = a[j - 1];
        a[j - 1] = t;
      }

  // punto 3
  for (i = 0; i < DL; i++)
    printf("%f ", a[i]);
  printf("\n");
}