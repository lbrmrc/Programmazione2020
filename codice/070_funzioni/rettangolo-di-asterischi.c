#include <stdio.h>

riga(int m) {
  // stampa m asterischi sulla stessa riga e va a capo
  int i;
  for (i = 0; i < m; i++)
    printf("*");
  printf("\n");
}

main() {
  int m, n;
  int j;
  printf("Inserisci il numero di righe e colonne\n");
  scanf("%d%d", &n, &m);
  for (j = 0; j < n; j++)
    riga(m);
}