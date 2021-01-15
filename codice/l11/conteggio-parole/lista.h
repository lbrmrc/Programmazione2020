#define LUNGHEZZA_MAX 30

typedef struct {
    char parola[LUNGHEZZA_MAX];
    int n_occorrenze;
} Dato;

typedef struct nodo {
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiornaLista(Lista *pl, char parola[LUNGHEZZA_MAX]);
void outputLista(Lista l, FILE *f);
void ordina(Lista l, Lista *pl_ord);