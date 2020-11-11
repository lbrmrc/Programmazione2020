int rnd_int(int min, int max) {
  return min + rand() % (max - min + 1);
}

double rnd_double(double min, double max) {
  return min + (double)rand() / RAND_MAX * (max - min);
}