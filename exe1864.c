#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

// life is not a problem to be solved 

    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n, letra=0;

    scanf("%d" , &n); 

    while (letra<=n) // laço p/ imprimir a quantidade n de letras da frase pré-definida
    {

        printf("%c", frase[letra]);
        letra++;
        
        if (letra==n)
        {
            printf("\n");
            break;
        }
        
    }


return 0;


}