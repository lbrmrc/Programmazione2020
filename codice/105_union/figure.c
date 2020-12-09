#include <stdio.h>

typedef enum { quadrato, rettangolo } TipoFigura;

typedef union {
  struct {
    float lato;
  } datiQuadrato;
  struct {
    float base;
    float altezza;
  } datiRettangolo;
} DatiFigura;

typedef struct {
  TipoFigura tipo;
  DatiFigura dati;
} Figura;

void assegnaQuadrato(Figura* pf, float l) {
  pf->tipo = quadrato;
  pf->dati.datiQuadrato.lato = l;
}

void assegnaRettangolo(Figura* pf, float b, float a) {
  pf->tipo = rettangolo;
  pf->dati.datiRettangolo.base = b;
  pf->dati.datiRettangolo.altezza = a;
}

float area(Figura f) {
  switch (f.tipo) {
    case quadrato:
      return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
    case rettangolo:
      return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
  }
}

float perimetro(Figura f) {
  switch (f.tipo) {
    case quadrato:
      return f.dati.datiQuadrato.lato * 4.0;
    case rettangolo:
      return 2.0 * (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza);
  }
}

int main() {
  Figura f;
  assegnaQuadrato(&f, 2.5);
  printf("Area quadrato: %f\n", area(f));
  printf("Perimetro quadrato: %f\n", perimetro(f));

  assegnaRettangolo(&f, 1.5, 2.5);
  printf("Area rettangolo: %f\n", area(f));
  printf("Perimetro rettangolo: %f\n", perimetro(f));

  return 0;
}