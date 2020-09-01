#include <stdio.h>

main() {
  int jd = 1234567;

  if (jd % 7 == 0) printf("Lunedi`\n");
  else if (jd % 7 == 1) printf("Martedi`\n");
  else if (jd % 7 == 2) printf("Mercoledi`\n");
  else if (jd % 7 == 3) printf("Giovedi`\n");
  else if (jd % 7 == 4) printf("Venerdi`\n");
  else if (jd % 7 == 5) printf("Sabato\n");
  else printf("Domenica\n");
}