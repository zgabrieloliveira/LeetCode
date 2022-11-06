#include <stdio.h>
#include <stdlib.h>

int main ()
{

// ENTRADA: leitura de variáveis e delimitação da matriz

	int tamanho, coluna, linha, inicio, fim, elemento;

	while (1)
	{

		scanf("%d", &tamanho);

		int m[tamanho][tamanho]; // matriz com valores de linha e coluna na entrada
        
		if (tamanho==0) // não aceitar valores zerados
			return 0;

		inicio = 0;
		fim = tamanho;
		elemento = 1;


// PROCESSAMENTO: preenchendo a matriz através de laços de repetição 

		while(1)
		{

			for (linha = inicio; linha < fim; linha++)
				for (coluna = inicio; coluna < fim; coluna++)
					m[linha][coluna] = elemento;

			if (fim==0)
				break;

			fim--;
			inicio++;
			elemento++;

		}


// SAÍDA: imprimindo a matriz

		for (linha = 0; linha < tamanho; linha++)
		{
			for (coluna = 0; coluna < tamanho; coluna++)
			{

				if (coluna==0)
					printf("%3d", m[linha][coluna]);
				else
					printf(" %3d", m[linha][coluna]);

			}

			printf("\n");
		}

		printf("\n");

	}


return 0;


}