#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int t, n[1000]; // variáveis de leitura
    int i=0, x=0; // variáveis para operações em laços


    scanf("%d", &t);


    while (i<1000); // laço p/ formar a sequência 0 a t-1
    {

        n[i] = x;
        x++;

        if (x==t)
            x=0;

        i++;

    }



    for (i=0; i<1000; i++) // laço p/ mostrar os resultados
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

return 0;

}