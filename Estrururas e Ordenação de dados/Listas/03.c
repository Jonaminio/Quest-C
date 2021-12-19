#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int main()
{
    int i = 0;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int encontrado = 0;

    int valor = 11;

    fflush(stdin);
    while (i < 10 && !encontrado) {
        if (vetor[i] == valor) {
            encontrado = 1;
        } else {
            i++;
        }
    }

    if (encontrado) {
        printf ("Valor %d esta na posicao %d\n",vetor[i], i);
    } else {
        printf ("Valor %d nao encontrado\n",valor);
    }

}
