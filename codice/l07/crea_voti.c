#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i <50; i++){
        printf("%d\n", 18 + rand() % 13); // numero casuale compreso fra 18 e 30
    }
    printf("-1\n");
}