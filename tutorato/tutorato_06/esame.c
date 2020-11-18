#include <stdio.h>

#define DIM 10

float radice3(float y) {
    float a = 1;
    float b = y;
    float x;

    do {
        x = (a+b)/2;
        
        if(x*x*x > y) {
            b = x;
        }
        else {
            a = x;
        }
    } while(b - a > 0.00001);

    return x;
}

int main() {
    float array_in[DIM];
    float array_out[DIM];
    int i = 0, i_out = 0;

    // lettura elementi primo array
    for(i = 0; i < DIM; i++) {
        printf("Inserire elemento %d: ",i);
        scanf("%f",&array_in[i]);
    }

    for(i = 0; i < DIM; i++) {
        if(array_in[i] > 1.0) {
            array_out[i_out] = radice3(array_in[i]);
            i_out++;
        }
    }

    // stampo elementi
    for(i = 0; i < i_out; i++) {
        printf("Elemento %d: %f\n",i,array_out[i]);
    }

    return 0;
}