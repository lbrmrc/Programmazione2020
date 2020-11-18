#include <stdio.h>

int main() {
  int frequenze[31];
  int i;
  int voto;
  int somma, numero;
  int m;
  float media;
  // inizializzazione a 0;
  for (i = 0; i < 31; i++)
    frequenze[i] = 0;

  do {
    // input
    scanf("%d", &voto);
    // incremento della frequenza corrispondente
    if (voto != -1)
      frequenze[voto]++;
  } while (voto != -1);

  // minimo
  i = 0;
  while (i <= 30 && frequenze[i] == 0)
    i++;
  printf("Voto minimo: %d\n", i);

  // massimo
  i = 30;
  while (i >= 0 && frequenze[i] == 0)
    i--;
  printf("Voto massimo: %d\n", i);

  // media
  somma = 0;   // accumulatore somma dei voti
  numero = 0;  // accumulatore numero dei voti
  for (i = 0; i <= 30; i++) {
    // all'indice i sto considerando il voto i
    somma = somma + frequenze[i] * i;
    numero = numero + frequenze[i];
  }
  media = (float)somma / numero;
  printf("Media: %.2f\n", media);

  // voti più frequenti

  // massima frequenza
  m = 0;
  for (i = 1; i <= 30; i++)
    if (frequenze[i] > frequenze[m])
      m = i;
  // frequenze[m] è il valore massimo

  printf("Voti più frequenti: ");
  // stampa tutti gli indici i cui elementi hanno il valore massimo
  for (i = 0; i <= 30; i++)
    if (frequenze[i] == frequenze[m])
      printf("%d ", i);

  printf("\n");

  return 0;
}