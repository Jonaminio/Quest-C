#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100];char b[100];
    printf("entre com a palavra ou frase para ver se eh um palindromo:\n");
    gets(a); //gets = Outra forma de scanf
    strcpy(b,a); //strcpy = copia string
    strrev(b); //strrev = Retorna string Invstido

    if(strcmp(a,b)== 0)//strcmp = compara duas strings
    {
        printf("A frase ou palavra eh um palindromo\n");
    }
    else
       printf("A frase ou palavra nao eh um palindromo\n");

    return 0;
}
