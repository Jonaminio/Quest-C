//
//  main.c
//  21
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
#define linha 5
#define coluna 5

int main(int argc, const char * argv[]) {
    
    float mat[linha][coluna],matr[linha][coluna];
    int i, j;
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("Digite um numero para a posição [%d][%d]:\n", i, j);
            scanf("%f", &mat[i][j]);
            matr[i][j] = (mat[i][i] * mat[i][i]);
        }
    }
    
    fflush(stdin);
    printf("Matriz Recebida\n");
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("%3.f ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz Resultante\n");
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("%3.f ",matr[i][j]);
        }
        printf("\n");
    }

    
    
    return 0;
}