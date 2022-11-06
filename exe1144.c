#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i; // variáveis p/ laço 
    int a, b; // variáveis p/ sequência
    int a2, b2; // variáveis p/ continuidade da sequência

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        a = i*i;
        b = i*i*i;
        printf("%d %d %d\n", i, a, b);

        a2 = a+1;
        b2 = b+1;
        printf("%d %d %d\n", i, a2, b2);
    }

return 0;
}
