#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if ( numero >0){
        printf("o numero %d eh Positivo", numero);
    }
     if ( numero <0){
        printf("o numero %d eh Negativio", numero);
    }
    else{
     printf("O numero %d eh NULO ", numero);
    }

    return 0;
}
