// stampa i divisori primi del numero dato in input

#include <stdio.h>

main() {
  int numero, i;

  printf("Inserisci un numero naturale\n");
  scanf("%d", &numero);

  for (i = 2; i <= numero; i++) {
    // i assume la sequenza di valori 2, 3, ..., numero
    if (numero % i == 0)  // i è divisore di numero
    {
      // i assume la sequenza dei divisori di numero
      int j, cont;  // cont è il contatore dei divisori di i
      cont = 0;
      for (j = 2; j <= i - 1 && cont == 0; j++) {
        // j assume la sequenza di valori fra 2 e i-1
        if (i % j == 0) {
          cont++;
        }
      }
      // cont > 0 se e solo se i ha divisori compresi fra 2 e i-1
      if (cont == 0)  // i è primo
      {
        int esponente = 0;
        // i assume la sequenza dei divisori primi di numero
        while (numero % i == 0) {
          // esponente conta quante volte i è divisore di numero
          numero = numero / i;
          esponente++;
        }
        printf("%d", i);
        if (esponente > 1)  // esponente non omesso
          printf("^%d", esponente);
        if (numero > 1)  // ci sono altri divisori
          printf(" x ");
      }
    }
  }
  printf("\n");
}