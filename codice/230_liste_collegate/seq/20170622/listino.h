#define DIM 100

typedef struct {
  int codice;
  int contatore;
} Dato;

typedef struct {
  int n_elementi;
  Dato dati[DIM];
} Lista;

typedef struct {
  char descrizione[30];
  float prezzo;
} VoceListino;

void nuovaLista(Lista* pl);
void registraConsumazione(Lista* pl, int codice);
void scontrino(Lista l, VoceListino listino[]);