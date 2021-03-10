#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *arquivo;
   char a;
   char nome[20];

   printf("Digite o nome do arquivo a ser Lido:\n");
   scanf("%s", nome);

   arquivo = fopen(nome,"r");   // fopen = abrir arquivo // r = ler arquivo
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
