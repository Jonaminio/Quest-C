#include <stdio.h>
#include <conio.h>
//1 – Implemente um programa em C com uma função recursiva que receba um número
//inteiro positivo e retorne a soma de todos os números inteiros entre 0 a n

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
