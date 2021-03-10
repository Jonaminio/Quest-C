//
//  main.c
//  13
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
#include <ctype.h> 
#include <locale.h>

void leDados(int idade[], char sexo[], float salario[], int filhos[] );
float mediaSalario (float sal[]);
int maiorIdade (int idade[]);
int menorIdade (int idade[]);
int qtdeMulheres(char sexo[], int filhos[], float salario[]);


int main()
{
    char sexo[5];
    int idade[5], filhos[5], i;
    float salario[5], m;
    
    setlocale(LC_ALL,"");
    
    leDados(idade, sexo, salario, filhos);
    for (i = 0; i < 5; i++)
    {
        printf (" Indivíduo %d: \n", i+1);
        printf ("       Idade= %d  Sexo= %c  Salário= %.2f  Filhos= %d \n",idade[i], sexo[i], salario[i], filhos[i]);
    }
    
    m = mediaSalario(salario);
    printf("\nMédia de salário das pessoas é = %5.2f",m);
    
    i = maiorIdade(idade);
    printf("\nMaior idade entre os habitantes = %d",i);
    
    i = menorIdade(idade);
    printf("\nMenor idade entre os habitantes = %d",i);
    
    i = qtdeMulheres(sexo, filhos, salario);
    printf("\nQuantidade de mulheres com 3 filhos e que ganha pouco é: %d \n\n",i);
    
    getchar();
    return 0;
}


void leDados(int idade[], char sexo[], float salario[], int filhos[] )
{
    int x;
    for (x=0; x<5; x++)
    {
        printf("\nDados da %dª pessoa\n",x+1);
        
        printf("   Digite a idade: ");
        scanf("%d",&idade[x]);
        
        do
        {
            printf("   Digite o sexo (M ou F): ");
            scanf(" %c",&sexo[x]);
            sexo[x] = toupper(sexo[x]);
        }
        while ((sexo[x] != 'F') && (sexo[x] != 'M'));
        
        printf("   Digite o salário: ");
        scanf("%f",&salario[x]);
        
        printf("   Digite a qtde de filhos: ");
        scanf("%d",&filhos[x]);
        
    }
    printf("\n\n");
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 *  Função para calcular a média de salários a partir de um vetor de 5 posições
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 */
float mediaSalario (float sal[])
{
    int i;
    float soma = 0;
    
    for (i=0; i<5; i++)
    {
        soma = soma + sal[i];
    }
    return soma/5;
}

int maiorIdade (int idade[])
{
    int i, maior;
    
    for (i=0; i<5; i++)
    {
        if (i==0)
            maior = idade[i];
        else if (idade[i] > maior)
            maior = idade[i];
    }
    return maior;
}

int menorIdade (int idade[])
{
    int i, menor;
    
    for (i=0; i<5; i++)
    {
        if (i==0)
            menor = idade[i];
        else if (idade[i] < menor)
            menor = idade[i];
    }
    return menor;
}

int qtdeMulheres(char sexo[], int filhos[], float salario[])
{
    int i, qtd;
    qtd=0;
    
    for (i=0; i<5; i++)
    {
        if ((sexo[i] == 'F') && (filhos[i] == 3) && (salario[i] < 500))
            qtd++;
    }
    return qtd;
}

