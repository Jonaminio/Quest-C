//
//  main.c
//  11
//
//  Created by Jonas Herminio on 21/11/15.
//  Copyright © 2015 Jonas Herminio. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_ALUNOS             4
#define MAX_DISCIPLINAS        3
#define TAMANHO_COD_DISCIPLINA 5

int main(int argc, const char * argv[]) {
    
    int idadeAlunos[MAX_ALUNOS];
    int x,C,L;
    char disciplina[MAX_DISCIPLINAS][TAMANHO_COD_DISCIPLINA];
    int quantProva [MAX_ALUNOS][MAX_DISCIPLINAS];
    
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
    
    return 0;
}
