#include <stdio.h>
#include <conio.h>

main()
{
   int n,i;
   printf("Digite o valor fatorial: ");
   scanf("%d", &n);
   // passando parametro
   fat(n);
   printf("\nO resultado e: %d \n", fat(n));

   for(i=0; i<n; i++)
       printf("%d ", fat(i+1));

}
// recursao
int fat(int num)
{
   if(num < 1)
       return 1;
   else
   //passando o parametro e volta novamente
   //enquanto n for 1, ele ira repetir. quando for cairá no if
       return num * fat(num-1);
}
