#include <stdio.h>

void swap(int* pm, int* pn) {
  int t = *pm;
  *pm = *pn;
  *pn = t;
}

void ordina2(int *pa, int *pb) {
  // scambia i valori delle aree puntate dai parametri se non sono in ordine
  // crescente
  if (*pa > *pb)
    swap(pa, pb);
}

int main() {
  int a = 3, b = 2;
  ordina2(&a, &b);
  // a e b sono in ordine crescente
  printf("%d %d\n", a, b);
  return 0;
}