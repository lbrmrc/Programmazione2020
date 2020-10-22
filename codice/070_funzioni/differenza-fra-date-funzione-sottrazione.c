#include <stdio.h>
int giorno_giuliano(int g, int m, int a) {
  int N0, N1, N2, N3;
  N0 = (m - 14) / 12;
  N1 = 1461 * (a + 4800 + N0) / 4;
  N2 = 367 * (m - 2 - 12 * N0) / 12;
  N3 = 3 * (a + 4900 + N0) / 400;
  return N1 + N2 - N3 + g - 32075;
}

main() {
  int G1, M1, A1;
  int G2, M2, A2;
  int JD1, JD2;
  printf("Prima data?\n"); scanf("%d%d%d", &G1, &M1, &A1);
  printf("Seconda data?\n"); scanf("%d%d%d", &G2, &M2, &A2);
  printf("La differenza e` %d\n", giorno_giuliano(G1, M1, A1) -
                                  giorno_giuliano(G2, M2, A2));
}
