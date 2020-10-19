// i deve assumere la sequenza di valori 1, 2, 3, ... , 10

#include <stdio.h>
main() {
  int i;  // variabile di controllo

  i = 1;  // assegnamento del valore iniziale (1)
  do {
    printf("%d\n", i);  // osservazione del valore
    i++;                // aggiornamento al valore successivo
  } while (i <= 10);    // sequenza non terminata (i non maggiore di 10)
}