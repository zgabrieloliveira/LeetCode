#include <stdio.h>
#include <stdlib.h>

int main ()
{

    double x, n[100]; // variáveis de leitura 
    int i=0; // variáveis p/ criação de laços

    scanf("%lf", &x);
    n[0] = x;

    while (i<=99) // laço p/ formar a sequência em que cada valor de x é metade do seu valor anterior  
    { 
        x = x/2;
        n[i] = x;

        i++;
    }

    while (i<=99) // laço p/ mostrar os resultados, com o vetor preenchido 
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
        i++;
    }

return 0;

}