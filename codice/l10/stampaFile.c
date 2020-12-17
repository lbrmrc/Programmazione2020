#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[31];
  float calorie100grammi;
} Alimento;

int main(int argc, char* argv[]) {
  FILE* fp;
  Alimento a;

  if (argc != 2) {
    printf("Uso: %s nomeFile\n", argv[0]);
    exit(1);
  }

  if ((fp = fopen(argv[1], "rb")) == NULL) {
    printf("Impossibile aprire il file %s\n", argv[1]);
    exit(2);
  }

  while (fread(&a, sizeof(Alimento), 1, fp) == 1)
    printf("%s %f\n", a.nome, a.calorie100grammi);

  fclose(fp);
  return 0;
}