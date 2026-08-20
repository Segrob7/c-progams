#include <stdio.h>

int main(){
int l;
int r;
printf("chose two numbers\n");
scanf("%d", &l);
scanf("%d", &r);
if(l == r || r - l == 1){
    printf("one of the most common divisible integers is: %d", l);
}
else {
    printf("one of the most common divisible integers is : 2");
}

return 0;
}