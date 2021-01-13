typedef struct {
    char cf[17];
    int att1;
    int att2;
    int att3;
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
