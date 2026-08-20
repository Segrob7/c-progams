#include <stdio.h>
#include <math.h>

int main(){

long long int n, r, t;
long long int z = 0;
long long int i = 0;

scanf("%lld", &n);

while(z < n){
    i++;
    long long x1 = 5*i*i - 4;
    long long x2 = 5*i*i + 4;
    r = round(sqrt((double)x1));
    t = round(sqrt((double)x2));
if(x1 == r * r || x2 == t * t){
}
else{
    z++;
}
}
printf("%lld", i);

    return 0;
}