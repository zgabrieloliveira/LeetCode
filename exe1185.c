#include <stdio.h>
#include <stdlib.h>

int main()
{
	double m[12][12], soma=0.0, media=0.0;
	int i, j, ij=10;
	char o;


	scanf("%c", &o);


    // lendo valores p/ linhas e colunas de m[12][12]
    for (i=0; i<12; i++)
        for (j=0; j<12; j++)
            scanf("%lf", &m[i][j]);


    // delimitando o cálculo p/ somente elementos dentro da área verde
    i=0;
    while (i<11)
    {
        
        j=0;
        do 
        {

            soma += m[i][j];
            j++;
        }
        while (j<=ij);

        ij--;
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

