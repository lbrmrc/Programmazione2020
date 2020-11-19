#include <stdio.h>

int MCD(int a, int b) {
  int m, i;
  if (a > b) {
    // swap a e b
    int t;  // variabile temporanea
    t = b;
    b = a;
    a = t;
  }
  m = 1;
  i = 2;
  // ciclo
  while (i <= a) {
    if (a % i == 0) {
      if (b % i == 0)
        m = i;
    }
    i++;
  }

  // oppure:
  //   for (i = 2; i <= a; i++)
  //     if (a % i == 0 && b % i == 0)
  //       m = i;

  // output
  return m;
}

int main() {
  // punto 1
  int a[10];
  int M;
  int i;

  // punto 2
  printf("Inserisci un numero intero\n");
  scanf("%d", &M);

  // punto 3
  for (i = 1; i <= 10; i++)
    a[i - 1] = MCD(M, i);

  // punto 4
  for (i = 1; i <= 10; i++)
    printf("MCD(%d,%d)=%d\n", M, i, a[i - 1]);
}