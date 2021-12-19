#include <stdio.h>
#include <stdlib.h>

int pesquisaBinaria(int tab[], int arg) {
int inf, sup, med;
inf = 0;
sup = sizeof(tab) + 1 ;
while(inf <=sup) {
	med = (inf + sup)/2; //divisão inteira
	if (arg == tab[med])
		return med;
	else if (arg > tab[med]) inf = med + 1;//procura na 2ª metade
	else if (arg < tab[med])
		sup = med-1; //procura na 1ª metade
}
}


int main (void)
{

int i, x;
int n[10];


for (i=0; i < 10; i++)
{
printf("Entre com o valor de n[%d]=", i);
scanf("%d", &n[i]);
}

printf("\nEntre com o valor a ser pesquisado = ");
scanf("%d", &x);

printf("valor encontrado no indice = %d\n",pesquisaBinaria(n, x) );

return;
}

