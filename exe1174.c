#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double a[100]; // vetor p/ leitura 
	int i; // variáveis p/ criação de laços 
	
    i=0;
	while (i<=99) // laço p/ ler 100 números de entrada 
    {
        
		scanf("%lf", &a[i]);
        i++;
        
	}

    i=0;
    while (i<=99) // laço p/ preencher o vetor apenas com números menores ou iguais a 10
    {
        
		if (a[i] <= 10)
        {
			printf("A[%d] = %.1lf\n", i, a[i]);
		}
		
        i++;
        
	}

return 0;

}