#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int num;
    int p;
    int q;
    // pegando os numeros
    printf("Digite o Numero a ser Calculado: \n");
    scanf("%d",&num);

    for(i=0; i<num; i++){
        p = num;
        q = p + num;
    }

    printf("Resultado: %d \n",q);

    return 0;
}
