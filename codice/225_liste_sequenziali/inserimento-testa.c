void inserimento_testa(Lista* pl, int numero) {
  int i;
  if (piena(*pl)) {
    // se la lista e' piena non posso inserire elementi
    printf("Errore: lista piena\n");
    exit(-1);
  }
  // faccio spazio per il nuovo numero spostando gli altri a destra
  for (i = pl->n_elementi; i > 0; i--)
    pl->dati[i] = pl->dati[i - 1];
  // inserisco il nuovo numero
  pl->dati[0] = numero;
  // incremento la dimensione logica
  pl->n_elementi++;
}