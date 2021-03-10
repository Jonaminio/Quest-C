//
//  main.c
//  11
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int numero (int numero){
    int s,x;
    
    for (x=0; x<numero; x++) {
        s = (numero +1 )/ (numero +3);
        printf("O %d ressultado eh: %d",x,s);
    }
    return  1;
    }

int main(int argc, const char * argv[]) {

    int n,x;
    
    printf("digite um numero:");
    scanf("%d",&n);
    
    x = numero(n);
    
    
    
    
    return 0;
}
