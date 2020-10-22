#include <stdio.h>
main() {
  int G, M, A,G1, M1, A1, G2, M2, A2;
  int N0, N1, N2, N3; int JD, JD1, JD2;
  int ritorno;
  printf("Prima data?\n"); scanf("%d%d%d", &G1, &M1, &A1);
  ritorno = 1; G = G1; M = M1; A = A1; goto calcolo;
r1:
  JD1 = JD;
  printf("Seconda data?\n"); scanf("%d%d%d", &G2, &M2, &A2);
  ritorno = 2; G = G2; M = M2; A = A2; goto calcolo;
r2:
  JD2 = JD;
  goto fine;
calcolo:
  N0 = (M - 14) / 12;
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = 367 * (M - 2 - 12 * N0) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;
  JD = N1 + N2 - N3 + G - 32075;
  if (ritorno == 1)
    goto r1;
  else if (ritorno == 2)
    goto r2;
fine:
  printf("La differenza e` %d\n", JD2 - JD1);
}
