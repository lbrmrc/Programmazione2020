#include <stdio.h> 
#include <math.h> 
#define PI 3.14159

int fatt(int n){ 
    if (n>1) 
		return n*fatt(n-1); 
    else 
		return 1; 
} 
 

double sinTaylor(double x, int n){ 
    if (n >= 0)
		return ( pow(-1,n)*pow(x,2*n+1)/fatt(2*n+1) + sinTaylor(x,n-1) ); 
    else 
		return 0;	
} 
 

int main() { 
    double x,ris; 
    int n;
    do{ 
        printf("Inserire angolo in radianti: "); 
        scanf("%lf",&x); 
    }while (x < 0 || x >= 2*PI);

    printf("Inserire grado del polinomio: "); 
    scanf("%d",&n);
    ris = sinTaylor(x,n);

    printf("sinTaylor(%lf,%d) = %lf\n",x,n,ris); 
    printf("sin(%lf) = %lf\n",x,sin(x)); 
	
	return 0;
}