#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n; // variáveis p/ leitura
    int i=0, i2, i3, pares=0, impares=0; // variáveis p/ organização de dados c/ laços
    int par[5], impar[5]; // vetores p/ pares e ímpares


    do // laço base p/ organizar os valores pares e ímpares, preenchendo seus respectivos vetores
    {

        scanf("%d", &n);

        if (n%2==0) // para valores pares
        {

            par[pares] = n;
            pares++;

            if (pares==5)
            {

                for (i2=0; i2<5; i2++)
                {
                    printf("par[%d] = %d\n", i2, par[i2]);
                }
                pares=0;
            }

        }

        else // para valores ímpares
        {

            impar[impares] = n;
            impares++;

            if (impares==5)
            {

                for (i3=0; i3<5; i3++)
                {
                    printf("impar[%d] = %d\n", i3, impar[i3]);
                }
                impares=0;
            }
        }

        i++;
        
    }
    while (i<15);

// SAÍDA 

    for (i=0; i<impares; i++)
    {

        printf("impar[%d] = %d\n", i, impar[i]);

    }


    for (i=0; i<pares; i++)
    {

        printf("par[%d] = %d\n", i, par[i]);

    }

return 0;

}