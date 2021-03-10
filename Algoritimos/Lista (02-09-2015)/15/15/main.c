//
//  main.c
//  15
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int sexo,gostou,x;
    int contador1,contador2,contador3,contador4;
    
    for (x=1;x<=10;x++){
        printf("digite seu sexo: 1- para feminino / 2- para masculino");
        scanf("%d",&sexo);
        printf("digite seu sexo: 1- para Gostei / 2- para Nao gostei");
        scanf("%d",&gostou);
        
        if (gostou == 1) {
            contador1++;
        }
        if (gostou == 2) {
            contador2++;
        }
        if ((sexo == 1) && (gostou == 1)) {
            contador3++;
        }
        if ((sexo == 2) && (gostou == 2)) {
            contador4++;
        }
        
    }
    printf("Total de Sim: %d",contador1);
    printf("Total de Nao: %d",contador2);
    printf("Total de Mulher e Sim: %d",contador3);
    printf("Total de homem e nao: %d",contador3*10/100);
    
    return 0;
}
