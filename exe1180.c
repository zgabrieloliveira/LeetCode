#include <stdio.h>
#include <stdlib.h>
#define n 1000

int main()
{

	int i; // variável p/ criação de laços
	int n2; // variáveis p/ leitura 
	int posicao, menor; // variáveis p/ armazenamento de dados específicos
	int x[n]; // vetor armazenamento valores n 
	
	scanf("%d", &n2);

	if (n2<1 || n2>1000) // n2 deve estar entre 1 e 1000
		scanf("%d", &n2); 
	

	i=0;
	while (i<n2) // laço p/ preencher o vetor x 
	{
		scanf("%d", &x[i]);
		i++;
	}
	

	menor = x[0]; // o menor valor do vetor deve ficar na primeira posicao

	i=0;
	do
	{

		if(x[i] < menor)
		{
			posicao = i;
			menor= x[i];
		}

		i++;

	}
	while (i<n2);
	
// SAÍDA 

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	

return 0;


}