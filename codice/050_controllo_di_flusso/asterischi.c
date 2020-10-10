#include <stdio.h>

main() {
  int cont; // contatore (o variabile di controllo)
  cont = 0;
scrivi:
  printf("*");
  cont++;  // equivale a cont = cont + 1; aggiornamento
  if (cont < 5) // condizione di permanenza
    goto scrivi;
  printf("\n");
}