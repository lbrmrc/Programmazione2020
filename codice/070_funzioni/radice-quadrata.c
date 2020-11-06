#include <math.h>
#include <stdio.h>

float media(float a, float b) {
  return (a + b) / 2.0;
}

float radq(float a) {
  float x;

  x = 1.0;

  while (fabsf(x * x - a) >= 1e-5)
    x = media(x, a / x);  // media aritmetica di x e a/x

  return x;
}

int main() {
  float numero, radice;
  printf("Inserisci un numero reale\n");
  scanf("%f", &numero);
  radice = radq(numero);
  printf("La radice quadrata di %.3f è circa %.3f\n", numero, radice);

  return 0;
}