#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int idade, qnt=0; // variáveis p/ leitura e contagem 
    float idade2=0, media; // variáveis p/ cálculo de média

    do // laço p/ ler e calcular idades, quando elas forem válidas
    {
        scanf("%d", &idade);

        if (idade<0) // caso a idade seja negativa (impossível)
            break;

        idade2 += idade; // conversão Int-Float, afim de calcular média
        qnt++;
        media = idade2/qnt;

    }
    while (idade>0);


    printf("%.2f\n", media);


return 0;

}