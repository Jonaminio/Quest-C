#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2,r;
    printf("Digite dois numeros: ");
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    r = (numero1 + numero2);

    if(r >20){
    r = (r+8);
    printf("O resultado eh %d", r);
    }
    else{
    r = (r-5);
    printf("O resultado eh: %d", r);
    }
    return 0;
}
