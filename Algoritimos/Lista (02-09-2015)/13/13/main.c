//
//  main.c
//  13
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int idade,x;
    float peso,cont1=0,cont2=0,cont3=0,cont4=0;
    
    for (x=1;x<=15; x++) {
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Digite seu peso: ");
        scanf("%f",&peso);
        
        if ((idade >=1) && (idade <=10)) {
            cont1+=peso;
        }
        if ((idade >=11) && (idade <=20)) {
            cont2+=peso;
        }
        if ((idade >=21) && (idade <=30)) {
            cont3+=peso;
        }
        if (idade > 31) {
            cont4+=peso;
        }

    }
    printf("A media de pessoas entre 1 e 10 eh: %f",cont1 + 15 /2 );
    printf("A media de pessoas entre 11 e 20 eh: %f",cont2 + 15 /2 );
    printf("A media de pessoas entre 21 e 30 eh: %f",cont3 + 15 /2 );
    printf("A media de pessoas maior de 31 eh: %f",cont4 + 15 /2 );
    
    
    return 0;
}
