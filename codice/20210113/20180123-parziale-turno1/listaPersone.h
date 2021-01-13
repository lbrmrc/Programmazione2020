typedef struct {
    char nome[30];
    int anno_nascita;
} Persona;

typedef struct nodo {
    Persona dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insOrd(Lista *pl, Persona d);
void stampa(Lista l);
int natiEntro(Lista l, int a);