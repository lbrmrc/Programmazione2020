#include <stdio.h>
#define DIM 10
int main() {
  int a[DIM];
  int dimlog, dl, i;
  // input
  dimlog = 0;
  do {
    printf("Inserisci un numero intero (0 termina)\n");
    scanf("%d", &a[dimlog]);
    if (a[dimlog] == 0)
      break;
    dimlog++;
  } while (dimlog < DIM);

  // insertion sort
  for (dl = 0; dl < dimlog; dl++) {
    int j = dl, m = a[dl];
    while (j > 0 && m * m < a[j - 1] * a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }
    // ForEach (stampa, a)
  for (i = 0; i < dimlog; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}