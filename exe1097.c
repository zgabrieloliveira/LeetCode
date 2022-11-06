#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA E MANIPULAÇÃO DE DADOS

    int i, j, x;

    i=1;
    j=7;
    x=0;
    while (i<=9) {

        printf("I=%d J=%d\n", i, j);

        j--;
        x++;

        if (x==3) {
            i+=2;
            j+=5;
            x=0;
        }

    }

return 0;

}
