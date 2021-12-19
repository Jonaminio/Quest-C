#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int main()
{
    int i,j,aux;
    int Vet1[MAX];
    int num;
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

    for (j=1; j< MAX;j++) {
        for (i = 0; i < MAX - 1; i++) {
            if (Vet1[i] > Vet1[i + 1]) {
                aux = Vet1[i];
                Vet1[i] = Vet1[i + 1];
                Vet1[i + 1] = aux;
     }
   }
 }
    printf("\nElementos do array em ordem crescente:\n");
        for (i = 0; i < MAX; i++) {
            printf("%4d", Vet1[i]);
}
printf("\n");

}
