#include <stdio.h>

int main()
{
int a,b,c,d,e,f,g,h,i;
int S;
int W;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
scanf("%d", &e);
scanf("%d", &f);
scanf("%d", &g);
scanf("%d", &h);
scanf("%d", &i);

S = a + b + c + d + e +f + g + h + i;
W = S % 9;
if(W == 0){
    W = 9;
    switch(W)
    {
        case 1:
        printf("Dasher");
        break;
        case 2:
        printf("Dancer");
        break;
        case 3:
        printf("Prancer");
        break;
        case 4:
        printf("Vixen");
        break;
        case 5:
        printf("Comet");
        break;
        case 6:
        printf("Cupid");
        break;
        case 7:
        printf("Donner");
        break;
        case 8:
        printf("Blitzen");
        break;
        case 9:
        printf("Rudolph");
        break;
    }
}
else {
        switch(W)
    {
        case 1:
        printf("Dasher");
        break;
        case 2:
        printf("Dancer");
        break;
        case 3:
        printf("Prancer");
        break;
        case 4:
        printf("Vixen");
        break;
        case 5:
        printf("Comet");
        break;
        case 6:
        printf("Cupid");
        break;
        case 7:
        printf("Donner");
        break;
        case 8:
        printf("Blitzen");
        break;
        case 9:
        printf("Rudolph");
        break;
    }
}
    return 0;
}