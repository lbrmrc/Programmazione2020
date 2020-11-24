void g(int* h) {
  (*h)++;
}
int f(int a, int* b) {
  g(b);
  return a + (*b);
}
main() {
  int c = 1, d = 3, s = 6;
  s = f(c, &d);
}