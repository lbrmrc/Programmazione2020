// stampa se il numero dato in input è primo

#include <stdio.h>

main() {
  int n, i, c;
  printf("Digita un numero naturale\n");
  scanf("%d", &n);
  c = 0;  // valore iniziale del contatore
  for (i = 2; i * i <= n && c == 0; i++) {
    // i assume i valori naturali fra 2 e n/2
    // filtriamo i divisori di n
    if (n % i == 0) {
      // i assume i valori che sono divisori di n
      c++;
    }
  }
  // c contiene il numero di divisori di n
  if (c == 0)
    // gli unici divisori sono 1 e n
    printf("%d e` primo\n", n);
  else
    printf("%d non e` primo\n", n);
}