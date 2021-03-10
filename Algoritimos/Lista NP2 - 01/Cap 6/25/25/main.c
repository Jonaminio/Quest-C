//
//  main.c
//  25
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int vetor1[15], vetor2[15];
    int x,i=0;
    
    for (x=0;x<15;x++){
        printf("Digite os numeros para o primeiro vetor na posicao %d: \n",x+1);
        scanf("%d",&vetor1[x]);
        
        if (vetor1[x] >= i) {
            
            i = vetor1[x];
        }
        
    }
    
    for (x=0;x<15;x++){
        
    vetor2[x] = vetor1[x] - i;
        
    }
    
    for (x=0;x<15;x++){
        
        printf("Mostrando vetor resultante R=[%d] %d \n",x+1,vetor2[x]);
        
    }


    return 0;
}
