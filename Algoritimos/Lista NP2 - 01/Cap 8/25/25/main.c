//
//  main.c
//  25
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//


#include <stdio.h>

int media(int notas[10]){
    
    int i,a=0;
    for(i=0;i<9;i++){
        
        a = notas[i] + a;
        }
    
    a = (a /10);
    return a;
}

int main(int argc, const char * argv[]) {
    
    int nota[10],i,a;
    
    
    for(i=0;i<9;i++){
        
            printf("Entre com o a nota do %d aluno: ", i+1);
            scanf("%d", &nota[i]);
        }
    
        a = media(nota);
    
    printf("Media aritimetrica dos alulos eh %d\n",a);
    
    return 0;
}
