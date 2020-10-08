#include <stdio.h>

main() {
  int G, M, A;         // giorno, mese e anno della data in input
  int N0, N1, N2, N3;  // valori intermedi
  int JD;              // giorno giuliano della data in input

  printf("Inserisci giorno, mese e anno della data di oggi\n");
  scanf("%d%d%d", &G, &M, &A);

  // calcolo valori intermedi
  N0 = (M - 14) / 12;  // formula per N0
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = 367 * (M - 2 - 12 * N0) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;

  // calcolo del risultato finale
  JD = N0 + N1 + N2 - N3 + G - 32075;

  printf("Il giorno giuliano e` %d\n", JD);
}