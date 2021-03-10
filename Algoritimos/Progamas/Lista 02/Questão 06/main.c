#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int numero,e;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero >=0){
    numero = sqrt(numero);
    printf("O resultado eh %d",numero);
    }
    else {
    numero = pow(numero,2);
    printf("O resultado eh %d",numero);
    }
    return 0


}
