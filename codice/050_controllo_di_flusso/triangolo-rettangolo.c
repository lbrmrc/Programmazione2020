#include <stdio.h>

main() {
  int a, b, c;
  printf("inserisci i tre lati dal più piccolo al più grande\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a * a + b * b == c * c)
    printf("Rettangolo\n");
  else
    printf("Non rettangolo\n");
}