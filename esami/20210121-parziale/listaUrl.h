typedef struct {
  char url[100];
  int ore;
  int minuti;
} Visita;

typedef struct {
  char url[100];
  int visite;
  int oreUltimaVisita;
  int minutiUltimaVisita;
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista* pl);
void aggiorna(Lista* pl, Visita v);
void stampa(Lista l);
void ordina(Lista l, Lista* plOrd);