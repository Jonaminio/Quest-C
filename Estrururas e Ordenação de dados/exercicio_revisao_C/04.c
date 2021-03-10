#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int main()
{
    int i;
    int Vet1[MAX];
    int num;
    // pegando os numeros
    printf("Digite os numeros do vetor: \n");
    for(i=0; i<MAX; i++){
       scanf("%d",&Vet1[i]);
    }
    fflush(stdin);
    // MOSTRANDO OS NUMEROS
    printf("Os Numeros Sao:\n\n");
    for(i=0; i<MAX; i++){
    printf("%d ",Vet1[i]);
    }
    printf("\n Digite o numero que quer verificar existencia no vetor: \n");
    scanf("%d", &num);

    //pegando o valor
    for(i=0; i<MAX; i++){

        if(Vet1[i] == num){
            printf("O numero %d se encontra no Vetor, na posisao %d \n",num,i);
            return 0;
        }
    }
    printf("Não foi encontrado");
    return 0;
    //oi
}
