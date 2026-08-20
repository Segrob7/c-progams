#include <stdio.h>
int main(){

int num[5];
int i;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
for(i = 0; i < 5; i++){
    scanf("%d", &num[i]);
if(num[i] > 0){
    a++;
}
if(num[i] < 0){
    b++;
}
if(num[i]%2 == 0){
    c++;
}
if(num[i]%2 != 0){
    d++;
}
}
printf("%d valor(es) par(es)\n", c);
printf("%d valor(es) impar(es)\n", d);
printf("%d valor(es) positivo(s)\n", a);
printf("%d valor(es) negativo(s)\n", b);
    return 0;
}