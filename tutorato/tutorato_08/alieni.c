#include <stdio.h>
#include <string.h>

typedef struct coppia {
	char lettera;
	char codificato[4];
} coppia;

int main() {
	int nLettere = 0;
	int i = 0;
	int j;
	char triplaCorrente[4];
	char messaggio[50];
	FILE *fp;
	coppia lettere[26];

	fp = fopen("corrispondenze.txt", "r");

	if (fp == NULL) {
		printf("Impossibile aprire il file corrispondenze.txt\n");
		return -1;
	}

	while (fscanf(fp, " %c %s", &lettere[nLettere].lettera, lettere[nLettere].codificato) > 0) {
		printf("%c %s\n", lettere[nLettere].lettera, lettere[nLettere].codificato);
		nLettere++;
	}

	fclose(fp);

	fp = fopen("messaggi.txt", "r");

	if (fp == NULL) {
		printf("Impossibile aprire il file messaggi.txt\n");
		return -1;
	}

	while (fscanf(fp, "%s", messaggio) > 0) {
		i = 0;
		// decodifico il messaggio
		printf("Messaggio: ");
		while (messaggio[i] != '\0') {
			// copio la stringa
			triplaCorrente[0] = messaggio[i];
			triplaCorrente[1] = messaggio[i + 1];
			triplaCorrente[2] = messaggio[i + 2];
			triplaCorrente[3] = '\0';

			for (j = 0; j < nLettere; j++) {
				if (strcmp(lettere[j].codificato, triplaCorrente) == 0) {
					printf("%c", lettere[j].lettera);
					break;
				}
			}
			i = i + 3;
		}
		printf("\n");
	}

	fclose(fp);

	printf("Inserire il messaggio da codificare: ");
	scanf("%s", messaggio);

	// codifico il messaggio
	printf("Codificato: ");
	i = 0;
	while (messaggio[i] != '\0') {
		for (j = 0; j < nLettere; j++) {
			if (lettere[j].lettera == messaggio[i]) {
				printf("%s", lettere[j].codificato);
				break;
			}
		}
		i++;
	}
	printf("\n");
	return 0;
}