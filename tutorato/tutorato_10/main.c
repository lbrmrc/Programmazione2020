#include <stdio.h>
#include <stdlib.h>

#include "listaInsegnamenti.h"

int main(int argc, char *argv[]) {
    FILE *fp;
    Lista list;
    char codice[10];
    float inizio, fine;
    int g;
    DatiCorso d;

    if(argc != 2 && argc != 3) {
        printf("Uso ./orari <file>\n");
        exit(-1);
    }

    fp = fopen(argv[1],"rt");
    if(fp == NULL) {
        printf("Errore apertura file\n");
        exit(-2);
    }

    nuovaLista(&list);
    while(fscanf(fp,"%s%d%f%f",codice,&g,&inizio,&fine) > 0) {
        aggiorna(&list,codice,fine - inizio);
    }

    fclose(fp);
    
    if(argc == 3) {
        fp = fopen(argv[2],"rb");
        if(fp == NULL) {
            printf("Errore apertura file\n");
            exit(-2);
        }

        while(fread(&d,sizeof(DatiCorso),1,fp) == 1) {
            printf("Corso: %s, anno: %d, ore: %.1f\n",d.nome,d.anno,ricercaOre(list,d.codice));
        }

        fclose(fp);
    }
    else {
        stampa(list);
    }

    return 0;
}