#include <stdio.h>
#include <conio.h>
//3 - Implemente um programa com uma função recursiva para computar o valor de 2n.

main()
{
   int n,i;
   printf("Digite o valor de n: ");
   scanf("%d", &n);
   // passando parametro
   rec(n);
   printf("\nO resultado e: %d \n", rec(n));
}
// recursao
int rec(int num)
{
   if(num == 0)
       return 1;
   else
       return 2 * rec(num -1);
}
