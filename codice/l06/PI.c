#include <stdio.h>

int primo(int M) {
  // primo(5) -> 1
  // primo(8) -> 0
  int j, cont = 0;
  for (j = 1; j <= M; j++) {
    if (M % j == 0)
      cont++;
  }
  if (cont == 2)
    return 1;
  else
    return 0;
}

int PI(int n) {
  int i, primi = 0;
  for (i = 2; i <= n; i++) {
    if (primo(i))
      primi++;
  }
  return primi;
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d\n", PI(N));
  return 0;
}