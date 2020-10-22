#include <stdio.h>

int main() {
  while (a--) {
    {
      int a = 3;
      printf("%d\n", a);
    }
    printf("%d\n", a);
  }
}

int a = 1;
