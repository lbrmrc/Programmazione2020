#include <stdio.h>

#define DIMENSIONE 10
#define DIMENSIONE_DOPPIA 20

int main() {
    int a[DIMENSIONE];
    int b[DIMENSIONE];
    int c[DIMENSIONE_DOPPIA];

    int ia,ib,ic; // indici
    int na,nb,nc; // dimensione logica
    int condizione = 0; // inizializzazione

    int i;

    ia = 0; 
    ib = 0; 
    ic = 0;

    printf("Inserire il numero di elementi di a: ");
    scanf("%d",&na);
    // controllare che na sia minore di DIMENSIONE
    // if(na > DIMENSIONE) { ... }

    for(i = 0; i < na; i++) {
        printf("Inserire elemento a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    // controllo che a sia ordinato
    // 1 2 4 3 5 8 ? ? 
    for(i = 0; i < na - 1 && condizione == 0; i++) {
        if(a[i] > a[i+1]) {
            condizione = 1;
        }
    }

    if(condizione == 1) {
        printf("array a non ordinato\n");
    }

    printf("Inserire il numero di elementi di b: ");
    scanf("%d",&nb);
    // controllare che nb sia minore di DIMENSIONE
    // if(nb > DIMENSIONE) { ... }

    for(i = 0; i < nb; i++) {
        printf("Inserire elemento b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    condizione = 0;
    // controllo che b sia ordinato
    for(i = 0; i < nb - 1 && condizione == 0; i++) {
        if(b[i] > b[i + 1]) {
            condizione = 1;
        }
    }

    if(condizione == 1) {
        printf("array b non ordinato\n");
    }

    // merge 
    // a: 1 3 6 7 8     ia na = 5
    // b: 3 4           ib nb = 2
    // c: 1 3 3 4 6 7 8 ic nc
    while(ia < na && ib < nb) {

    }

    // a è completato, ricopiare b
    if(ia == na) {
        for(i = ib; i < nb; i++) {
            c[ic] = b[i];
            ic++;
        }
    }
    // b è completato, ricopiare a
    if(ib == nb) {
        for(i = ia; i < na; i++) {
            c[ic] = a[i];
            ic++;
        }
    }
}