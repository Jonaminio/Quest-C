//
//  main.c
//  23
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
#define linha 3
#define coluna 4

int main(int argc, const char * argv[]) {
    
    int mat[linha][coluna];
    int i, j, cont1=0,soma=0,mediatodos=0;
    
    
    for(i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        {
            printf("digite um numero para a posição [%d] [%d]:\n", i, j);
            scanf("%d", &mat[i][j]);
            if ((mat[i][j] / 2) == 0) {
                cont1 ++;
                soma = mat[i][j] + soma;
            }
            mediatodos = mat[i][j] + mediatodos;
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
    
    printf("Quantidade de pares: %d\n",cont1);
    printf("Soma de pares: %d\n",soma);
    printf("Media total %d\n",mediatodos/12);
    
    
    
    return 0;
}
