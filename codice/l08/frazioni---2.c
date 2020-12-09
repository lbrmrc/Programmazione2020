#include <stdio.h>

typedef struct {
  int num;
  int den;
} Frazione;

int MCD(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}

// "costruttore"
Frazione frazione(int n, int d) {
  int mcd = MCD(n, d);
  Frazione f;
  f.num = n / mcd;
  f.den = d / mcd; 
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



Frazione semplifica(Frazione f) {
  int mcd = MCD(numeratore(f), denominatore(f));
  return frazione(numeratore(f) / mcd, denominatore(f) / mcd);
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