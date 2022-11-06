#include <stdio.h>
#include <stdlib.h>

int main ()
{

// ENTRADA: leitura de variáveis e delimitação da matriz

	int tamanho, linha, coluna;

	while (scanf("%d", &tamanho) != EOF)
	{

		int matriz[tamanho][tamanho];

        if (tamanho == 0) // não aceitar valores zerados
		    return 0;


// PROCESSAMENTO: preenchendo a matriz através de laços de repetição 

		for (linha = 0; linha < tamanho; linha++)
			for (coluna = 0; coluna < tamanho; coluna++)
			{

				if (linha == coluna)
					matriz[linha][coluna] = 1;
				if (linha == tamanho - coluna - 1)
					matriz[linha][coluna] = 2;
				if (linha != coluna && linha != tamanho - coluna - 1)
					matriz[linha][coluna] = 3;

			}


// SAÍDA: imprimindo a matriz

		for (linha = 0; linha < tamanho; linha++)
		{
            
			for (coluna = 0; coluna < tamanho; coluna++)
            {

				printf("%d", matriz[linha][coluna]);

            }

			printf("\n");

		}

	}


return 0;


}