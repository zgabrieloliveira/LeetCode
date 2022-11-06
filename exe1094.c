#include <stdio.h>
#include <stdlib.h>

int main() {

// ENTRADA

    char cobaia;
    int n, qnt, c=0, r=0, s=0, total=0;
    float percentualc, percentualr, percentuals;

    scanf ("%d", &n);

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO

    while (n--) {
        scanf ("%d %c", &qnt, &cobaia);

        if (cobaia == 'C') {
            c+=qnt;
        }
        if (cobaia == 'R') {
            r+=qnt;
        }
        if (cobaia == 'S') {
            s+=qnt;
        }

        total+=qnt;

    }

    percentualc = (float)c/total*100;
    percentualr = (float)r/total*100;
    percentuals = (float)s/total*100;

// SAÍDA

    printf("Total: %i cobaias\n", total);
    printf("Total de coelhos: %i\n", c);
    printf("Total de ratos: %i\n", r);
    printf("Total de sapos: %i\n", s);
    printf("Percentual de coelhos: %.2f %%\n", percentualc);
    printf("Percentual de ratos: %.2f %%\n", percentualr);
    printf("Percentual de sapos: %.2f %%\n", percentuals);

return 0;

}
