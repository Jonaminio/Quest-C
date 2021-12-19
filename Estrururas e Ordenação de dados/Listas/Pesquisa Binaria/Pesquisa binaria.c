#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int pesquisaBinaria (int tab[], int arg) {
    int inf, sup, med;
    inf = 0;
    sup = tab.length ­ 1;
        while (inf <= sup) {
        med = (inf + sup)/2; //divisão inteira
            if (arg == tab[med]) return med;
                else if (arg > tab[med]) inf = med + 1;//procura na 2ª metade
                    else if (arg < tab[med]) sup = med ­ 1; //procura na 1ª metade
        }
        //se não achar retorna -1
        return ­1;
}

int main()
{
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    int valor = 6;

    pesquisaBinaria(int vetor,int valor);

}
