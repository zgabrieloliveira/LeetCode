#include <stdio.h>
#include <stdlib.h>

int main()
{

    double m[12][12], soma=0.0, media=0.0;
	char o[2];
	int  i, j, inicio=1, fim=11, y=0;
	
    
	scanf("%s", o);
	

// LER VALORES P/ LINHAS E COLUNAS DE M[12][12]

	for (i=0; i<12; i++)
	{

		for (j=0; j<12; j++)
		{
			scanf("%lf", &m[i][j]);
		}

	}


// SOMA 

    if (o[0] == 'S')
    {
        
        i=11;
        do
        {

            for (j=inicio; j<fim; j++) // delimitando o espaço da matriz conforme a área verde
            {

                soma += m[i][j];
                y += 1;

            }

            fim -= 1;
            inicio += 1;
            i--;

        }
        while (i>6);

        printf("%.1lf\n", soma);

    }


// MÉDIA 

    else if (o[0] == 'M')
    {
        
        i=11;
        do 
        {

            for (j=inicio; j<fim; j++) // delimitando o espaço da matriz conforme a área verde
            {

                media += m[i][j];
                y += 1;

            }

            fim -= 1;
            inicio += 1;
            i--;

        }
        while (i>6);

        printf("%.1lf\n", media/y);

    }


return 0;


}