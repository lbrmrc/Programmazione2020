#include <stdio.h>

main() {
  int lato;
  printf("Digita il lato del quadrato\n");
  scanf("%d", &lato); // input del lato
  printf("Perimetro: %d\n", 4 * lato); // calcolo e output del perimetro
  printf("Area: %d\n", lato * lato); // calcolo e output dell'area
}