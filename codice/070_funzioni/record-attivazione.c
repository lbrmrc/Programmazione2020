int R(int A) {
  int x = 2, y;
  y = x + A;
  return y;
}
int Q(int x) {
  int y;
  y = 2 * R(x);
  return y;
}
int P(void) {
  int a = 10, b;
  b = Q(a);
  return b;
}
main() {
  int x = 1;
  int y;
  y = x + P();
}