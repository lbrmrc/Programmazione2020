#include <stdio.h>
#include <stdlib.h>
#define DIMENSIONE 100

typedef struct {
  int n_elementi;
  int dati[DIMENSIONE];
} Lista;

void nuova_lista(Lista* pl);
int vuota(Lista l);
int piena(Lista l);
void inserimento_testa(Lista* pl, int numero);
void inserimento_ordinato(Lista* pl, int numero);
int ricerca(Lista l, int numero);
void elimina(Lista* pl, int numero);
int lunghezza(Lista l);
void stampa(Lista l);