#include <stdio.h>
#include <math.h>

int main(){

int n, r, t;
int x1, x2;
int z = 0;
int w = 0;

scanf("%d", &n);

int i;
while(z < n){
    i++;
    long long x1 = 5*i*i - 4;
    long long x2 = 5*i*i + 4;
    r = round(sqrt((double)x1));
    t = round(sqrt((double)x2));
if(x1 == r * r || x2 == t * t){
    w++;
printf("%d n eh um fibonote sua posicao eh %d\n", i, w);
}
else{
    z++;
    printf("%d eh um fibonot e sua posicao eh %d\n", i, z);
}
}

    return 0;
}