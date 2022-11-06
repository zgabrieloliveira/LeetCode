#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char piscada[3]; // vetor armazenando a sequência *- para olhos abertos e fechados
	int olhos; // variável contanto o número de olhos para condicionar o laço
    int soma; // soma resultante das piscadas e gritos do corvo


    for (olhos=3; olhos>=1; olhos--)
	{

		soma=0;

		while (1)
		{

			scanf("%s caw", piscada); // ler as piscadas do corvo, até seu grito

			if (piscada[0] == '*') // olho esquerdo soma 4
				soma += 4;

			if (piscada[1] == '*')
				soma += 2;

			if (piscada[2] == '*') // olho direito soma 1
				soma += 1;

			if (!strcmp (piscada, "caw")) // quando ele gritar outra vez, o programa será encerrado
                break;
				
		}

	    printf("%d\n", soma);

	}


return 0;


}