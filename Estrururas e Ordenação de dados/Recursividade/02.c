#include <stdio.h>
#include <conio.h>

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequ�ncia de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequ�ncia de Fibonacci e: %d \n", fibonacci(n));

}
// recursao
int fibonacci(int num)
{
   if(num==0 || num==1)
       return 1;
   else
       return fibonacci(num-1) + fibonacci(num-2);
}
