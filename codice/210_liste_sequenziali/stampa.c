void stampa(Lista l) {
  int i;
  // stampo tutti gli elementi, separati da spazi
  for (i = 0; i < (l.n_elementi); i++) {
    printf("%d ", l.dati[i]);
  }
  // vado a capo
  printf("\n");
}