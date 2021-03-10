//
//  main.c
//  15
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int pares(int matriz[15]){
    int i;
    for(i=0;i<14;i++){
        if ((matriz[i]/2) == 0) {
            printf("%d/n",matriz[i]);
        }
   return 1;
    }
    int main(int argc, const char * argv[]); {

    int matriz [15];
    int i,d2;
    for(i=0;i<14;i++){
            printf("Entre com o elemento [%d]: ", i+1);
            scanf("%d", &matriz[i]);
        }

    d2 = pares( matriz);

        return 0;
    
    }