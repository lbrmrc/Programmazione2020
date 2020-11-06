#include <stdio.h>

main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", n >= 0 ? n : -n);

  // oppure: printf("%d\n", n * (n >= 0 ? 1 : -1));

  // versione con istruzione condizionale
  if (n >= 0)
      printf("%d\n", n);
  else
      printf("%d\n", -n);
}