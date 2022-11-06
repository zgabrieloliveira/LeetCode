#include <stdio.h>
#include <stdlib.h>

int main ()
{

// ENTRADA E LEITURA DE VARIÁVEIS 

    int n, i, fatorial=1;

    scanf("%d", &n);
    n<13;

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO 

    for (i=n; i>=1; i--)
    {
        if (n==0)
        {
            printf("1\n");
        }
        else if (n<0)
        {
            break;
        }
        else
        {
            fatorial = fatorial*i;
        }

    }

// SAÍDA DO PROGRAMA 

    printf("%d\n", fatorial);

return 0;

}