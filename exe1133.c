#include <stdio.h>
#include <stdlib.h>

int main () 
{

// ENTRADA DO PROGRAMA E LEITURA DE VARIÁVEIS 

    int x, y, i, temp;


    scanf("%d %d", &x, &y);

// ALTERAÇÃO DE VARIÁVEIS 

    if (y<x)
    {
        temp = x;
        x = y;
        y = temp;
    }

// LAÇO DE REPETIÇÃO E SAÍDA DO PROGRAMA 

    for (i=x+1; i<y; i++)
    {
        if (i%5==3 || i%5==2)
        {
            printf("%d\n", i);
        }
    }

return 0;

}