#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    int n, i; // variávies p/ laço de repetição 
    int x, y; // variáveis p/ leitura e manipulação de dados
    int somadedivisores=0; // variávies p/ soma dos divisores


// LEITURA DE VARIÁVEIS 

    scanf("%d", &n); 

    if (n<1 || n>20) // caso n seja inválido, ler novamente
        scanf("%d", &n);
        
        

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO 

    while (i<n)
    {
        scanf("%d", &x);
        
        if (x<1 || x>pow(10, 8)) // caso x seja inválido, ler novamente
            scanf("%d", &x);

        for (y=1; y<x; y++) // laço de repetição para somar divisores de x
        {
            if (x%y==0)
            {
                somadedivisores += y;
            }
        }



// SAÍDA 

        if (somadedivisores == x)
        {
            printf("%d eh perfeito\n", x);
        }

        else {
            printf("%d nao eh perfeito\n", x);
        }

        somadedivisores=0;

        i++;

    }


return 0;

}