#include <stdio.h>
#include <stdlib.h>

int main ()

{

    long int n, i=0;

    scanf("%ld", &n);

    while (i<n-1) // imprimir Ho, menos o último, até que corresponda ao número do papel sorteado
    {
        printf("Ho ");

        i++;

    }

    printf("Ho!\n"); // último Ho com !, encerrando o programa


return 0;

}