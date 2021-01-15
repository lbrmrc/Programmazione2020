typedef struct {
  int chip;
  char vaccino;
} Vaccino;

typedef struct {
    int chip;
    int cimurro;
    int epatite;
    int parvovirosi;
} Cane;

typedef struct nodo {
    Cane dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista* pl);
void aggiorna(Lista* pl, Vaccino v);
void stampaVacciniMancanti(Lista l);
void stampaVaccinati(Lista l);