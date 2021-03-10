#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo; //criando arquivo
    char nomes[20];
    char a;

    printf("Digite o nome do arquivo criado:\n");
    scanf("%s", nomes);

    arquivo = fopen(nomes,"w"); // fopen = abrir arquivo // w = escrever

    if (arquivo == NULL){ // se aqrquivo foi igual a NULL( nao valido ) > arquivo sera fechado
        printf("Arquivo nao pode ser aberto\n");
        exit(1); // sair
    }
    printf("Digite as palavras para gravar no arquivo (Digite: # para terminar)\n");
    do{
        a = getchar(); //receber vetor de carcteres
        putc(a, arquivo); // putc = Escreve um caractere no arquivo.
    }
    while (a != '#');

    fclose(arquivo); // close no arquivo


    return 0;
}
