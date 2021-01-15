// record
typedef struct {
  char nome[31];
  float calorie;
} Alimento;

int caricaCalorie(char nomeFileBinario[], Alimento alimenti[]);
float calorieAlimento(char nomeAlimento[], Alimento alimenti[], int n_alimenti);