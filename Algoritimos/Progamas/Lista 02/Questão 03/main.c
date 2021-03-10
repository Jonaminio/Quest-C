#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    resto = numero%2;

    if ( resto == 0 ){
        printf("o numero %d eh par", numero);
    }
    else{
     printf("O numero %d eh impar", numero);
    }
    return 0;
}
