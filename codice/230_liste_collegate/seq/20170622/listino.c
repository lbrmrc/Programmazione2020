#include "listino.h"
#include <stdio.h>
#include <stdlib.h>

void nuovaLista(Lista* pl) {
  pl->n_elementi = 0;
}

void registraConsumazione(Lista* pl, int codice) {
  int i, trovato = 0;

  for (i = 0; !trovato && i < pl->n_elementi; i++)
    if (pl->dati[i].codice == codice) {
      pl->dati[i].contatore++;
      trovato = 1;
    }
  if (!trovato) {
    pl->dati[pl->n_elementi].codice = codice;
    pl->dati[pl->n_elementi].contatore = 1;
    pl->n_elementi++;
  }
}

void scontrino(Lista l, VoceListino listino[]) {
  int i;
  float totale = 0;
  FILE* f;
  if ((f = fopen("scontrino.txt", "wt")) == NULL) {
    printf("Errore apertura file scontrino.txt\n");
    exit(-2);
  }
  for (i = 0; i < l.n_elementi; i++) {
    fprintf(f, "%d x %.2f (%s) = %.2f\n", l.dati[i].contatore,
            listino[l.dati[i].codice].prezzo,
            listino[l.dati[i].codice].descrizione,
            l.dati[i].contatore * listino[l.dati[i].codice].prezzo);
    totale += l.dati[i].contatore * listino[l.dati[i].codice].prezzo;
  }
  fprintf(f, "Totale: %2f\n", totale);
  fclose(f);
}