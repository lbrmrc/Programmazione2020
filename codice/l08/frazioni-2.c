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

int MCD(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}

Frazione semplifica(Frazione f) {
  int mcd = MCD(numeratore(f), denominatore(f));
  return frazione(numeratore(f) / mcd, denominatore(f) / mcd);
}

void stampaFrazione(Frazione f) {
  Frazione fs;
  fs = semplifica(f);
  printf("%d/%d", numeratore(fs), denominatore(fs));
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