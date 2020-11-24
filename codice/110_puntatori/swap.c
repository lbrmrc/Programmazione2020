#include <stdio.h>

int main() {
    int a = 2, b = 3, t;

    t = a;
    a = b;
    b = t;
    printf("%d %d\n", a, b); // stampa 3 2
}