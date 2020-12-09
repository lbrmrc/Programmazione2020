#include <stdio.h>

void azzera(int* pm) {
  // azzero il valore della variabile il cui indirizzo è passato come parametro
  // attuale
  *pm = 0;
}

int main() {
  int a = 2;
  azzera(&a);
  printf("%d\n", a);  // dovrebbe stampare 0;
}