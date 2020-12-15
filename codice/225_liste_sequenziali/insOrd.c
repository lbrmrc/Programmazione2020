void insOrd(Lista* pl, int numero) {
  int i;
  if (piena(*pl)) {
    // se la lista e' piena non posso inserire elementi
    printf("Errore: lista piena\n");
    exit(-1);
  }
  // sposto a destra tutti gli elementi della lista 
  // maggiori del numero da inserire
  i = pl->n_elementi;
  while (i > 0 && pl->dati[i - 1] > numero) {
    pl->dati[i] = pl->dati[i - 1];
    i--;
  }
  // inserisco il numero
  pl->dati[i] = numero;
  // incremento la dimensione logica
  pl->n_elementi++;
}