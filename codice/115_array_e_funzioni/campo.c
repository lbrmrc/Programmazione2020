void f(Persona p) {
  p.nome[0] = 'A';
}

int main() {
  Persona per = {"Mario", 25};
  f(per); // per.nome rimane invariato
  return 0;
}
