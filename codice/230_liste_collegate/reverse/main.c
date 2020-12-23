// Client ADT Lista

#include <stdio.h>

#include "lista.h"

int main(){
    Lista l1,l2;
    nuovaLista(&l1);
    insTesta(&l1, 1.5);
    insTesta(&l1, 0.7);
    insTesta(&l1,-2.3);
    // l1 = [-2.3, 0.7, 1.5]
    reverse(l1,&l2);
    printf("Lista originale:\n");
    stampa(l1);
    printf("Lista inversa:\n");
    stampa(l2);

    return 0;
}