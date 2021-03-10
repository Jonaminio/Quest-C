//
//  main.c
//  11
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    float valorc,cond,p;
    int parcelas;
    
    printf("Digite o Valor do carro");
    scanf("%f",&valorc);
    
    printf("Digite a condicao do pagamento: 1 para a vista e 2 para parcelar");
    scanf("%f", &cond);
    
    if (cond == 1) {
        
        p = (valorc* 20) / 100;
        valorc = valorc - p;
        printf("O pagamento a vista eh: %f\n",valorc);
        printf("Quantidade de parcelas: 1\n");
        
    }
    else
    if (cond == 2){
        printf("Digite os numeros de parcelas");
        scanf("%d",&parcelas);
        
        switch (parcelas) {
            case 6:
                p = (valorc* 3) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 6\n");
                break;
            case 12:
                p = (valorc* 6) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 12\n");
                break;
            case 18:
                p = (valorc* 9) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 18\n");
                break;
            case 24:
                p = (valorc* 12) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 24\n");
                break;
            case 30:
                p = (valorc* 15) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 30\n");
                break;
                
            case 36:
                p = (valorc* 18) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 36\n");
                break;
                
            case 42:
                p = (valorc* 21) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 42\n");
                break;
                
            case 48:
                p = (valorc* 24) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 48\n");
                break;
                
            case 54:
                p = (valorc* 27) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 54\n");
                break;
                
            case 60:
                p = (valorc* 30) / 100;
                valorc = valorc + p;
                printf("O Valor do carro eh: %f\n",valorc);
                printf("Quantidade de parcelas : 60\n");
                break;
                
 
            default:
                printf("Quantidade de parcelas nao aceita");
                break;
        }
    }
    
    
    return 0;
}
