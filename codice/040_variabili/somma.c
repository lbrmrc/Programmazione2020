#include <stdio.h>

main() {
    int a, b, c; // conterranno i numeri digitati dall'utente
    printf("Digita tre numeri interi\n");
    scanf("%d%d%d", &a, &b, &c); // input dei tre numeri
    printf("La somma e`: %d\n", a + b + c); // output della somma
}