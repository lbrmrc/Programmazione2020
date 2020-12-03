#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num;
  int den;
} Frazione;

// "costruttore"
int frazione(int n, int d, Frazione* pf) {
  if (d != 0) {
    (*pf).num = n;  // dereferenziazione e selezione campo
                    // equivalente: pf->num;
    pf->den = d;
    // equivalente: (*pf).den = d;
    return 1;
  } else
    return 0;
}

// "getter"
int numeratore(Frazione f) {
  return f.num;
}

int denominatore(Frazione f) {
  return f.den;
}

void leggiFrazione(Frazione* pfr) {
  int n, d;
  scanf("%d%d", &n, &d);
  if (!frazione(n, d, pfr)){
    printf("Dati inseriti non validi\n");
    exit(1);
  }
}

void stampaFrazione(Frazione f) {
  printf("%d/%d", numeratore(f), denominatore(f));
}

float aFloat(Frazione f) {
  return (float)numeratore(f) / (float)denominatore(f);
}

void stampaDecimale(Frazione f) {
  printf("%f", aFloat(f));
}

int main() {
  Frazione fr;
  // creo variabile di tipo Frazione che rappresenta il numero razionale 2/3
  // fr =  one(2,3);
  leggiFrazione(&fr);
  stampaFrazione(fr);
  printf("\n");
 }