#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  srand(time(NULL));

  for (i = 0; i < 10; i++) {
    printf("%.1f ", 15.0 + (double)rand() / RAND_MAX * (10.0));
  }
  printf("\n");
}