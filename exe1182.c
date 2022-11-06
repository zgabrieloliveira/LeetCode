#include <stdio.h>
#include <stdlib.h>

int main ()
{

    double m[12][12], soma=0, media=0, elemento;
    int c, i, j;
    char t;

    scanf("%d %c", &c, &t);

// LER VALORES P/ LINHAS E COLUNAS DE M[12][12]

    for (i=0; i<12; i++)
    {

        for (j=0; j<12; j++)
        {

            scanf("%lf", &elemento);
            m[i][j] = elemento;

        }

    }


// SOMA 

    if (t == 'S')
    {

        j = c;
        do
        {
        
            i=0;
            while (i<12)
            {

                soma += m[i][j];
                i++;

            }

            printf("%.1lf\n", soma);
            j++;

        }
        while (j == c);

    }


// MÉDIA 

    else if (t == 'M')
    {

        j = c;
        do
        {
            
            i=0;
            while (i<12)
            {

                media += m[i][j];
                i++;

            }

            printf("%.1lf\n", media/12);
            j++;

        }
        while (j == c);

    }


return 0;


}