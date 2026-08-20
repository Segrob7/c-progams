#include <stdio.h>
#include <math.h>
void Logic(int PA, int PB, double GA, double GB){
    int t = 0;
while(PA <= PB && t <= 101){
    PA += (int)(PA*GA/100);
    PB += (int)(PB*GB/100);
    t++;
}
    if(t >100){
     printf("Mais de 1 seculo.\n");
    }
    else{
    printf("%d anos.\n", t);
    }
}

int main(){
int t;
int i;
int PA, PB;
double GA, GB;
scanf("%d", &t);
for(i = 0; i < t; i++){
    scanf("%d", &PA);
    scanf("%d", &PB);
    scanf("%lf", &GA);
    scanf("%lf", &GB);
    Logic(PA, PB, GA, GB);

}

return 0;
}