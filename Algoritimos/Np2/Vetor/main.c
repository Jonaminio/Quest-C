#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //pedir nome e sobrenome por strings
    char nome[20]; char snome[20];
    printf("Digite seu nome\n");
    scanf("%s",nome);
    printf("Digite seu sobrenome\n");
    scanf("%s",snome);

    printf("O nome completo eh %s de %s",nome,snome);
    return 0;

}
