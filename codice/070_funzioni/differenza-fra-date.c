#include <stdio.h>
main() {
  int G, M, A, G1, M1, A1, G2, M2, A2;
  int N0, N1, N2, N3; int JD1, JD2;
  printf("Prima data?\n"); scanf("%d%d%d", &G1, &M1, &A1);
  N0 = (M1 - 14) / 12;
  N1 = 1461 * (A1 + 4800 + N0) / 4;
  N2 = 367 * (M1 - 2 - 12 * N0) / 12;
  N3 = 3 * (A1 + 4900 + N0) / 400;
  JD1 = N1 + N2 - N3 + G1 - 32075;
  printf("Seconda data?\n"); scanf("%d%d%d", &G2, &M2, &A2);
  N0 = (M2 - 14) / 12;
  N1 = 1461 * (A2 + 4800 + N0) / 4;
  N2 = 367 * (M2 - 2 - 12 * N0) / 12;
  N3 = 3 * (A2 + 4900 + N0) / 400;
  JD2 = N1 + N2 - N3 + G2 - 32075;
  printf("La differenza e` %d\n", JD2 - JD1);
}
