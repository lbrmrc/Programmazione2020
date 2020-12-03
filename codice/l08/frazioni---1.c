#include <stdio.h>

typedef struct {
  int num;
  int den;
} Frazione;

// "costruttore"
Frazione frazione(int n, int d) {
  Frazione f;
  f.num = n;
  f.den = d;
  return f;
}

// "getter"
int numeratore(Frazione f) {
  return f.num;
}

int denominatore(Frazione f) {
  return f.den;
}

Frazione leggiFrazione() {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
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
  // fr = frazione(2,3);
  fr = leggiFrazione();
  stampaFrazione(fr);
  printf("\n");
  stampaDecimale(fr);
  printf("\n");
  printf("%f\n", 3 * aFloat(fr));
  return 0;
}