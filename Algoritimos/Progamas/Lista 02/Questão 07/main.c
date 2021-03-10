#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero");
    scanf("%d",&numero);

    if ( numero%3 == 0){
        printf("o numero %d eh multiplo de 3", numero);
    }
    else{
     printf("O numero %d nao eh ultiplo de 3", numero);
    }
    return 0;
}
