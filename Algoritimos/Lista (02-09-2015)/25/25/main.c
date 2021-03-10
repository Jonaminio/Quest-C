//
//  main.c
//  25
//
//  Created by Jonas Herminio on 03/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float valorini,valorfinal,x ;
    int codcliente,codinvest;
    
    do{
        printf("Digite o cod. do Cliente:\n");
        scanf("%d",&codcliente);
        printf("Digite o cod. do investimento:\n");
        printf("Digite 1 para Pupanca\n");
        printf("Digite 2 para Pupanca Plus\n");
        printf("Digite 3 para Fundos de Renda fixa\n");
        printf("Digite 0 para sair\n");
        scanf("%d",&codinvest);
        
        switch (codinvest) {
            case 1:
                printf("Digite o valor Inicial:\n");
                scanf("%f",&valorini);
                x = (valorini *1.5)/100;
                valorfinal = valorini + x;
                printf("O Valor final eh: %f\n",valorfinal);
                break;
            case 2:
                printf("Digite o valor Inicial:\n");
                scanf("%f",&valorini);
                x = (valorini *2)/100;
                valorfinal = valorini + x;
                printf("O Valor final eh: %f\n",valorfinal);
                break;

            case 3:
                printf("Digite o valor Inicial:\n");
                scanf("%f",&valorini);
                x = (valorini *4)/100;
                valorfinal = valorini + x;
                printf("O Valor final eh: %f\n",valorfinal);
                break;
                
            default:
                printf("Reiniciando o progama...");
                break;
        }
        
    }
    while (codinvest <=0);
        
    return 0;
}
