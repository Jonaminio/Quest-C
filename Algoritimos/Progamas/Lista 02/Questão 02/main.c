#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2,e;
    printf("Digite dois numeros");
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    e = (numero1 + numero2);

    if(e >10){
    printf("O resultado eh %d", e);
    }
    return 0;
}
