typedef struct {
  char cf[17];
  int ora;
  float temperatura;
  float saturazione;
} Rilevazione;

typedef struct {
  char cf[17];
  int n_rilevazioni;
  float somma_temperatura;
  float somma_saturazione;
  int anomalia;
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista* pl);
void aggiorna(Lista* pl, Rilevazione v);
void stampa(Lista l);
void eliminaSani(Lista* pl);