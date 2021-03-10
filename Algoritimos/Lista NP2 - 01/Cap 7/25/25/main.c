//
//  main.c
//  25
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    int armazem[5],produto[10],custo[5];
    
    int i, j, aux=0;
    
    for(i=1; i<=5; i++)
    {
        printf("No armazem %d Digite o preco \n", i);
    
    for(i=1; i<=10; i++)
    {
        printf("Digite o preco do %d produto \n", i);
        scanf("%d",&produto[i]);
        aux = produto[i]+aux;
        
    }
        printf("Digite o custo do aramzem:\n");
        scanf("%d",&custo[i]);
    }
    
    printf("Quantidade total de produtos: %d \n", aux);
    
    for(i=1; i<=5; i++)
    {
        printf(" custo do aramzem %d : %d\n",i,custo[i]);
  
    }

    

    
    
    fflush(stdin);
    
    
    

    return 0;
}
