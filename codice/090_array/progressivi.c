#include <stdio.h>
#define DIM 10

int main() {
  int a[DIM];
  int n, i;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);

  // ForEach (assegna ad a[i] n + 1 + i, a)
  for (i = 0; i < DIM; i++)
    a[i] = n + 1 + i;

  // ForEach (stampa, a)
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);

  return 0;
}