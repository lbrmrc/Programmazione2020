// stampa il prodotto dei cinque interi inseriti dall'utente

#include <stdio.h>

main() {
  int a;  // assume i valori della sequenza di input
  int i;  // contatore del ciclo di reduce
  int p;  // accumulatore

  p = 1;  // assegno a p il valore v0 (elemento neutro moltiplicativo)
  for (i = 0; i < 5; i++)  // eseguito cinque volte
  {
    scanf("%d", &a);
    p = p * a;  // aggiorno l'accumulatore  con l'operazione binaria applicata
                // al vecchio valore e all'elemento corrente della sequenza
  }
  // p vale reduce(op, v0, S1) o reduce(*, 1, sequenza dei cinque input)
  printf("%d\n", p);
}