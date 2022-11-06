#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);


// CASOS EM QUE A TEMPERATURA DESCEU DO DIA 1 PRO DIA 2 

    if (a>b) 
    {

        if (b>c) // temperatura desceu do dia 2 pro dia 3 
        {

            if ((b-c) < (a-b)) // QUINTA FIGURA 
                printf(":)\n");

            else // SEXTA FIGURA 
                printf(":(\n");

        }

        else // temperatura desceu (1-2), e depois subiu (2-3)
            printf(":)\n");

    }


// CASOS EM QUE A TEMPERATURA SUBIU DO DIA 1 PRO DIA 2 

    else if (a<b)
    {

        if (b<c) // temperatura subiu do dia 2 pro dia 3 
        {

            if ((c-b) < (b-a)) // TERCEIRA FIGURA 
                printf(":(\n");

            else // QUARTA FIGURA  
                printf(":)\n");

        }

        else // temperatura subiu (1-2), e depois desceu (2-3)
            printf(":(\n");

    }


// CASOS EM QUE A TEMPERATURA FOI CONSTANTE DO DIA 1 PRO DIA 2

    else if (b<c)
        printf(":)\n");

    else
        printf(":(\n");


return 0;


}