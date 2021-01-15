#include <stdio.h>
#include <stdlib.h>

#include "listaPersone.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Persona d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux == NULL) {
    printf("Errore allocazione memoria\n");
    exit(3);
  }
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

Lista* ricerca(Lista* pl, int anno) {
  // salto gli elementi che devono precedere quello da inserire
  while (*pl != NULL && (*pl)->dato.anno_nascita < anno)
    pl = &(*pl)->next;
  return pl;
}

void insOrd(Lista* pl, Persona d) {
  // inserisco d in testa alla prima lista
  // che è vuota o ha testa che segue d

  // trovo la lista in testa alla quale inserire l'elemento
  pl = ricerca(pl, d.anno_nascita);
  // inserisco l'elemento
  insTesta(pl, d);
}

void stampa(Lista l) {
  // ForEach (stampaElemento, l)
  while (l != NULL) {
    printf("%s %d\n", l->dato.nome, l->dato.anno_nascita);
    l = l->next;
  }
}

int natiEntro(Lista l, int a) {
  if (l == NULL || l->dato.anno_nascita > a) {
    // caso base
    return 0;
  } else {
    // caso ricorsivo
    return 1 + natiEntro(l->next, a);
  }
}

// int natiEntro(Lista l, int a) {
//   // length(filter (l->dato.anno_nascita <= a, l))
//   int contatore = 0;
//   while (l != NULL && l->dato.anno_nascita <= a) {
//     contatore++;
//     l = l->next;
//   }
//   return contatore;
// }
