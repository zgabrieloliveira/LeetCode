#include <stdio.h>
#include <stdlib.h>

int main ()
{

// ENTRADA: leitura de variáveis e delimitação da matriz

	int tamanho, linha, coluna;

	while (1)
	{

		scanf("%d", &tamanho);

		int matriz[tamanho][tamanho];  // matriz com valores de linha e coluna definidos na entrada 

		if (tamanho == 0) // não aceitar valores zerados
			return 0;


// PROCESSAMENTO: preenchendo a matriz através de laços de repetição 

		for (linha = 0; linha < tamanho; linha++)
			for (coluna = 0; coluna < tamanho; coluna++)
			{
				if (linha == coluna)
					matriz[linha][coluna] = 1;
				if (linha < coluna)
					matriz[linha][coluna] = coluna - linha + 1;
				if (linha > coluna)
					matriz[linha][coluna] = linha - coluna + 1;
			}


// SAÍDA: imprimindo a matriz

		for (linha = 0; linha < tamanho; linha++)
		{

			for (coluna = 0; coluna < tamanho; coluna++)
			{

				if (coluna == 0)
					printf("%3hd", matriz[linha][coluna]);
				else
					printf(" %3hd", matriz[linha][coluna]);

			}

			printf("\n");

		}

		printf("\n");

	}


return 0;


}