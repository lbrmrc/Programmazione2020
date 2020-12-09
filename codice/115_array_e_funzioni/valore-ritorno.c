Persona leggiPersona() {
  Persona p;
  scanf("%s%d", p.nome, &p.eta);
  return p; // corretto: il valore di ritorno e` una copia di p
}

int main() {
  Persona per;
  per = leggiPersona();
  return 0;
}
