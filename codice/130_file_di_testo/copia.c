#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30

int main() {
  FILE* fp;
  char parola[DIM];
  // apertura file;
  fp = fopen("prova.txt", "wt");
  if (fp == NULL) {
    printf("Impossibile aprire il file prova.txt.");
    exit(1);
  }

  // operazioni di scrittura su file
  do {
    fscanf(stdin, "%s", parola);
    if (strcmp(parola, "FINE") != 0)
      fprintf(fp, "%s ", parola);
  } while (strcmp(parola, "FINE") != 0);
  fprintf(fp, "\n");

  // chiusura del file
  if (fclose(fp) != 0) {
    printf("Errore nella chiusura del file\n");
    exit(2);
  }
  return 0;
}