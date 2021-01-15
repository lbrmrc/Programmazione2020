#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaUtenti.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void decrementoContatoreOErrore(Lista* pl, char cf[], int attivita) {
  while (*pl != NULL) {
    if (strcmp((*pl)->dato.cf, cf) == 0)
      if ((*pl)->dato.abilitato) {
        if ((*pl)->dato.attivita[attivita - 1] > 0) {
          (*pl)->dato.attivita[attivita - 1]--;
          (*pl)->dato.tentativiNegati = 0;
        } else {
          printf("Codice fiscale: %s, attivita` %d: accesso negato\n",
                 (*pl)->dato.cf, attivita);
          (*pl)->dato.tentativiNegati++;
          if ((*pl)->dato.tentativiNegati >= 3)
            (*pl)->dato.abilitato = 0;
        }
      } else {
        printf("Utente %s disabilitato\n", (*pl)->dato.cf);
      }
    pl = &(*pl)->next;
  }
}

void stampa(Lista l) {
  int i;
  while (l) {
    printf("%s ", l->dato.cf);
    for (i = 0; i < 3; i++)
      printf("%d ", l->dato.attivita[i]);
    printf("\n");
    l = l->next;
  }
}