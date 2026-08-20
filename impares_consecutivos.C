#include <stdio.h>
#include <math.h>
void Odd(int x, int y){
    if(x%2 ==0){
        x++;
    }
    int i;
    int soma = 0;
    for(i = 0; i< y; i++){
        soma += x;
        x +=2;
    }
    printf("%d\n", soma);
}

int main(){
    int x, y, n ,i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
    scanf("%d", &x);
    scanf("%d", &y);
    Odd(x, y);
    }
return 0;
}