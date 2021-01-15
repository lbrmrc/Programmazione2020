typedef struct {
  char targa[8];
  float durata;
} Accesso;

typedef struct {
    char targa[8];
    int accessi;
} Veicolo;

typedef struct nodo {
    Veicolo dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista* pl);
void aggiorna(Lista* pl, char targa[]);
void stampaImporti(Lista l);