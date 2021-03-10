//
//  main.c
//  23
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int soma(int matriz[10][5]){
    int i,j,a=0;
    for(i=6;i<9;i++){
        for(j=0;j<4;j++){
            
        a = matriz[i][j] +j;
        }
    
    }
    
    return a;
}

int main(int argc, const char * argv[]) {
    
    int matriz[10][5],i,j,a;
    
    
    for(i=0;i<9;i++)
        for(j=0;j<4;j++)
        {
            printf("Entre com o elemento matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    
    printf("Mostrando a matriz:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<4;j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
    
    a = soma(matriz);
    
    printf("Total de somas da matriz apartir do 6 %d",a);
    
    
    
    return 0;
}
