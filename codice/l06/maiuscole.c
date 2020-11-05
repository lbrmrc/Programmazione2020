#include <stdio.h>

char toUpperCase(char c) {
  if (c >= 'a' && c <= 'z')
    // c è una lettera minuscola
    /*
        'a' (97) -> 'A' (65)
        'b' (98) -> 'B' (66)
        ...
        'z' (122) -> 'Z' (90) */
    return c - ('a' - 'A');
  else
    return c;
}

int main() {
  char ch;
  
  do {
    scanf("%c", &ch);
    printf("%c", toUpperCase(ch));
  } while (ch != '\n');
  return 0;
}