#include <stdio.h>
#include <conio.h>
//1 � Implemente um programa em C com uma fun��o recursiva que receba um n�mero
//inteiro positivo e retorne a soma de todos os n�meros inteiros entre 0 a n

main()
{
   int n,i;
   printf("Digite o valor: ");
   scanf("%d", &n);
   // passando parametro
   rec(n);
   printf("\nO resultado e: %d \n", rec(n));

}
// recursao
int rec(int num)
{
   if(num == 1)
       return 1;
   else
       return num + rec(num-1);
}
