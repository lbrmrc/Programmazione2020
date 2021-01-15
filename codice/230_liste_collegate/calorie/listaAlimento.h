#define DIMENSIONE 1000

// record
typedef struct {
  char nome[31];
  float calorie;  // 100 grammi dell'alimento
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void caricaCalorie(char nomeFileBinario[], Lista* pl);
float calorieAlimento(char nomeAlimento[], Lista l);