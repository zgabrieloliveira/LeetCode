#include <stdio.h>
#include <stdlib.h>

int main() {

// ENTRADA DE DADOS

    float nota, media, validas=0, x=0;

// MANIPULA��O DE DADOS COM LA�O DE REPETI��O

    while(1) {

        if (validas==2) {
            break;
        }

        scanf("%f", &nota);

        if (nota>=0 && nota<=10) {
            validas++;
            x+=nota;
        }
        else {
            printf("nota invalida\n");
        }

    }

// SA�DA DO PROGRAMA

    media = x/2.00;

    printf("media = %.2lf\n", media);

return 0;

}
