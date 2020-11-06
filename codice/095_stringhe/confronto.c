#include <stdio.h>
#define DIM 10

int main() {
  char s1[DIM], s2[DIM];
  int i;
  int ris;  // negativa se s1 precede s2, nulla se s1 e s2 sono uguali, positiva
            // se s2 precede s1
  scanf("%s%s", s1, s2);

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    i++;

  ris = s1[i] - s2[i];

  if (ris < 0)
    printf("%s precede %s\n", s1, s2);
  else if (ris == 0)
    printf("%s e %s sono uguali\n", s1, s2);
  else
    printf("%s precede %s\n", s2, s1);

  return 0;
}