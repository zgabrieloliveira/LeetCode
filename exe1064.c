#include <stdio.h>
#include <stdlib.h>

int main () {

// ENTRADA

    int i, positivos;
    float soma, x;

    soma = 0;
    positivos = 0;
    i = 1;

// MANIPULA��O DE DADOS COM LA�O DE REPETI��O

    while (i <= 6) {
        scanf("%f", &x);

        if (x>0) {
            positivos++;
            soma = soma+x;
        }

    i++;

    }

// SA�DA

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", soma/positivos);

return 0;

}
