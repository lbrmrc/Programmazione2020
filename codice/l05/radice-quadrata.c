#include <stdio.h>
#include <math.h>

main() {
  float a, x;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);
  // approssimiamo con x dla radice quadrata di a

  x = 1.0;
  while (fabsf(x * x - a) >= 1e-5)  // x non è abbastanza vicino alla radice quadrata di a
    x = (x + a / x) / 2.0;  // x è la media aritmetica di x e a/x

  printf("%f\n", x);
}