// i deve assumere la sequenza di valori 10, 9, 8, 7, 6, 5

#include <stdio.h>
main() {
  int i;  // variabile di controllo;

  i = 10;  // assegnamento ad i del valore iniziale (10)
  do {
    printf("%d\n", i);  // osservazione del valore
    i--;                // aggiornamento al valore successivo
  } while (i >= 5); // sequenza non è terminata (i non minore di 5)
}