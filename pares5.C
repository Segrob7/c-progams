#include <stdio.h>
int main(){
int i;
int z = 0;
int num[5];
for(i = 0;i < 5; i++){
scanf("%d", &num[i]);
if (num[i]%2 == 0){
z++;
}
}
printf("%d valores pares", z);
    return 0;
}