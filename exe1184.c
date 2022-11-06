#include <stdio.h>
#include <stdlib.h>

int main()
{
	double m[12][12], soma=0.0, media=0.0;
	int i, j, y=0;
	char o;


	scanf("%c", &o);


// SOMA 

    if (o == 'S')
    {
        
        for (i=0; i<12; i++)
            for (j=0; j<12; j++)
            {

                scanf("%lf", &m[i][j]);

                if (i>j)
                    soma += m[i][j];

            }
                
        printf("%.1lf\n", soma);

    }


// MÉDIA 

    if (o == 'M')
    {
    
        for (i=0; i<12; i++)
            for (j=0; j<12; j++)
            {

                scanf("%lf", &m[i][j]);

                if (i>j)
                {
                    media += m[i][j];
                    y++;
                }

            }

        printf("%.1lf\n", media/y);

    }


return 0;


}