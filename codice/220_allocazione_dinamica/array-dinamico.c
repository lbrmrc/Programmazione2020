#include <stdio.h>
#include <stdlib.h>

int main() {
  int dim;
  float* v;
  int i;
  printf("Quanti elementi?\n");
  scanf("%d", &dim);

  // riservo un'area di memoria di dimensione pari a dim float
  v = (float*)malloc(sizeof(float) * dim);
  if (v == NULL) {
    printf("Impossibile allocare il vettore\n");
    exit(1);
  }

  // assegno all'elemento di indice i il valore 1/(i+1);
  for (i = 0; i < dim; i++)
    v[i] = 1.0 / (i + 1);
  // oppure *(v+i) = 1.0 / (i + 1);

  for (i = 0; i < dim; i++)
    printf("%f\n", *(v + i));

  // libero la memoria che non serve più
  free(v);
  v = NULL;

  return 0;
}