#include <stdio.h>
int main(){

int n;
int z = 0;
scanf("%d", &n);
int lista[n];
int i = 0;
for(i = 0; i < n; i++){
    scanf("%d", &lista[i]);

}

int dif = lista[1] - lista[0];

for(i = 2; i < n; i++){
int neodif;
neodif = lista[i] - lista[i -1];
if (neodif != dif)
{
    dif = neodif;
    z++;
}

}

printf("%d", z+1);
return 0;
}