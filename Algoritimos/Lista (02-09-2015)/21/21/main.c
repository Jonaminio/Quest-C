//
//  main.c
//  21
//
//  Created by Jonas Herminio on 03/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
        int voto;
        int canditato1=0, canditato2=0,canditato3=0,canditato4=0,totalvotos=0;
        int nulos=0, brancos=0;
    
        printf("digite seu voto: \n");
        scanf("%d",&voto);

        while (voto!= 0){
            printf("digite seu voto: \n");
            scanf("%d",&voto);
            if ( voto == 1){
                canditato1++;
            }
            if ( voto == 2){
                canditato2++;
            }
            if ( voto == 3){
                canditato3++;
            }
            if ( voto == 4){
                canditato4++;
            }
            if ( voto == 4){
                canditato4++;
            }
            if ( voto == 5){
                nulos++;
            }
            if ( voto == 6){
                brancos++;
            }
            
            
        }
        float porcento;
        printf("Votos para candidato 1: %d\n",canditato1);
        printf("Votos para candidato 2: %d\n",canditato2);
        printf("Votos para candidato 3: %d\n",canditato3);
        printf("Votos para candidato 4: %d\n",canditato4);
        printf("Votos Nulos sao: %d\n",nulos);
        printf("Votos em Branco sao: %d\n",brancos);
    
        totalvotos = canditato1+canditato2+canditato3+canditato4+nulos+brancos;
    
        porcento = ((nulos / totalvotos) *100);
        printf("A Porcetagem de votos Nulos Sobre todos os Votos eh:%.2f%%\n",porcento);
    
        porcento = ((brancos / totalvotos) *100);
        printf("A Porcetagem de votos Brancos Sobre todos os Votos eh:%.2f%%\n",porcento);

    
    
    return 0;
}
