#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA DO PROGRAMA E LEITURA DE VARIÁVEIS 

    int n, i;
    int a=1, b=2, c=3;

    scanf("%d", &n);

// LAÇO DE REPETIÇÃO E SAÍDA DO PROGRAMA 

    for (i=0; i<n; i++)
    {
        printf("%d %d %d PUM\n", a, b, c);
        a+=4;
        b+=4;
        c+=4;
    }

return 0;

}