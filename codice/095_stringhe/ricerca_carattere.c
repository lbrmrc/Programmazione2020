#include <stdio.h>

int main() {
  char c, s[20];
  int i;

  scanf("%c%s", &c, s);
  while (s[i] != '\0' && s[i] != c)
    i++;

  if (s[i] == '\0')
    printf("Non trovato\n");
  else
    printf("Trovato\n");
}