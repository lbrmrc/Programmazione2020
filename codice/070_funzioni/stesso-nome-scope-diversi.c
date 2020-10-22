#include <stdio.h>

int i = 0;

int main(void) {
  int i = 1;
  {
    int i = 2;
    printf("%d\n", i);
  }
  printf("%d\n", i);
  return 0;
}