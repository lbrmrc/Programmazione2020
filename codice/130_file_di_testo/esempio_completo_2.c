#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso;
  int anno_nascita;
} Persona;

int main() {
  Persona persone[100];
  int dl;
  char s[2];
  FILE* fp;
  // apertura file
  if ((fp = fopen("people.txt", "rt")) == NULL) {
    printf("Errore apertura people.txt\n");
    exit(1);
  }
  // lettura informazioni da file e salvataggio nell'array
  dl = 0;
  while (fscanf(fp, "%s%s%s%d", persone[dl].cognome, persone[dl].nome, s,
                &persone[dl].anno_nascita) == 4) {
    persone[dl].sesso = s[0];
    dl++;
  }

  // chiusura file
  if (fclose(fp) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}