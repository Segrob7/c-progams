#include <stdio.h>
int main(){
int s;
int t;
int f;
printf("bem vindo ao relogio automatizado\n");
printf("por favor fale o horario de partida: ");
scanf("%d", &s);
printf("por favor informe o fuso: ");
scanf("%d", &f);
printf("por favor informe o tempo de viagem: ");
scanf("%d", &t);
s = s + t + f;
if(s >= 23){
    s = s -24;
    printf("voce chegou ao seu destino no horario: %dh", s);
}
else{
    printf("voce chegou ao seu destino no horario: %dh", s);
}
    return 0;
}