#include <stdio.h>
#include <stdlib.h>

int main () {

// ENTRADA

    int x, y, i, soma=0;

    scanf("%d %d", &x, &y);

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO

    if (x>y) {

        for (i=y; i<=x; i++) {

            if (i%13!=0)
                soma+=i;
        }
    }

    else {
        for (i=x; i<=y; i++) {

            if (i%13!=0)
                soma+=i;
        }
    }


// SAÍDA

    printf("%d\n", soma);

return 0;

}


