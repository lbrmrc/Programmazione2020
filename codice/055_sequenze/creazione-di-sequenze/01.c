// i deve assumere la sequenza di valori 1, 2, 3, ... , 10

#include <stdio.h>
main() {
  int i;  // variabile di controllo

  i = 1;  // assegnamento del valore iniziale (1)
aggiornamento:
  printf("%d\n", i);  // osservazione del valore
  i++; // aggiornamento al valore successivo
  if (i <= 10)  // sequenza non terminata
    goto aggiornamento;
}