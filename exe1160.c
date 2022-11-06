#include <stdio.h>
#include <stdlib.h>

int main ()
{

    // variáveis p/ leitura  
    int t, pa, pb;
    double g1, g2;

    // variáveis p/ criação de laços e manipulação de dados 
    int anos=0, i=0;


    scanf("%d", &t); 


    do // laço base em que todas as operações ocorrerão, de acordo com um número t de casos
    {

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (pa<=pb && anos<101) // laço p/ formular a previsão de PA superar PB (quando demorar menos de 100 anos)
        {

            pa += ((pa*g1)/100);
            pb += ((pb*g2)/100);

            anos++;

        }

        if (anos>100) // caso geral, em que o tempo necessário para pa>pb seja mais que 100 anos
        {
            printf("Mais de 1 seculo.\n");
        }
        else // caso detalhado, em que o tempo necessário para pa>pb é menor que 100 anos 
        {
            printf("%d anos.\n", anos);
        }

        // após toda a operação, a variável em que armazena a quantidade de anos de cada caso deve ser esvaziada
        anos = 0;

        i++;

    }
    while (i<t);


return 0;


}