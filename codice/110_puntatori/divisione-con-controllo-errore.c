#include <stdio.h>

int divisione(int dividendo, int divisore, int* pquoz, int* presto) {
  if (divisore != 0) {
    *pquoz = dividendo / divisore;
    *presto = dividendo % divisore;
    return 1;
  } else
    return 0;
}

int main() {
  int quoz, resto;
  if (divisione(15, 7, &quoz, &resto))
    // qui non c'è stato errore
    printf("%d %d\n", quoz, resto);
  if (divisione(15, 0, &quoz, &resto))
    // qui non c'è stato errore
    printf("%d %d\n", quoz, resto);
}