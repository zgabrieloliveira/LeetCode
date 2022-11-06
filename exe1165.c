#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


// ENTRADA DO PROGRAMA 

    int n, i, i2; // variáveis p/ laço de repetição 
    int x, divisaodiferente; // variáveis p/ leitura e manipulação de dados

    scanf("%d", &n);
    
    if (n<1 || n>100) // caso n seja inválido, ler novamente
        scanf("%d", &n);


// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO 

    while (i<n)
    {

        scanf("%d", &x);

        if (x<=1 || x>pow(10,7)) // caso x seja inválido, ler novamente
            scanf("%d", &x);

        divisaodiferente=1;
        for (i2=2; i2<=(int)sqrt(x); i2++) // laço de repetição p/ filtrar números primos
        {
            if (x%i2==0) 
                divisaodiferente++;
        }


// SAÍDA DO PROGRAMA 

        if (divisaodiferente==1 && x!=1) 
        {
            printf("%d eh primo\n", x);
        }
        else 
        {
            printf("%d nao eh primo\n", x);
        }
        
        i++;

    }

return 0;

}