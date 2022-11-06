#include <stdio.h>
#include <stdlib.h>

int main () 
{

//ENTRADA DO PROGRAMA E LEITURA DE VARIÁVEIS 

    int n, i;
    int a=1, b=1, c=1;

    scanf("%d", &n);

// LAÇO DE REPETIÇÃO E SAÍDA DO PROGRAMA 

    for (i=0; i<n; i++)
    {
        printf("%d %d %d\n", a, b, c);

        a++;
        b=a*a;
        c=a*a*a;
    }

return 0;

}