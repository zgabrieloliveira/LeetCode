#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int x, z; // variáveis p/ leitura 
    int soma=1, x2=0; // variáveis p/ operações em laço

    scanf("%d %d", &x, &z);

    while (z<x || z==x) // laço p/ ler z até ele superar x
        scanf("%d", &z);

    x2=x;

    while (x2<=z) // laço p/ contar x até sua soma superar z
    {
        x++;
        soma++;
        x2+=x;
    }

    printf("%d\n", soma); // soma mínima necessária p/ x superar z

return 0;

}