#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "listaInsegnamenti.h"

void nuovaLista(Lista *l) {
    *l = NULL;
}

void inserimentoTesta(Lista *l, Corso c) {
    Nodo *aux = (Nodo *) malloc(sizeof(Nodo));
    aux->dato = c;
    aux->next = *l;
    *l = aux;
}

void aggiorna(Lista *l, char *codice, float durata) {
    Corso c;
    int trovato = 0;
    while(*l && trovato == 0) {
        if(strcmp(codice, (*l)->dato.codice) == 0) {
            // elemento presente
            (*l)->dato.ore += durata;
            trovato = 1;
        }
        else {
            l = &(*l)->next;
        }
    }

    if(trovato == 0) {
        // inserisco il corso
        strcpy(c.codice,codice);
        c.ore = durata;
        inserimentoTesta(l,c);
    }
}

float ricercaOre(Lista l, char *codice) {
    while(l) {
        if(strcmp(l->dato.codice,codice) == 0) {
            return l->dato.ore;
        }
        else {
            l = l->next;
        }
    }
    
    printf("Materia %s non trovata\n",codice);
    exit(-3);
}

void stampa(Lista l) {
    while(l) {
        printf("Codice: %s - Durata: %lf\n", l->dato.codice, l->dato.ore);
        l = l->next;
    }
}