//
//  main.c
//  17
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int vetor1[10], vetor2[10];
    int x,i,j,temp;
    
    for (x=0;x<10;x++){
        printf("Digite os umeros para o primeiro vetor na posicao %d: \n",x+1);
        scanf("%d",&vetor1[x]);
    }
    for (x=0;x<10;x++){
        printf("Digite os umeros para o segundo vetor na posicao %d: \n",x+1);
        scanf("%d",&vetor2[x]);
    }

    //ordenando o vetor 1
    
    for (i=0;i<10; i++)
        for(j=i+1;j<10;j++)
        {
            if (vetor1[i]>vetor1[j])
            {
                temp=vetor1[i];
                vetor1[i]=vetor1[j];
                vetor1[j]=temp;
            }
        }
    
    
    printf("Vetor 1 em ordem crescente: \n");
    for(i=0;i<10;i++){
        printf(" %d",vetor1[i]);
    }
    //ordenando o vetor 2
    
    for (i=0;i<10; i++)
        for(j=i+1;j<10;j++)
        {
            if (vetor2[i]>vetor2[j])
            {
                temp=vetor2[i];
                vetor2[i]=vetor2[j];
                vetor2[j]=temp;
            }
        }
    
    
    printf("Vetor 2 em ordem crescente: \n");
    for(i=0;i<10;i++){
        printf(" %d",vetor2[i]);
    }

    
    return 0;
}
