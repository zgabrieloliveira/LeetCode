#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, n; // variáveis p/ entrada
    int i=0; // variáveis p/ laço 
    int soma=0; // variáveis p/ saída
    
    scanf("%d", &a);

// LEITURA DE N

    while (1)
    {
        scanf("%d", &n);
        if (n>0)
            break;
    }

// LAÇO DE REPETIÇÃO FINAL (SOMA DE A+i)

    while (i<n)
        soma += (a+i++);
    


    printf("%d\n", soma);
    
return 0;

}