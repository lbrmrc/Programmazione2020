#include <stdio.h>

int giorno_giuliano(int g, int m, int a) {
  int N0, N1, N2, N3;
  N0 = (m - 14) / 12;
  N1 = 1461 * (a + 4800 + N0) / 4;
  N2 = 367 * (m - 2 - 12 * N0) / 12;
  N3 = 3 * (a + 4900 + N0) / 400;
  return N1 + N2 - N3 + g - 32075;
}

char giorno(int G, int M, int A) {
  // calcola il resto della divisione per 7
  // del giorno giuliano della data <G,M,A>
  char giorno_settimana;
  switch (giorno_giuliano(G, M, A) % 7) {
    case 0:
      giorno_settimana = 'l';
      break;
    case 1:
      giorno_settimana = 'm';
      break;
    case 2:
      giorno_settimana = 'M';
      break;
    case 3:
      giorno_settimana = 'g';
      break;
    case 4:
      giorno_settimana = 'v';
      break;
    case 5:
      giorno_settimana = 's';
      break;
    case 6:
      giorno_settimana = 'd';
      break;
  }

  return giorno_settimana;
}

int main() {
  int g, m, a;
  printf("Inserisci giorno, mese e anno di una data qualsiasi\n");
  scanf("%d%d%d", &g, &m, &a);
  printf("%c\n", giorno(g, m, a));
  return 0;
}