#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int i;
    int menor;
    int posisao;
    int Vet1[MAX];
    // pegando os numeros
    for(i=0; i<MAX; i++){
       scanf("%d",&Vet1[i]);
    }
    fflush(stdin);
    // MOSTRANDO OS NUMEROS
    printf("Os Numeros Sao:\n\n");
    for(i=0; i<MAX; i++){
    printf("%d ",Vet1[i]);
    }
    //pegando mensor
    menor = Vet1[0];
    for(i=0; i<MAX; i++){

        if(Vet1[i] < menor){
            menor = Vet1[i];
            posisao = i;
        }
    }
    printf("\n O menor e: %d ,na posisao: %d",menor,posisao);

    return 0;
}
