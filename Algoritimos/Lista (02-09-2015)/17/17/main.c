//
//  main.c
//  17
//
//  Created by Jonas Herminio on 01/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int canal,pessoas,tpessoas;
    int tpessoas4,tpessoas5,tpessoas7,tpessoas12;
    
    printf("Digite o numero do canal");
    scanf("%d",&canal);
    printf("Digite o numero de pessoas");
    scanf("%d",&pessoas);
    
    while (canal !=0) {
        printf("Digite o numero do canal");
        scanf("%d",&canal);
        printf("Digite o numero de pessoas");
        scanf("%d",&pessoas);
        
        tpessoas+= pessoas;
        
        if (canal == 4) {
            tpessoas4++;
            
        }
        if (canal == 5) {
            tpessoas5++;
            
        }
        if (canal == 7) {
            tpessoas7++;
            
        }
        if (canal == 12) {
            tpessoas12++;
            
        }
        
        
    }
    
    int r1=0;
    while(tpessoas + ((tpessoas4 / 100) * tpessoas) < tpessoas4){
        r1 = r1 + 0.1;
    }
    
    printf("O total de audiencia do canal 4 eh: %d \n",r1 );
    int r2=0;
    
    while(tpessoas + ((tpessoas5 / 100) * tpessoas) < tpessoas5){
        r2 = r2 + 0.1;
    }
    
    printf("O total de audiencia do canal 5 eh: %d \n",r1 );
    
    int r3=0;
    
    while(tpessoas + ((tpessoas7 / 100) * tpessoas) < tpessoas7){
        r3 = r3 + 0.1;
    }
    
    printf("O total de audiencia do canal 7 eh: %d \n",r1 );
    
    int r4=0;
    
    while(tpessoas + ((tpessoas12 / 100) * tpessoas) < tpessoas12){
        r4 = r4 + 0.1;
    }
    
    printf("O total de audiencia do canal 12 eh: %d \n",r1 );
    
    return 0;
}
