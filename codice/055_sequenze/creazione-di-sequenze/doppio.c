#include <stdio.h>

// S1 è 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// o è il calcolo del doppio
// S2 è la sequenza dei doppi di ogni elemento di S1 
// S2 = map(o, S1)

main() {
  int i;  // variabile di controllo

  // ciclo in cui i assume tutti i valori di S1
  for (i = 1; i <= 10; i++) {
    // esprimo l'operazione o
    printf("%d\n", 2 * i);  // assume tutti i valori della sequenza S2
  }
}