#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA DE DADOS

    int x, i;
    int posicao, maior;

    maior = 0;

//PROCESSAMENTO E MANIPULA��O

    i=1;
    while (i<=100) {
        scanf("%d", &x);

        if (maior < x) {
            maior = x;
            posicao = i;
        }

    i++;
    }

//SA�DA

    printf("%d\n", maior);
    printf("%d\n", posicao);

return 0;

}
