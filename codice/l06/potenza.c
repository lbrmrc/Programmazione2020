#include <stdio.h>

float potenza(int base, int esp) {
  int cont, prod = 1;
  if (esp < 0) {
    esp = -1 * esp;
    for (cont = 0; cont < esp; cont++)
      prod *= base;
    return 1 / (float)prod;
  } else {
    for (cont = 0; cont < esp; cont++)
      prod *= base;
    return prod;
  }
}

int main() {
  printf("%f\n", potenza(2, 3));   // atteso: 8
  printf("%f\n", potenza(2, 0));   // atteso: 1
  printf("%f\n", potenza(2, -3));  // atteso: 0.125

  return 0;
}