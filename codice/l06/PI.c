#include <stdio.h>

int primo(int M) {
  // primo(5) -> 1
  // primo(8) -> 0
  int j, cont = 0;
  for (j = 2; j * j <= M; j++) {
    if (M % j == 0)
      // j è un divisore di M compreso fra 2 e M-1
      return 0;
  }
  return 1;
}

int PI(int n) {
  int i, primi = 0;
  for (i = 2; i <= n; i++) {
    // i assume i valori della la sequenza 2..n-1
    if (primo(i))
      // i assume i valori della sequenza di numeri primi compresi fra 2 e n- 1
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