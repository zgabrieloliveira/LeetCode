#include <stdio.h>
#include <stdlib.h>

int main ()
{

  double m[12][12], soma=0, media=0, elemento;
  int l, i, j;
  char t;


    scanf("%d %c", &l, &t);


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

        i = l;
        do
        {
            
            j=0;
            while (j<12)
            {

                soma += m[i][j];
                j++;

            }

            printf("%.1lf\n", soma);
            i++;

        }
        while (i == l);

    }


// MÉDIA

    else if (t == 'M')
    {

        i = l;
        do
        {
            
            j=0;
            while (j<12)
            {

                media += m[i][j];
                j++;

            }

            printf("%.1lf\n", media/12);
            i++;

        }
        while (i == l);

    }


return 0;


}
