#include <stdio.h>

int main(void) {
  char risposta;
  printf("Stampare?\n");
  scanf("%c", &risposta);
  if (risposta == 's') {
    int i;
    for (i = 0; i < 10; i++)
      printf("*");
    printf("\n");
  }
  return 0;
}