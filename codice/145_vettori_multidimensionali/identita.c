#include <stdio.h>

int main() {
  int M[3][3];
  int i, j;

  // ForEach(M[i][j] = i == j ? 1 : 0, M);
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      // M[i][j]...
      if (i == j)
        M[i][j] = 1;
      else
        M[i][j] = 0;
    }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%d ", M[i][j]);
    printf("\n");
  }

  return 0;
}