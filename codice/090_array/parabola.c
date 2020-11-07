#include <stdio.h>
#define DIM 21

int main() {
  int i;
  float a, b, c;
  float ascisse[DIM], ordinate[DIM];

  printf("Inserisci i tre coefficienti reali\n");
  scanf("%f%f%f", &a, &b, &c);

  // ForEach(inizializzazione , ascisse)
  for (i = 0; i < DIM; i++)
    ascisse[i] = -1.0 + 0.1 * i;

  // Map (y = ax*x + b*x +c, ascisse, ordinate)
  for (i = 0; i < DIM; i++)
    ordinate[i] = a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;

  // ForEach (stampa, ascisse e ordinate)
  for (i = 0; i < DIM; i++)
    printf("%.3f %.3f\n", ascisse[i], ordinate[i]);

  return 0;
}