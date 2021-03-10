#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tabuada de MULTIPLICACAO de 1 a 10\n");
    int x,r;
    for(x=1;x<=10;x++){
        printf("tabuada do %d\n",x);
        r = x*1;
        printf("%d x 1 = %d\n",x,r);
        r = x*2;
        printf("%d x 2 = %d\n",x,r);
        r = x*3;
        printf("%d x 3 = %d\n",x,r);
        r = x*4;
        printf("%d x 4 = %d\n",x,r);
        r = x*5;
        printf("%d x 5 = %d\n",x,r);
        r = x*6;
        printf("%d x 6 = %d\n",x,r);
        r = x*7;
        printf("%d x 7 = %d\n",x,r);
        r = x*8;
        printf("%d x 8 = %d\n",x,r);
        r = x*9;
        printf("%d x 9 = %d\n",x,r);
        r = x*10;
        printf("%d x 10 = %d\n",x,r);

    }

    return 0;
}
