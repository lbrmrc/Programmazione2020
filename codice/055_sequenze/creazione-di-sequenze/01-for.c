// i deve assumere la sequenza di valori 1, 2, 3, ... , 10

#include <stdio.h>
main() {
  int i;  // variabile di controllo

  for (i = 1;    // init: assegnamento del valore iniziale (1)
       i <= 10;  // cond: sequenza non ancora terminata
       i++       // update: aggiornamento di i al valore successivo
  ) {
    printf("%d\n", i);  // utilizzo del valore di i
  }
}