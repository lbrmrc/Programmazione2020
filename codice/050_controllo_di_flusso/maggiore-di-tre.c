#include <stdio.h>

main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (a > b)
    // ramo vero
    if (a > c)
      // a > b e a > c
      printf("%d\n", a);
    else
      // c >= a > b
      printf("%d\n", c);
  else
      // ramo falso del primo if-else
      if (b > c)
    // b >= a e b > c
    printf("%d\n", b);
  else
    // c >= b >= a
    printf("%d\n", c);
}
