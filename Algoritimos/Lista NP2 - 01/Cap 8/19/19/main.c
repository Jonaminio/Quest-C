//
//  main.c
//  19
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
int inters (int vetor1[10] ,int vetor2[10]){
    
    int vetorr[10],i;
    
    for(i=0;i<9;i++){
       
        vetorr[i] = vetor1[i] + vetor2[i];
        
    }
    
    for(i=0;i<9;i++){
    
        printf("mostrando posicao na %d do vetor: %d\n",i,vetorr[i]);
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int vetor1[10],vetor2[10];
    int i,a;
    
    for(i=0;i<9;i++){
        
            printf("Entre com o elemento vetor 1[%d] ", i+1);
            scanf("%d", &vetor1[i]);
        }
    for(i=0;i<9;i++){
        
        printf("Entre com o elemento vetor 2[%d] ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    a = inters(vetor1, vetor2);

    
    return 0;
}
