#include <stdio.h>

typedef struct {
  int num;
  int den;
} Frazione;

// "costruttore"
void frazione(int n, int d, Frazione* pf) {
  (*pf).num = n; // dereferenziazione e selezione campo
 // equivalente: pf->num;
  pf->den = d;
 // equivalente: (*pf).den = d;
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
  frazione(n, d, pfr);
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
  stampaDecimale(fr);
  printf("\n");
  printf("%f\n", 3 * aFloat(fr));
  return 0;
}