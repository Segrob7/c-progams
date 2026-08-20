#include <stdio.h>
int main(){
    char *renas[] = {"Dasher","Dancer","Prancer","Vixen","Comet","Cupid","Donner","Blitzen","Rudolph"};
    int soma = 0, x;
    for(int i = 0; i < 9; i++){
        scanf("%d", &x);
        soma += x;
    }
    printf("%s\n", renas[(soma - 1) % 9]);
    return 0;
}