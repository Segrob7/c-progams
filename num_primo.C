#include <stdio.h>
#include <math.h>
int main(){
int n, t, j, i;
scanf("%d", &t);
for(j = 0; j < t; j++){
scanf("%d", &n);
if(n ==2 || n == 3){
    printf("%d eh primo\n", n);
}
else if(n == 1){
    printf("%d nao eh primo\n", n);
}
for(i = 2; i <= sqrt(n); i++){
    n % i;
    if(n % i == 0){
        printf("%d nao eh primo\n", n);
        break;
    }

    if (i == (int)sqrt(n)) {
        printf("%d eh primo\n", n);
    }
}
}
    return 0;
}