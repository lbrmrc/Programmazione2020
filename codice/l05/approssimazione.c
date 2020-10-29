#include <stdio.h>

main() {
  float x, seno, addendo, potenza;
  int n;
  int segno;
  double fattoriale;
  printf("Inserisci un numero reale piccolo\n");
  scanf("%f", &x);

  segno = 1;
  potenza = x;
  fattoriale = 1.0;

  seno = segno * potenza / fattoriale;  // primo addendo (n = 0)

  for (n = 1; n < 10; n++) {
    segno = segno * -1;
    potenza = potenza * x * x;
    fattoriale = fattoriale * (2 * n) * (2 * n + 1);

    // n-esimo addendo
    addendo = segno * potenza / fattoriale;

    seno = seno + addendo;
  }
  printf("%f\n", seno);
}