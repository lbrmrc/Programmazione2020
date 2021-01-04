#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaCani.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Cane c) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = c;
  aux->next = *pl;
  *pl = aux;
}

int precede(Cane c1, Cane c2) {
  return c1.cimurro + c1.epatite + c1.parvovirosi >
             c2.cimurro + c2.epatite + c2.parvovirosi ||
         c1.cimurro + c1.epatite + c1.parvovirosi ==
                 c2.cimurro + c2.epatite + c2.parvovirosi &&
             c1.chip < c2.chip;
}

void insOrd(Lista* pl, Cane c) {
  while (*pl && precede((*pl)->dato, c))
    pl = &(*pl)->next;
  insTesta(pl, c);
}

void aggiorna(Lista* pl, Vaccino v) {
  // scorro tutti i cani con numero di chip diverso da quello del cane vaccinato
  while (*pl && (*pl)->dato.chip != v.chip)
    pl = &(*pl)->next;
  // se il cane non è già in lista creo l'elemento corrispondente
  if (*pl == NULL) {
    Cane c;
    c.chip = v.chip;
    // inizialmente i flag delle vaccinazioni sono tutti 0
    c.cimurro = 0;
    c.epatite = 0;
    c.parvovirosi = 0;
    insTesta(pl, c);
  }
  // imposto a 1 il flag per il vaccino appena effettuato
  switch (v.vaccino) {
    case 'C':
      (*pl)->dato.cimurro = 1;
      break;
    case 'E':
      (*pl)->dato.epatite = 1;
      break;
    case 'P':
      (*pl)->dato.parvovirosi = 1;
      break;
  }
}

void stampaVacciniMancanti(Lista l) {
  // per ogni cane
  while (l != NULL) {
    // stampo il numero del chip
    printf("%d: ", l->dato.chip);
    // stampo il nome dei vaccini il cui flag è falso
    if (!(l->dato.cimurro))
      printf("cimurro ");
    if (!(l->dato.epatite))
      printf("epatite ");
    if (!(l->dato.parvovirosi))
      printf("parvovirosi");
    printf("\n");
    l = l->next;
  }
}

void stampaVaccinati(Lista l) {
  FILE* f;
  Lista lOrd;
  // creo una seconda lista ordinata secondo il criterio indicato
  // e implementato nella funzione precede
  nuovaLista(&lOrd);
  while (l) {
    insOrd(&lOrd, l->dato);
    l = l->next;
  }
  //
  if ((f = fopen("vaccinati.txt", "wt")) == NULL) {
    printf("Errore apertura file vaccinati.txt\n");
    exit(3);
  };
  // scrivo nel file il contenuto della lista
  while (lOrd) {
    fprintf(f, "%d (%d v.)\n", lOrd->dato.chip,
            lOrd->dato.cimurro + lOrd->dato.epatite + lOrd->dato.parvovirosi);
    lOrd = lOrd->next;
  }
  fclose(f);
}