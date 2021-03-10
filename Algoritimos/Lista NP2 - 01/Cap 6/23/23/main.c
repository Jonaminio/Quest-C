//
//  main.c
//  23
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5], b[5],r[5];
    int x;
    
    for (x=0;x<5;x++){
        printf("Digite os umeros para o A vetor na posicao %d: \n",x+1);
        scanf("%d",&a[x]);
    }
    for (x=0;x<5;x++){
        printf("Digite os umeros para o B vetor na posicao %d: \n",x+1);
        scanf("%d",&b[x]);
    }
    
        
        r[0] = a[0] - b[4];
        r[1] = a[1] - b[3];
        r[2] = a[2] - b[2];
        r[3] = a[3] - b[1];
        r[4] = a[4] - b[0];
        

    for (x=0;x<5;x++){
        printf("Mostrando o vetor resultante %d \n", r[x]);
    }

    return 0;
}
