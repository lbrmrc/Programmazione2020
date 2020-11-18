#include <stdio.h>

int main() {
    int array[5];
    int i;
    int somma = 0;

    for(i = 0; i < 5; i++) {
        // while
        printf("Inserire elemento in posizione %d: ",i);
        scanf("%d",&array[i]);
    }

    for(i = 0; i < 1000; i = i + 1) {
        printf("la variabile i vale: %d\n",i);
        somma = somma + array[i];
    }
}