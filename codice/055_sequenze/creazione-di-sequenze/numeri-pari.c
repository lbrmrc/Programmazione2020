// stampare in output la sequenza dei numeri pari fra 1 e 20
// 2, 4, 6, ... , 18, 20

#include <stdio.h>

main() {
  int i;
  for (i = 1; i <= 20; i++) {
    // i assume i valori 1, 2, ... 20   = S1
    if (i % 2 == 0)  // se i è pari
    {
      // i assume i valori 2, 4, 6, ... , 18, 20 = S2
      printf("%d\n", i);
    }
  }
}