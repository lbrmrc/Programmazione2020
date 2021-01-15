#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 21

typedef struct {
    char esame[DIM];
    int voto;
} libretto;

int main() {
    libretto l1, l2;
    FILE *f1, *f2, *fout;
    
    f1=fopen("libretto1.bin", "rb");
    fout=fopen("output.bin", "w+b");
    f2=fopen("libretto2.bin", "rb");
    
    if(f1==NULL || fout==NULL || f2==NULL) {
        printf("Errore nell'apertura del file. Uscita...\n");
        exit(-1);
    }
    
    while(fread(&l1, sizeof(libretto), 1, f1)) {
        fread(&l2, sizeof(libretto), 1, f2);
        if(strcmp(l1.esame, l2.esame)==0) {
            if(l1.voto < l2.voto) {
                l1.voto = l2.voto;
            }
            fwrite(&l1, sizeof(libretto), 1, fout);
        }
    }
    
	fclose(f1);
    fclose(f2);
	
    rewind(fout);

    while(fread(&l1, sizeof(libretto), 1, fout)) {
        printf("%s %d\n", l1.esame, l1.voto);
    }
    
    fclose(fout);
	
	return 0;
}
