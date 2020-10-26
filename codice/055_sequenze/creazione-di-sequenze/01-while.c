// i deve assumere la sequenza di valori 1, 2, 3, ... , 10

#include <stdio.h>
main() {
  int i;  // variabile di controllo

  i = 1;  // assegnamento del valore iniziale (1)
  while (i <= 10) // condiz. permanenza  
    {
      printf("%d\n", i);  // utilizzo del valore di i
      i++;  // aggiornamento di i al valore successivo
    }
}