#include <stdio.h>

int main(void) {
  int G, M, A;
  int giorni_del_mese;

  scanf("%d%d%d", &G, &M, &A);

  if (M == 4 || M == 6 || M == 9 || M == 11)
    giorni_del_mese = 30;
  else if (M == 2)
    if (A % 400 == 0 || (A % 4 == 0 && A % 100 != 0))
      giorni_del_mese = 29;
    else
      giorni_del_mese = 28;
  else
    giorni_del_mese = 31;

  if (G == 31 && M == 12)
    printf("%d %d %d\n", 1, 1, A + 1);
  else if (G == giorni_del_mese)  // ultimo giorno del mese
    printf("%d %d %d\n", 1, M + 1, A);
  else
    printf("%d %d %d\n", G + 1, M, A);
  return 0;
}