#define LUNG_NOME 30

typedef struct {
  int giorno;
  int mese;
  float ore;
  char attivita[LUNG_NOME];
} Record;

typedef struct nodo {
  Record dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista* pl);
void aggiorna(Lista* pl, Record v);
void stampa(Lista l);