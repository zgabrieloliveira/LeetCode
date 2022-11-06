#include <stdio.h>
#include <stdlib.h>

int main ()
{


    int l, i, velocidade;

    while (scanf("%d", &l) != EOF)
    {
        
        int lesmas[l];


        for (i=0; i<l; i++) // laço p/ preencher o vetor com a velocidade de cada lesma
        {

            scanf("%d", &lesmas[i]);

        }


        velocidade = lesmas[0]; // a primeira lesma do vetor é a de menor velocidade


        i=1;
        do
        {

            if (lesmas[i] > velocidade) // condição p/ reeorganizar a velocidade de cada lesma do vetor
                velocidade = lesmas[i];

            i++;

        }
        while (i<l);


    // SAÍDA 

        if (velocidade < 10) // Nível 1 
            printf("1\n");
        if (velocidade >= 10 && velocidade < 20) // Nível 2
            printf("2\n");
        if (velocidade >= 20) // Nível 3
            printf("3\n"); 
    }


return 0;


}