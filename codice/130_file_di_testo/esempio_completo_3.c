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
  char c;
  FILE* fp;
  // apertura file
  if ((fp = fopen("people.txt", "rt")) == NULL) {
    printf("Errore apertura people.txt\n");
    exit(1);
  }
  // lettura informazioni da file e salvataggio nell'array
  dl = 0;
  while (fscanf(fp, "%s%s", persone[dl].cognome, persone[dl].nome) == 2)
   {
     do {
       c = fgetc(fp);
     } while (c != 'M' && c != 'F');
    persone[dl].sesso = c;
    fscanf(fp, "%d", &persone[dl].anno_nascita);
    dl++;
  }

  // chiusura file
  if (fclose(fp) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}