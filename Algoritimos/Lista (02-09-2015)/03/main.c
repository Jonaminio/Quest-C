#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,x,varira,varira2;
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;

    for(x=1;x<=8;x++){
        printf("digite sua idade");
        scanf("%d",&idade);
    if (idade<=15){
        cont1++;
    }
    if ((idade >= 16) && (idade <= 30)){
        cont2++;
    }
    if ((idade >= 31) && (idade <= 45)){
        cont3++;
    }
    if ((idade >= 46) && (idade <= 60)){
        cont4++;
    }
    if (idade>=60){
        cont5++;
    }
    }
    printf("a quantidade de pesoas na faixa 1 eh: %d ",cont1);
    printf("a quantidade de pesoas na faixa 2 eh: %d ",cont2);
    printf("a quantidade de pesoas na faixa 3 eh: %d ",cont3);
    printf("a quantidade de pesoas na faixa 4 eh: %d ",cont4);
    printf("a quantidade de pesoas na faixa 5 eh: %d ",cont5);

    varira = (cont1 *8 / 100);
    printf("a porcetagem de pessoas  na faixa 1 eh: %d ",varira);
    varira2 = (cont5 *8 /100);
    printf("a porcetagem de pessoas  na faixa 5 eh: %d ",varira2);

    return 0;
}
