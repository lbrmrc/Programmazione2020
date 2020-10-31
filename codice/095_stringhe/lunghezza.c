#include <stdio.h>

int main() {
  char s[81];
  int lung;

  scanf("%s", s);
  lung = 0;
  while (s[lung] !=
         '\0')  // finché il carattere all'indice lung non è  il terminatore
    lung++;     // passo al carattere successivo

  // all'uscita dal ciclo lung contiene la dimensione logica della stringa
  printf("Lunghezza: %d\n", lung);

  return 0;
}