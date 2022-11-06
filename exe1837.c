#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, a2, b, b2; // variáveis p/ leitura e manipulação de dados
    int q, r; // variáveis resultantes, com a saída do programa

    scanf("%d %d", &a, &b);

    if (a<0) // caso A seja negativo, o cálculo precisa passar por mais etapas
    {


    // se A for negativo, B não pode ser
        b2=b; 
        if (b<0)
            b2 = b*-1;


        for (r=0; r<b2; r++)
        {
            a2 = a-r;

            if (a2%b==0) 
                break;
        }

        q=a2/b;  

    }
    else
    {
        q = a/b;
        r = a%b;
    }

    printf("%d %d\n", q, r);


return 0;


}