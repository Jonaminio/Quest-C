//
//  main.c
//  23
//
//  Created by Jonas Herminio on 03/10/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    float salarioini,salariofinal,x;
    int condicao;
    
    do{
    printf("Digite a condicao do salario:\n ");
    printf("Digite 1  para Novo salario:\n ");
    printf("Digite 2 para ferias:\n ");
    printf("Digite 3 para decimo terceito:\n ");
    printf("Digite 4 para sair\n ");
    scanf("%d",&condicao);
        
        switch (condicao) {
            case 1:
                printf("Digite seu salario Atual:\n");
                scanf("%f",&salarioini);
                printf("O seu salario Atal eh: %f\n",salarioini);
                if (salarioini <= 210) {
                    x = salarioini *15/100;
                    salariofinal = salarioini + x;
                    printf("O Salario final eh: %f\n",salariofinal);
                }
                if ((salarioini >= 210) && (salarioini <= 600)) {
                    x = salarioini *15/100;
                    salariofinal = salarioini + x;
                    printf("O Salario final eh: %f\n",salariofinal);
                }
                if (salarioini >= 600) {
                    x = salarioini *5/100;
                    salariofinal = salarioini + x;
                    printf("O Salario final eh: %f\n",salariofinal);
                }
                break;
                case 2:
                printf("Digite seu salario Atual:\n");
                scanf("%f",&salarioini);
                printf("O seu salario Atal eh: %f\n",salarioini);
                x = salarioini / 3;
                salariofinal = salarioini + x;
                printf("O Salario final eh: %f\n",salariofinal);
                 break;
                 case 3:
                printf("Digite seu salario Atual:\n");
                scanf("%f",&salarioini);
                printf("O seu salario Atal eh: %f\n",salarioini);
                int mes;
                printf("Digite quantos Messes voce trabalhou:\n");
                scanf("%d",&mes);
                if (mes >= 12) {
                    x = (salarioini * mes) / 12;
                    printf("O Salario final eh: %f\n",x);
                }
                else
                printf("O Salario final eh: %f\n",salarioini);
                
                 break;
            case 4:
                printf("Finaliznado progama....");
                break;
                
            default:
                printf("Condicao Invalida");
                break;
        }
    }
    while (condicao != 4);
    
    return 0;
}
