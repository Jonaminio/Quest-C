//
//  main.c
//  19
//
//  Created by Jonas Herminio on 03/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float precocompra,precovenda;
    char tipoacao;
    float lucrototal=0,lucro=0;
    int lucromaior=0,lucromenor=0;
    
    
    while (tipoacao != 'f') {
        printf("digite a letra a acao finalize com F: \n");
        scanf(" %c",&tipoacao);
        
        printf("Digite o Preço de compra: ");
        scanf("%f",&precocompra);
        printf("Digite o Preço de venda ");
        scanf("%f",&precovenda);
        
        printf("O lucro eh: %f\n",precovenda - precocompra);
        
        lucro = precovenda - precocompra;
        
        lucrototal = lucrototal + lucro;
        
        if (lucro > 1000) {
            lucromaior++;
        }
        if (lucro < 2000) {
            lucromenor++;
        }
        
    }
    printf("O lucro total eh: %f\n ", lucrototal);
    printf("Quantidade de acoes com O lucro com mais de 1000 eh: %d\n ", lucromaior);
    printf("Quantidade de acoes com O lucro com menos de 2000 eh: %d\n ", lucromenor);
    

    return 0;
}
