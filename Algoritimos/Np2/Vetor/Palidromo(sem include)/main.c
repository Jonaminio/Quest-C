#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];char b[100];
    int i,j,aux;
    printf("entre com a palavra ou frase para ver se eh um palindromo:\n");
    gets(a);
    // compiando a para b
    for(i=0 ;i< 100 ;i++){
        b[i] = a[i];
    }
    //invertendo b
    for(i=0; i < 50; i++){
        j=100-i-1;
       aux = b[i];
       b[i] = b[j];
       b[j] = aux;
}
     for (i=0; i<100; ++i) {
    printf("%s ", b[i]);
}




    return 0;
}
