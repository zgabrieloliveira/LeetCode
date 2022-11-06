#include <stdio.h>
#include <stdlib.h>

int main () {

// ENTRADA

    int i, positivos;
    float soma, x;

    soma = 0;
    positivos = 0;
    i = 1;

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO

    while (i <= 6) {
        scanf("%f", &x);

        if (x>0) {
            positivos++;
            soma = soma+x;
        }

    i++;

    }

// SAÍDA

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", soma/positivos);

return 0;

}
