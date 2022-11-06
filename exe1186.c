#include <stdio.h>
#include <stdlib.h>

int main()
{

    char o;
    int i, j;
    double m[12][12], soma=0.0, media=0.0;


    scanf("%c", &o); 

    
    // lendo valores p/ linhas e colunas de m[12][12]
    for (i=0; i<12; i++)
        for (j=0; j<12; j++)
            scanf("%lf", &m[i][j]);


    // delimitando o cálculo apenas para elementos na área verde
    i=1;
    while (i<=11)
    {

        j=11;
        do
        {

            soma += m[i][j];
            j--;

        }
        while (j>11-i);

        i++;

    }


// SOMA 

    if (o == 'S')
    {

        printf("%.1lf\n", soma);

    }


// MÉDIA 

    else if (o == 'M')
    {

        media = soma/66.0;
        printf("%.1lf\n", media);

    }


return 0;


}