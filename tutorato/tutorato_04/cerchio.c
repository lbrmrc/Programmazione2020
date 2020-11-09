#include <stdio.h>

// float piGreco(int precisione);

int power(int base, int esponente) {
    // calcolare base^esponente
    // tramite moltiplicazioni successive
    int exp = 0;
    int val = 1;
    
    // 2^4 = 2*2*2*2
    // 2*2 -> 4
    // 4*2 -> 8
    // 8*2 -> 16

    // caso generale: esponente > 0, base > 0
    
    // while(exp < esponente) {
    //     val = val * base;
    //     exp++;
    // }

    for(exp = 0; exp < esponente; exp++) {
        val = val * base;
    }

    return val;
}

float piGreco(int precisione) {
    float risultato = 0;
    int divisore = 1;
    int i;

    for(i = 1; i <= precisione; i++) {
        if(i % 2 == 0) {
            risultato = risultato - (float) 1/divisore;
        }
        else {
            risultato = risultato + 1.0/divisore;
        }

        divisore = divisore + 2;
    }

    return 4*risultato;
}

int diametroCerchio(int raggio) {
    return 2*raggio;
}

float perimetroCerchio(int raggio) {
    return piGreco(100) * diametroCerchio(raggio);
}

float areaCerchio(int raggio) {
    return piGreco(100) * power(raggio,2);
}

int main() {
    int raggio;
    float target = 3.141592;
    int i;

    // printf("Inserire il raggio del cerchio: ");
    // scanf("%d",&raggio);
    for(i = 5; i < 100; i++) {
        printf("%d) differenza: %f\n", i,target - piGreco(i));
    }
    // printf("Diametro: %d\n",diametroCerchio(raggio));
    // printf("Perimetro: %f\n",perimetroCerchio(raggio));
    // printf("Area: %f\n",areaCerchio(raggio));
}