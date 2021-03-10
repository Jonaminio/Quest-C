//
//  main.c
//  19
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//
#include <stdio.h>
#define linha 8
#define coluna 6

int main(int argc, const char * argv[]) {
    
    int mat[linha][coluna];
    int i, j, aux=0;
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("Digite um numero para a posição [%d][%d]:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    fflush(stdin);
    printf("Matriz Recebida\n");
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("%3d ",mat[i][j]);
        }
        printf("\n");
    }

    for (i=1; i<= coluna; i++) {
        
        aux = aux + mat[1][i];
    }
    aux = aux / 6 ;
    printf("Media dos elementos da Linha 2 da matriz: %d\n",aux);
    
    for (i=1; i<= coluna; i++) {
        
        aux = aux + mat[3][i];
    }
    aux = aux / 6 ;
    printf("Media dos elementos da Linha 4 da matriz: %d\n",aux);
    for (i=1; i<= coluna; i++) {
        
        aux = aux + mat[5][i];
    }
    
    aux = aux / 6 ;
    printf("Media dos elementos da Linha 6 da matriz: %d\n",aux);
    for (i=1; i<= coluna; i++) {
        
        aux = aux + mat[7][i];
    }
    aux = aux / 6 ;
    printf("Media dos elementos da Linha 8 da matriz: %d\n",aux);

    
    return 0;
    }