#include <stdio.h>
#include <math.h>

void perfect(int x){
    int i;
    int z = 0;
    for(i = 1; i < x - 1; i++){
            if(x % i == 0){
            z += i;
            }
    }
        if(z == x){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
}
int main(){
int i, n, x;
scanf("%d", &n);
for(i = 0; i < n; i++){
scanf("%d", &x);
perfect(x);
}

return 0;
}