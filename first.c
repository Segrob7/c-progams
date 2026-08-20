#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

printf("Pedra, Papel ou Tesoura, use (1,2,3) respectivamente e (4) para sair\n");

int player1;
srand(time(NULL));

int player2 = rand() %3 + 1;
do{
    scanf("%d", &player1);
    int player2 = rand() %3 + 1;
if((player1 == 1) && (player2 == 2)){
    printf("voce perdeu\n");
}
else if((player1 == 1) && (player2 == 3)){
    printf("voce ganhou\n");
}
else if((player1 == 1) && (player2 == 1)){
    printf("empate\n");
}
else if ((player1 == 2) && (player2 == 1)){
    printf("voce ganhou\n");
}
else if ((player1 == 2) && (player2 == 2))
{
scanf("empate\n");
}
else if ((player1 == 2) && (player2 == 3)){
    printf("voce perdeu\n");
}
else if ((player1 == 3) && (player2 == 1)){
    printf("voce perdeu\n");
}
else if ((player1 == 3) && (player2 == 2))
{
printf("ganhou\n");
}
else if ((player1 == 3) && (player2 == 3)){
    printf("voce empatou\n");
}
}while(player1 != 4);
printf("ate mais tarde\n");
    return 0;
}