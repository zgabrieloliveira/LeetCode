#include <stdio.h>
#include <stdlib.h>

int main () {

// ENTRADA

    int x, y, i, soma=0;

    scanf("%d %d", &x, &y);

// MANIPULA��O DE DADOS COM LA�O DE REPETI��O

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


// SA�DA

    printf("%d\n", soma);

return 0;

}


