#include <stdio.h>

int f(int d);

int main(int argc, char* argv[]) {
  char s[] = "ABCDEFGHIJKLMNOPQRSTUVQXYZ";
  int i = 1;
  while (i < 7) {
    printf("%c", *((char*)((int*)s + i)));
    i += f(i) ? f(i) : 1;
  }
  printf("\n");
}