#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
    /* con 
        typedef struct {
        char cf[17];
        int contatori_attivita[3];
    } Dato;

  ....

      if ((*pl)->dato.contatori_attivita[attivita-1] > 0)
          (*pl)->dato.contatori_attivita[attivita-1]--;
      else
      ...
      */
    if (strcmp((*pl)->dato.cf, cf) == 0)
      switch (attivita) {
        case 1:
          if ((*pl)->dato.att1 > 0)
            (*pl)->dato.att1--;
          else
            printf("Codice fiscale: %s, attivita` %d: accesso negato\n",
                   (*pl)->dato.cf, attivita);
          break;
        case 2:
          if ((*pl)->dato.att2 > 0)
            (*pl)->dato.att2--;
          else
            printf("Codice fiscale: %s, attivita` %d: accesso negato\n",
                   (*pl)->dato.cf, attivita);
          break;
        case 3:
          if ((*pl)->dato.att3 > 0)
            (*pl)->dato.att3--;
          else
            printf("Codice fiscale: %s, attivita` %d: accesso negato\n",
                   (*pl)->dato.cf, attivita);
          break;
      }
    pl = &(*pl)->next;
  }
}

void stampa(Lista l){
    while (l){
        printf("%s %d %d %d\n", l->dato.cf, l->dato.att1, l->dato.att2, l->dato.att3);
        l = l->next;
    }
}