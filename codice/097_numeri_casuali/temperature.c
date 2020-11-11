#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  for (i = 0; i < 10; i++)
    printf("%f\n", 15.0 + 10.0 * rand() / RAND_MAX);
  return 0;
}