typedef struct {
    char codice[10];
    float ore;
} Corso;

typedef struct {
    char codice[10];
    char nome[30];
    int anno;
} DatiCorso;

typedef struct nodo {
    Corso dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void aggiorna(Lista *l, char *codice, float durata);
void stampa(Lista l);
float ricercaOre(Lista l, char *codice);