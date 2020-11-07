#include <stdio.h>
#define DIM 10

main() {
  int a[DIM], i, s;
  // ...
  s = 0;  // inizializzazione accumulatore
  for (i = 0; i < DIM; i++)
    s = /* aggiornamento accumulatore
           al risultato dell'operazione su se
           stesso (s) e l'elemento corrente (a[i]) */
}