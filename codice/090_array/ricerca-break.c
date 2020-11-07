#define DIM 10
int main() {
  int a[DIM];
  int i;

  for (i = 0; i < DIM; i++)
    if (/* proprieta` desiderata di a[i] */)
      break;

  if (i < DIM)
    /* fai qualcosa con i o a[i] */
}