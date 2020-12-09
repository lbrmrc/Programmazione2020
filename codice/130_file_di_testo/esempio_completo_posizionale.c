#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[11];
  char nome[11];
  char sesso;
  int anno_nascita;
} Persona;

int main() {
  FILE* fp;
  Persona persone[100];
  int dl;

  if ((fp = fopen("people-pos.txt", "rt")) == 0) {
    printf("Errore apertura people-pos.txt\n");
    exit(1);
  }
  dl = 0;
  while (fscanf(fp, "%10c%10c%c%d\n", persone[dl].cognome, persone[dl].nome,
                &persone[dl].sesso, &persone[dl].anno_nascita) == 4) {
    persone[dl].cognome[10] = '\0';
    persone[dl].nome[10] = '\0';
    dl++;
  }
  fclose(fp);
  return 0;
}