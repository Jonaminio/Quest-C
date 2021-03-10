//
//  main.c
//  17
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int mdc(int x, int y)
{
    int resto;
    resto = x%y;
    while(resto!=0)
    {
        x    = y;
        y    = resto;
        resto = y%x;
    }
    printf("MDC = %d\n",y);
    return 1;
}


int main(int argc, const char * argv[]) {
    int x,y,a;
    
    printf("Digite o numero X");
    scanf("%d",&x);
    printf("Digite o numero Y");
    scanf("%d",&y);
    
    a = mdc(x,y);
    
    
    return 0;
}
