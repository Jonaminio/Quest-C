//
//  main.c
//  12
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define MAX_ALUNOS             4
#define MAX_DISCIPLINAS        3
#define TAMANHO_COD_DISCIPLINA 5

int main(int argc, char *argv[])
{
    int idadeAlunos[MAX_ALUNOS];
    int x,C,L;
    char disciplina[MAX_DISCIPLINAS][TAMANHO_COD_DISCIPLINA];
    char disciplinaAPesquisar[TAMANHO_COD_DISCIPLINA];
    int quantProva [MAX_ALUNOS][MAX_DISCIPLINAS];
    int cont;
    float soma=0;
    bool achouDisciplina = false;
    bool achouAluno = false;
    
    setlocale(LC_ALL,"");
    
    for (x=0; x<MAX_ALUNOS; x++)
    {
        printf ("Digite a idade do %d aluno:",x+1);
        scanf ("%d", &idadeAlunos[x]);
    }
    
    for (x=0; x<MAX_DISCIPLINAS; x++)
    {
        printf ("Digite o  código da %da. disciplina: ", x+1);
        fflush(stdin);
        gets(disciplina[x]);
    }
    
    for (L=0; L<MAX_ALUNOS; L++)
    {
        printf ("\n\n Qtde. de provas do %do. aluno: \n", L+1);
        for (C=0; C<MAX_DISCIPLINAS; C++)
        {
            printf ("   Na disciplina %s: ", disciplina[C]);
            scanf ("%d", &quantProva[L][C]);
        }
    }
    
    printf ("\n Disciplinas:");
    for (C=0; C<MAX_DISCIPLINAS; C++)
    {
        printf ("%6s", disciplina[C]);
    }
    
    for (L=0; L<MAX_ALUNOS; L++)
    {
        printf ("\nAluno %d:     ", L+1);
        for (C=0; C<MAX_DISCIPLINAS; C++)
        {
            printf ("%6d", quantProva[L][C]);
        }
    }
    
    printf ("\n\nDigite o código da disciplina a procurar: ");
    fflush(stdin);
    gets(disciplinaAPesquisar);
    
    x = 0;
    do
    {
        if (strcmp(disciplina[x],disciplinaAPesquisar) == 0)
            achouDisciplina = true;
        else x++;
    }
    while ((x < MAX_DISCIPLINAS) && (!achouDisciplina));
    
    if (achouDisciplina)
    {
        printf ("\n  Achou a disciplina no índice %d\n",x);
        
        for (L=0, cont=0; L< MAX_ALUNOS; L++)
        {
            if (quantProva[L][x] > 2)
            {
                if ((idadeAlunos[L]>=18)&&(idadeAlunos[L]<=25))
                {
                    cont++;
                    achouAluno = true;
                }
            }
        }
    } else
    {
        printf ("\nNenhuma disciplina com o código %s foi encontrada entre as cadastradas.\n", disciplinaAPesquisar);
    }
    
    
    if (achouAluno)
    {
        printf ("\n  %d alunos fizeram mais de duas provas na disciplina %s. \n",cont,disciplinaAPesquisar);
    } else if (achouDisciplina)
    {
        printf ("\n  nenhum aluno fez mais de duas provas na disciplina %s. \n",disciplinaAPesquisar);
    }
    
    printf ("\n\n Listagem dos alunos que fizeram menos que 3 provas: \n");
    
    for (C=0; C<MAX_DISCIPLINAS; C++)
    {
        for (L=0; L<MAX_ALUNOS; L++)
        {
            if (quantProva[L][C] < 3)
            {
                printf (" O aluno %d fez %d provas na disciplina %s\n", L+1, quantProva[L][C],disciplina[C]);
            }
        }
    }
    
    for (L=0, cont=0, soma=0; L < MAX_ALUNOS; L++)
    {
        achouAluno = false;
        C = 0;
        while ((!achouAluno) && (C < MAX_DISCIPLINAS))
        {
            if (quantProva[L][C] == 0)
            {
                achouAluno = true;
                cont++;
                soma = soma + idadeAlunos[L];
            }
            C++;
        }
    }
    
    if (cont > 0)
    {
        printf ("\n A média de idade dos %d alunos que não fizeram nenhuma prova em alguma das disciplinas é: %.1f \n\n",cont, soma/cont);
    }
    else
    {
        printf("\nNenhum aluno deixou de fazer prova nas disicplinas.\n\n");
    }
    
    return 0;
    }
