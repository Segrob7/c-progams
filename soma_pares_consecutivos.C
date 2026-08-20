#include <stdio.h>

void Even(int x){
    if(x!=0){
    if(x % 2 != 0){
        x++;
    }
    int soma = 0;
    int i;
    for(i = 0; i < 5; i++){
        soma += x;
        x +=2;
    }
printf("%d\n", soma);
}
}
int main(){
    int x;
    while( x != 0){
    scanf("%d", &x);
    Even(x);
    }
    return 0;
}