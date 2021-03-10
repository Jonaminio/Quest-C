//
//  main.c
//  07
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int idade,x;
    float altura,peso;
    float cont1,cont2,cont3;
    
    for (x=1; x<=5; x++) {
        printf("Digite sua idade");
        scanf("%d",&idade);
        
        printf("Digite sua altura");
        scanf("%f",&altura);

        printf("Digite seu peso");
        scanf("%f",&peso);

        if (idade>= 50) {
            cont1++;
        }
        if ((idade >=10) || (idade <= 20)) {
            cont2++;
        }
        if (peso< 40){
            cont3++;}
        
    }
    
    printf("Quantidade de pessoas com idade maior que 50 eh: %f",cont1);
    float media;
    media = (cont2 * 5) / 100;
    printf("a media de pessoas eh %f", media);
    
    media = (cont3 * 5) /100;
    
    printf("a quantidade de pessoas com peso inferior a 40 eh: %f", media);

    
    
    
    return 0;
}
