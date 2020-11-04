#include <math.h>
#include <stdio.h>

float radiceQuadrata(float a) {
  float x = 1.0;
  while (fabsf(x * x - a) > 1e-5)
    x = (x + a / x) / 2;
  return x;
}

int main(void) {
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a < 0) {
    printf("%f e` negativo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radiceQuadrata(a));
  return 0;
}