#include <stdio.h>

main() {
  int a, b;  // valori inseriti dall'utente
  scanf("%d%d", &a, &b);
  if (a >= b) // se a è il più grande
    printf("%d\n", a); // stampiamo a
  else // altrimenti
    printf("%d\n", b); // stampiamo b
}