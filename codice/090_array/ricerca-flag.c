#define DIM 10
int main() {
  int a[DIM];
  int trovato = 0, i;

  while (!trovato && i < DIM)
    if (/* proprieta` desiderata di a[i] */)
      trovato = 1;
    else
      i++;

  if (trovato)
    /* fai qualcosa con i o a[i] */
}