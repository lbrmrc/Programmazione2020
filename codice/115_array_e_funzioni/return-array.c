#include <stdio.h>

char* indirizzo() {
  char s[] = "Via Saragat, 1 - 44122 Ferrara";
  return s;
}

int main(void) {
  char* ind;
  ind = indirizzo();
  printf("%s\n", ind);
  return 0;
}