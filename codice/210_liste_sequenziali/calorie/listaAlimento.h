#define DIMENSIONE 1000

// record
typedef struct {
  char nome[31];
  float calorie; // 100 grammi dell'alimento
} Alimento;

typedef struct {
  int n_elementi;
  Alimento dati[DIMENSIONE];
} Lista;

void caricaCalorie(char nomeFileBinario[], Lista *pl);
float calorieAlimento(char nomeAlimento[], Lista l);