#include <stdio.h>

#define MAX_LEN 20

int main() {
    char parola[MAX_LEN];
    int i;

    printf("Inserire parola: ");
    scanf("%s",parola);

    printf("letta: %s\n",parola);

    // ciao
    // parola[0] = 'c'
    // parola[1] = 'i'
    // parola[2] = 'a'
    // parola[3] = 'o'
    // parola[4] = '\0'
    // parola[5] = ??

    i = 0;
    while(parola[i] != '\0') {
        printf("letto: %c\n",parola[i]);
        i++;
    }

    printf("lunghezza stringa: %d\n",i);
}