//
//  main.c
//  17
//
//  Created by Jonas Herminio on 29/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
struct cliente{
    int cod;
    float preco;
    char descricao[20];
    
};

int main(int argc, const char * argv[]) {
    
    FILE *arquivo;
    char a;
    char continuar;
    
    arquivo = fopen("PRODUTOS.DAT", "rt");
    printf("arquivo PRODUTOS.DAT criado com sucesso!\n");
    arquivo = fopen("ARQUIVO2.DAT", "rt");
    
    struct cliente c;
    
    arquivo = fopen("PRODUTOS.DAT", "a+");
    
    if (arquivo == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }
    
    else {
        
        do{
        printf("Digite o Cod. do produto\n");
        scanf("%d%*c",&c.cod);
        printf("Digite a descricao do produto\n");
        gets(c.descricao);
            fflush(stdin);
        printf("Digite o preco do produto\n");
        scanf("%f%*c",&c.preco);
        printf("Deseja continuar?...Digite s para sim ou n para nao \n");
        scanf("%c",&continuar);
            fflush(stdin);
            
        
        fwrite(&c, sizeof(struct cliente), 1, arquivo);
        
        }
        while (continuar == 's');
            fclose(arquivo);
        printf("terminando....");
    }
        getchar();
    
    printf("Mostrando a Descricao de precos com mais de 500RS\n");
    
    arquivo = fopen("PRODUTOS.DAT", "a+");
    
    if (arquivo == NULL){
        printf("ERRO AO ABRIR O ARQUIVO");
    }
    else{
        fread(&c, sizeof(struct cliente), 1, arquivo);
        while (!feof(arquivo)) {
            printf("mostrando cod do produto %d", c.cod);
        }
        fclose(arquivo);
        getchar();

        
    }
    return 0;
}