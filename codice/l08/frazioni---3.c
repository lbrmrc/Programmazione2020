#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num;
  int den;
} Frazione;

int MCD(int a, int b) {
  a = a > 0 ? a : -a;
  b = b > 0 ? b : -b;
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
  if (d != 0) {
    int mcd = MCD(n, d);
    Frazione f;
    f.num = n / mcd;
    f.den = d / mcd;
    return f;
  } else {
    printf("Frazione non valida (denominatore nullo)\n");
    exit(1);
  }
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

Frazione somma(Frazione f1, Frazione f2) {
  int n, d;
  n = numeratore(f1) * denominatore(f2) + denominatore(f1) * numeratore(f2);
  d = denominatore(f1) * denominatore(f2);
  return frazione(n, d);
}

// Frazione sottrazione(Frazione f1, Frazione f2) {
//   int n, d;
//   n = numeratore(f1) * denominatore(f2) - denominatore(f1) * numeratore(f2);
//   d = denominatore(f1) * denominatore(f2);
//   return frazione(n, d);
// }

Frazione opposto(Frazione f) {
  return frazione(-numeratore(f), denominatore(f));
}

Frazione sottrazione(Frazione f1, Frazione f2) {
  return somma(f1, opposto(f2));
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
  fr = sottrazione(frazione(5, 6), frazione(3, 4));
  stampaFrazione(fr);
  return 0;
}