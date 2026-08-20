#include <stdio.h>

void Even(int x){
    if(x%2==0){
        int i;
        for(i = 0; i < 5; i++){
            x++;
            x+=2;
        }
    }
    else{
        x+=1;
        int i;
        for(i = 0; i < 5; i++){
            x++;
            x+=2;
    }
    printf("%d", x);

}
}
int main(){

    int x;
    scanf("%d", &x);
    Even(x);

    return 0;
}