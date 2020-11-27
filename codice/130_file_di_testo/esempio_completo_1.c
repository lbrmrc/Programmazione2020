#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso[2];
  int anno_nascita;
} Persona;

int main() {
  Persona persone[100];
  int dl;
  FILE* fp;
  // apertura file
  if ((fp = fopen("people.txt", "rt")) == NULL) {
    printf("Errore apertura people.txt\n");
    exit(1);
  }
  // lettura informazioni da file e salvataggio nell'array
  dl = 0;
  while (fscanf(fp, "%s%s%s%d", persone[dl].cognome, persone[dl].nome,
                persone[dl].sesso, &persone[dl].anno_nascita) == 4)
    dl++;

  // chiusura file
  if (fclose(fp) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}