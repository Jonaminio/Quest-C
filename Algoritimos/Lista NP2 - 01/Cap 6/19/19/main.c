//
//  main.c
//  19
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x[10],y[10],w[10],i;
    
    for(i=0;i<10;i++){
        printf("y[%d] = ",i+1);
        scanf("%d",&x[i]);
    }
        for(i=0;i<10;i++){
        printf("x[%d] = ",i+1);
        scanf("%d",&y[i]);
    }
    
        for(i=0;i<10;i++){
        
        w[i] = x[i] * y[i];
        printf("\nVetor Resultante[%d] = %d\n",i+1,w[i]);
    }
    
    
    return 0;
}
