#include <stdio.h>

int main(){
float b;
int c;
int a;
float total = 0;

do{
printf("1 = Cachorro Quente(R$4,00), 2 = X-salada(R$4,50), 3 = X-Bacon(R$5,00), 4 = Torrada Simples(R$2,00), 5 = Refrigerante(R$1,50), 0 = quit\n");
scanf("%d", &a);
switch (a)
{
case 1:
b = 4;
printf("how many?: ");
scanf("%d", &c);
total += b*c;
break;

case 2:
b = 4.5;
printf("how many?: ");
scanf("%d", &c);
total += b*c;
break;

case 3:
b = 5;
printf("how many?: ");
scanf("%d", &c);
total += b*c;
break;

case 4:
b = 2;
printf("how many?: ");
scanf("%d", &c);
total += b*c;
break;

case 5:
b = 1.5;
printf("how many?: ");
scanf("%d", &c);
total += b*c;
break;
default:
break;
}

}while(a != 0);

printf("o total foi de = R$%5lf", total);

return 0;
}