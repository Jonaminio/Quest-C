//
//  main.c
//  15
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//
#include <stdio.h>
#define linha 15
#define coluna 13

int main(int argc, const char * argv[]) {
    
    int mat[linha][coluna];
    int matr[linha][coluna];
    int i, j, aux;
    
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("digite um numero para a posição [%d] [%d]:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            if(mat[i][j]>mat[i][j] || mat[i][j]==mat[i][j] )
            {
                aux=mat[i][j];
                matr[i][j]=mat[i][j]/aux;
            }
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
    
    printf("Matriz resultante:\n");
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("%3d ",matr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
