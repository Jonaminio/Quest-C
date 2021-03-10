//
//  main.c
//  09
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
        // insert code here...
        int idade,x,somaid=0;
        float altura,peso;
        float cont1=0,cont2=0;
        
        for (x=1; x<=10; x++) {
            printf("Digite sua idade");
            scanf("%d",&idade);
            
            printf("Digite sua altura");
            scanf("%f",&altura);
            
            printf("Digite seu peso");
            scanf("%f",&peso);
            
            somaid+=idade;
            
            if ((idade >=90) || (altura <= 1.50)) {
                cont2++;
            }
            if (((idade >=10) && (idade <=30) ) || (altura > 1.90)) {
                cont1++;
            }

            
        }
    
        int media;
        media = somaid / 10 ;
        printf("a media de idade eh %d", media);
        printf("a quantidade de pessoas com idade maior que 90 e altura menor que 1.50 eh: %f", cont2);
    
        media = (cont1 * 10 / 100);
    
        printf("a porcetagem de pessoas com idade entre 10 e 30 e altura maior que 1.90 eh: %f", media);

    
       return 0;
}
