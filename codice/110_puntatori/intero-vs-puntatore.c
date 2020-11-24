#include <stdio.h>
main() {
  int i = 100;
  int* p = (int*)100;
  printf("i vale %d; i + 1 vale %d\n", i, i + 1);
  printf("p vale %d; p + 1 vale %d\n", p, p + 1);
}