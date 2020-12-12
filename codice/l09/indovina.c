#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int intero_casuale(int minimo, int massimo) {
  return minimo + (rand() % (massimo - minimo + 1));
}

typedef char Parola[31];

typedef struct {
  char lettera;
  int indovinata;
} LetteraSegreta;

typedef struct {
  LetteraSegreta lettereSegrete[30];
  int lunghezza;
} ParolaSegreta;

ParolaSegreta nuovaParolaSegreta(char s[]) {
  int i;
  ParolaSegreta ps;
  ps.lunghezza = 0;
  i = 0;
  while (s[i] != '\0') {
    ps.lunghezza++;
    ps.lettereSegrete[i].lettera = s[i];
    ps.lettereSegrete[i].indovinata = 0;
    i++;
  }
  return ps;
}

void stampaParolaSegreta(ParolaSegreta ps) {
  int i;
  for (i = 0; i < ps.lunghezza; i++)
    if (ps.lettereSegrete[i].indovinata)
      printf("%c ", ps.lettereSegrete[i].lettera);
    else
      printf("_ ");
}

int contiene(ParolaSegreta* pps, char c) {
  int i;
  int trovata = 0;
  // (*puntatore).campo  si può scrivere come puntatore->campo
  for (i = 0; i < pps->lunghezza; i++) {
    if (c == pps->lettereSegrete[i].lettera) {
      pps->lettereSegrete[i].indovinata = 1;
      trovata = 1;
    }
  }
  return trovata;
}

int completamente_indovinata(ParolaSegreta ps) {
  int i;
  for (i = 0; i < ps.lunghezza; i++) {
    if (!ps.lettereSegrete[i].indovinata)
      return 0;
  }
  return 1;
}

Parola parole[100000];
int numero_parole = 0;

void parolaCasuale(Parola pc) {
  // generare numero casuale fro 0 e numero_parole-1
  int numero_casuale = intero_casuale(0, numero_parole - 1);
  strcpy(pc, parole[numero_casuale]);
}

int main() {
  FILE* fp;
  Parola p;
  ParolaSegreta ps;
  char lettera[2];
  int vite = 5;

  srand(time(NULL));

  if ((fp = fopen("words.italian.txt", "rt")) == NULL) {
    printf("Errore apertura words.italian.txt\n");
    exit(1);
  }

  // ... operazioni su file
  // map da file a array
  while (fscanf(fp, "%s", p) == 1) {
    strcpy(parole[numero_parole], p);
    numero_parole++;
  }

  if (fclose(fp) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }

  parolaCasuale(p);
  ps = nuovaParolaSegreta(p);

  do {
    stampaParolaSegreta(ps);
    printf("\n");
    scanf("%s", lettera);

    if (!contiene(&ps, lettera[0])) {
      vite--;
      printf("Vite: %d\n", vite);
    }
  } while (vite > 0 && !completamente_indovinata(ps));

  if (completamente_indovinata(ps))
    printf("Hai vinto!\n");
  else
    printf("Hai perso!\n");

  printf("La parola era %s\n", p);

  return 0;
}
