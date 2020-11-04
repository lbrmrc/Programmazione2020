int potenza(int base, int esp) {
  int cont, prod = 1;
  for (cont = 0; cont < esp; cont++)
    prod *= base;
  return prod;
}