int ricerca(Lista l, int numero) {
  int i;
  // scorro tutti gli elementi della lista
  for (i = 0; i < l.n_elementi; i++) {
    // se trovo il numero cercato, ritorno 1
    if (l.dati[i] == numero)
      return 1;
  }
  // la lista e' finita: ritorno 0
  return 0;
}