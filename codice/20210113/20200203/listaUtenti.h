typedef struct {
    char cf[17];
    int attivita[3];
    int abilitato;
    int tentativiNegati;
} Dato;

typedef struct nodo {
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insTesta(Lista *pl, Dato d);
void decrementoContatoreOErrore(Lista *pl, char cf[], int attivita);
void stampa(Lista l);
