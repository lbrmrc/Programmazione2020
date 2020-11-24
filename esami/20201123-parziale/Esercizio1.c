#include <stdio.h>

int cubo(int n) {
  int s, i, j;
  s = 0;
  for (i = 1; i <= n; i++)
    for (j = 0; j < n; j++)
      s = s + n;
  return s;
}

int main() {
  // punto 1
  int a[100], M, i;

  // punto 2
  printf("Inserisci un intero minore o uguale a 100\n");
  scanf("%d", &M);

  // punto 3
  for (i = 1; i <= M; i++)
    // non a[i] = cubo(i);
    a[i - 1] = cubo(i);

  // oppure
  //   for (i = 0; i < M; i++)
  //     a[i] = cubo(i + 1);

  // punto 4
  for (i = 0; i < M; i++)
    printf("%d ", a[i]);
  printf("\n");
}