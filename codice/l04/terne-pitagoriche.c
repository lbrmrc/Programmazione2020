#include <stdio.h>

main() {
  int massimo;
  int a, b, c;
  int cont;
  printf("Inserisci l'ipotenusa massima\n");
  scanf("%d", &massimo);
  // filtrare le terne pitagoriche

  cont = 0;
  for (c = 1; c <= massimo; c++)
    for (b = 1; b < c; b++)
      for (a = 1; a < b; a++) {
        cont++;
        // a, b, c assume la sequenza dei valori tali che a < b < c <= massimo
        if (a * a + b * b ==
            c * c)  // predicato terna pitagorica
                    // a, b, c assume la sequenza dei valori tali che a < b < c
                    // <= massimo e a, b ,c è una terna pitagorica
          printf("%d %d %d\n", a, b, c);
      }

  printf("Terne testate: %d\n", cont);
}