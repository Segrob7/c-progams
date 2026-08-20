#include <stdio.h>
#include <math.h>

double Bhaskara(double a, double b, double c, double* x1, double* x2){
    int D = b*b -4*a*c;
    if(D >= 0){
        *x1 =(b - sqrt(D))/2*a;
        *x2 =(b + sqrt(D))/2*a;
    }
    return D;
}
int main(){
double a,b,c,x1,x2;
a = 1;
b = 3;
c = 3;
x1 = 0;
x2 = 0;
Bhaskara(a, b, c, &x1, &x2);
if(b*b - 4*a*c > 0){
    printf("X1 = %5lf\n",x1 );
    printf("X2 = %5lf\n",x2 );
}
else{
    printf("impossivel calcular");
}
    return 0;
}