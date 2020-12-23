// Interfaccia ADT lista

typedef float Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insTesta(Lista *pl, Dato d);
void reverse(Lista l1, Lista *pl2);
void stampa(Lista l);