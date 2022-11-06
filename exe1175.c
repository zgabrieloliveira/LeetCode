#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	int n[20]; // vetor lido
    int i; // variável p/ criação de laços 
    int troca; // variável auxiliar p/ troca 
	
	
    i=0;
	while (i<20) // laço p/ ler os 20 elementos do vetor 
    { 

		scanf("%d", &n[i]);
        i++;
	
	}


    i=0;
	while (i<10) // laço p/ realizar a troca de posições dentro do vetor 
    {

		troca = n[i];
		n[i] = n[19-i];
		n[19-i] = troca;

        i++;

	}
		
	
	i=0;	
	while (i<20) // laço p/ apresentar os resultados da modificação
    { 

		printf("N[%d] = %d\n", i, n[i]);
		
		i++;

	}

return 0;

}