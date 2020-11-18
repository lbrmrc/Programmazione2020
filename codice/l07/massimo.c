#include <math.h>
#include <stdio.h>
#define DIM 5

int main() {
  float a[DIM];
  int i;
  int m;  // indice il cui elemento massimizza la proprietà (accumulatore)
  for (i = 0; i < DIM; i++) {
    scanf("%f", &a[i]);
  }
  // calcolo dell'elemento dell'array di valore assoluto massimo (reduce (riga 15, 0, a[1], ... a[DIM - 1]))
  m = 0; // suppongo, fino a prova contraria, che sia il primo
  for (i = 1; i < DIM; i++)
    if (fabsf(a[i]) > fabsf(a[m]))
      m = i;

  // all'indice m c'è l'elemento di valore assoluto massimo
  printf("L'elemento di valore assoluto massimo è %f, all'indice %d\n", a[m], m);

  return 0;
}