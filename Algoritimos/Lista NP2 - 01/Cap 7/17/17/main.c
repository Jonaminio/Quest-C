//
//  main.c
//  17
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//
#include <stdio.h>
#define linha 10
#define coluna 10

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
    
        for(i=1; i<=linha; i++)
        {
            aux = aux + mat[i][i];

        }
        
         aux = (aux / 10);
        
        printf("A media da matriz Diagonal principal eh: %d\n",aux);
    
    
    return 0;
}