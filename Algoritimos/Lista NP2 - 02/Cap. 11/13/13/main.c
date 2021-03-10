//
//  main.c
//  13
//
//  Created by Jonas Herminio on 29/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    FILE *arquivo; //criando arquivo
    char nomes[50];
    char a;
    
    printf("Digite o nome do cadastro da estacao:\n");
    scanf("%s", nomes);
    
    arquivo = fopen(nomes,"w"); // fopen = abrir arquivo // w = escrever
    
    if (arquivo == NULL){ // se aqrquivo foi igual a NULL( nao valido ) > arquivo sera fechado
        printf("Arquivo nao pode ser aberto\n");
        exit(1); // sair
    }
    printf("Digite respectivamente : Estacao do ano: \n nome do estilista: \n cod da roupa:\n (Digite: # para terminar)\n");
    do{
        a = getchar(); //receber vetor de carcteres
        putc(a, arquivo); // putc = Escreve um caractere no arquivo.
    }
    while (a != '#');
    
    fclose(arquivo); // close no arquivo
    
    // abrindo o arquivo
    
    printf("Digite o nome do cadastro a ser Lido:\n");
    scanf("%s", nomes);
    
    arquivo = fopen(nomes,"r");   // fopen = abrir arquivo // r = ler arquivo
    //arquivo = fopen("nome","r"); nome estre aspas serve para quando ja se sabe o nome do arquivo
    if(!arquivo) // se diferente de arquivo finalizar
    {
        printf( "Erro na abertura do arquivo");
        exit(1);
    }
    while((a = getc(arquivo) ) != EOF)  // Enquanto nao chegar ao final do arquivo // getc = ler arquivo de file
        // EOF ("End of file") indica o fim de um arquivo
        printf("%c", a);                 // imprime o caracter lido
    fclose(arquivo);                // close arquivo
     return 0;
}
