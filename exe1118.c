#include <stdio.h>
#include <stdlib.h>

int main() {

// ENTRADA E LEITURA DE VARI�VEIS

    double n1, n2, media;
    int x, i;

    scanf("%lf", &n1);

// NOTA PRIMEIRA AVALIA��O INV�LIDA

    while (n1<0 || n1>10) {
        printf("nota invalida\n");
        scanf("%lf", &n1);
    }

    scanf("%lf", &n2);

// NOTA SEGUNDA AVALIA��O INV�LIDA

    while (n2<0 || n2>10) {
        printf("nota invalida\n");
        scanf("%lf", &n2);
    }

// M�DIA DAS DUAS AVALIA��ES

    media = (n1+n2)/2;
    printf("media = %.2lf\n", media);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);

    for(i=0; i<1; i++) {

// RESPOSTA DO USU�RIO DIFERENTE DE 1 ou 2

        while (x!=1 && x!=2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }

// RESPOSTA DO USU�RIO IGUAL A 1, COM NOVA EXECU��O DO ALGORITMO

        while (x==1) {
            scanf("%lf", &n1);

            while (n1<0 || n1>10) {
                printf("nota invalida\n");
                scanf("%lf", &n1);
            }

            scanf("%lf", &n2);

            while(n2<0 || n2>10) {
                printf("nota invalida\n");
                scanf("%lf", &n2);
            }

            media = (n1+n2)/2;
            printf("media = %.2lf\n", media);
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);

            }

// RESPOSTA DO USU�RIO IGUAL A 2, COM FIM DO PROGRAMA

        if (x==2) {
            i++;
            break;
        }

    i--;

    }

return 0;

}

