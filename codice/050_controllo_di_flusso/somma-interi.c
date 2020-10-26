// stampare la somma dei primi n naturali,
// dove n è richiesto all'utente

#include <stdio.h>
main() {
  int n;
  int i;  // assume i valori della sequenza 1, ..., n
  int s;  // accumulatore
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);

  s = 0;  // valore iniziale (v0) dell'accumulatore
  // sequenza 1, 2, 3, ... n
  for (i = 1; i <= n; i++) {
    // i assume i valori 1, 2, 3..., n, uno a ogni iterazione

    s = s + i;  // aggiorno l'accumulatore alla somma fra
                // il vecchio valore dell'accumulatore
                // e l'elemento della sequenza
  }
  // l'accumulatore contiene il risultato della reduce
  // cioè la somma dei valori fra 1 e n;

  printf("La somma dei naturali fra 1 e %d e` %d\n", n, s);
}