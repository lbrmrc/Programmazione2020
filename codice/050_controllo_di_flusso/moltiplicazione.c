// richiede in input m e n
// stampa il prodotto di m e n
// come m + m + ... + m ripetuto n volte

#include <stdio.h>
main() {
  int m, n;
  int s;  // accumulatore
  int i;
  printf("Inserisci due numeri interi\n");
  scanf("%d%d", &m, &n);

  // reduce(+, 0, [m, m...., m] (n elementi))

  s = 0;  // inizializzazione dell'accumulatore a v0
  for (i = 1; i <= n; i++) {
    // m assume il valore inserito dall'utente
    // in ognuna delle n iterazioni
    s = s + m;
  }

  printf("Il prodotto e` %d\n", s);
}