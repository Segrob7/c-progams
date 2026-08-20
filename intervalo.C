#include <stdio.h>

int main(){

printf("select a number: ");
int a;
scanf("%d", &a);
if(0 <= a && a <= 25){
    printf("Intervalo [0,25]");
}
else if(25 < a && a <= 50){
    printf("Intervalo (25,50]");
}
else if(50 < a && a <= 75){
    printf("Intervalo (50,75]");
}
else if(75 < a && a <= 100){
    printf("Intervalo (75,100]");
}
else{
    printf("Fora de intervalo");
}
    return 0;
}