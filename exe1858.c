#include <stdio.h>
#include <stdlib.h>

int main()
{

	int n, t; // variáveis p/ leitura de número n de pessoas e um número t de tiros que Theon pode levar
    int  i; // variável p/ laço baseado em n pessoas que Theon pode acusar
    int tiros_ramsay=20; // Ramsay tem o limite de 20 tiros, que pode variar de acordo com a resposta de Theon
    int resposta_theon; // variável resultante, com o número da resposta correta de Theon
	

	scanf("%d", &n);
	

	for (i=1; i<=n; i++)
    {

		scanf("%d", &t);


        /* caso Theon acerte quem é o algoz antes do limite de tiros de Ramsey (21), 
           imprimir o número i dessa possibilidade */
		if (t < tiros_ramsay)
        { 
            tiros_ramsay = t;
            resposta_theon = i;
        }

	}

	printf("%d\n", resposta_theon);
	

return 0;


}
