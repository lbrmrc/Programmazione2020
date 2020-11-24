#include <stdio.h>
#include <string.h>

void indirizzo(char *s) {
  strcpy(s,"Via Saragat, 1 - 44122 Ferrara");
}

int main(void) {
  char ind[100];
  indirizzo(ind);
  printf("%s\n", ind);
  return 0;
}