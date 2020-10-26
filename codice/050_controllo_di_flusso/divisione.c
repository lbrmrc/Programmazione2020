// calcolare quoziente e resto degli input
// con il metodo delle sottrazioni successive

#include <stdio.h>
main() {
  int m, n;
  int c;

  printf("Inserisci dividendo e divisore\n");
  scanf("%d%d", &m, &n);

  c = 0;  // inizializzazione accumulatore a v0
  while (m >= n) {
    // m assume i valori ottenuti sottraendo via via n a m stesso
    m = m - n;
    c++;  // aggiornamento dell'accumulatore;
  }
  // nell'accumulatore c'è il quoziente
  printf("Quoziente: %d\n", c);
  // in m c'è il resto (ultimo elemento della sequenza)
  printf("Resto: %d\n", m);
}