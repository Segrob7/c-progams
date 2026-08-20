#include <stdio.h>
int main(){
int i;
int z = 0;
double num[6];
double h = 0;
for(i = 0; i < 6; i++){
    scanf("%lf", &num[i]);
    if(num[i] > 0){
    h += num[i];
    z++;
    }
}
printf("%d valores positivos\n", z);
printf("%lf", h /z);
}