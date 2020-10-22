#include <stdio.h>

int a = 1;

int main() {
  while (a--) {
    {
      int a = 3;
      printf("%d\n", a);
    }
    printf("%d\n", a);
  }
}