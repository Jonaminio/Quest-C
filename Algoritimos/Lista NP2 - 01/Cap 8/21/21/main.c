//
//  main.c
//  21
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int maior(int matriz[10][10]){
    int i,j=0;
    for(i=0;i<9;i++){
        
        if (matriz[i][i] >= j){
            j = matriz[i][i];
        }
        }
    
    return j;
}

int main(int argc, const char * argv[]) {
    
    int matriz[10][10],i,j,a;
    
    
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        {
            printf("Entre com o elemento matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    
    printf("Mostrando a matriz:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
    
    a = maior(matriz);
    
    printf("O maior numero da matriz eh: %d",a);
    
    
    
    return 0;
}
