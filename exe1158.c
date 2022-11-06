#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n, x, y; // variáveis p/ leitura
    int i=0, i2, y2; // variáveis p/ criação de laços e manipulação de dados
    int somaimpar=0; // variável p/ armazenar a soma correspondente 

    scanf("%d", &n);

    while (i<n) // laço base p/ formar a soma de ímpares consecutivos, a partir do número de casos n
    {

        scanf("%d %d", &x, &y);

        for (i2=0, y2=x; i2<y; y2++) // laço p/ somar os ímpares consecutivos de x a y
        {

            if (y2%2!=0) // filtragem de ímpares
            {

                somaimpar += y2;
                i2++;

            }

        }


        printf("%d\n", somaimpar);


        // após toda a operação, esvaziar a variável de soma
        somaimpar=0;
        i++;

    }

return 0;

}