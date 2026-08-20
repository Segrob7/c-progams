#include <stdio.h>
int main(){
int l1, l2, l3, B;
scanf("%d", &l1);
scanf("%d", &l2);
if(l2 > l1){
l3 = l2;
printf("%d", l3);
}
else if(l1 > l2){
l3 = l1;
printf("%d", l3);
}
else if(l2 == l1){
    l3 = l1;
printf("%d", l3);
}

return 0;
}