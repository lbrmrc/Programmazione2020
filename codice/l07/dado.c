#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int faccia;  // compresa fra 1 e 6
  int i, seme;
  seme = time(NULL);
  srand(seme); // imposta seme
  for (i = 0; i < 10; i++) {
    faccia = 1 + rand() % 6;
    printf("%d ", faccia);
  }
  printf("\n");
  return 0;
}