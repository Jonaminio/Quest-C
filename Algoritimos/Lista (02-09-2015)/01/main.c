#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    int x;

    for(x=1;x<=5;x++){
    printf("Digite um numero A:\n ");
    scanf("%f",&a);
    printf("Digite um numero B:\n ");
    scanf("%f",&b);
    printf("Digite um numero C:\n ");
    scanf("%f",&c);

    if (a<b&&b<c)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", a, b, c);
    }
    else if (a<c&&c<b)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", a, c, b);
    }
    else if (b<a&&a<c)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", b, a, c);
    }
    else if (b<c&&c<a)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", b, c, a);
    }
    else if (c<a&&a<b)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", c, a, b);
    }
    else
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", c, b, a);
    }
    fflush(stdin);
    if( a >= b && b >= c ){
        printf("Ordem decrescente: %f %f %f\n", a, b, c );}
    else if( a >= c && c >= b ){
         printf("Ordem decrescente: %f %f %f\n", a, c, b );}
    else if( b >= a && a >= c ){
         printf("Ordem decrescente: %f %f %f\n", b, a, c );}
    else if( b >= c && c >= a ){
        printf("Ordem decrescente: %f %f %f\n", b, c, a );}
    else if( c >= a && a >= b ){
        printf("Ordem decrescente: %f %f %f\n", c, a, b );
        }
    else{
        printf("Ordem decrescente: %f %f %f\n", c, b, a ); }
    }

    return 0;
}
