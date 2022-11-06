#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n, i, i2=0, i3=1, i4=0;

// LEITURA DA QUANTIDADE N DE NÚMEROS NA SEQUÊNCIA

    scanf("%d", &n);

// COMEÇO DA SEQUÊNCIA (0-1)

    if (n==0 || n==1)
        printf("%d ", i2);


    printf("%d ", i2);

// CONTINUIDADE (2-n)

    for (i=2; i<n; i++)
    {
        i2 = i3;
        i3 = i4;
        i4 = i2+i3;
        printf("%d ", i4);
    }

// ÚLTIMO NÚMERO DA SEQUÊNCIA FIBONACCI (REFERENTE A N)

    printf("%d\n", i4+i3);


return 0;

}