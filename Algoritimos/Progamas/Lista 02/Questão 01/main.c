#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero");
    scanf("%d",&numero);
    if ( numero >20){
        printf("o numero %d eh maior que 20", numero);
    }
    else{
     printf("O numero %d nao eh maior que 20", numero);
    }
    return 0;
}
