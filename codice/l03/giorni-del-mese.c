#include <stdio.h>

main() {
  int mese, anno;
  int giorni;

  printf("Inserisci mese (numerico) e anno\n");
  scanf("%d%d", &mese, &anno);

  // aprile, giugno, settembre, novembre
  if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    giorni = 30;
  else
      // gennaio, marzo, maggio, luglio, agosto, ottobre, dicembre
      if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 ||
          mese == 10 || mese == 12)
    giorni = 31;
  else
      // febbraio
      if (mese == 2)
    if (anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0)
      // anno bisestile
      giorni = 29;
    else
      // anno non bisestile
      giorni = 28;

  // giorni contiene il numero di giorni del mese nell'anno
  printf("%d\n", giorni);
}