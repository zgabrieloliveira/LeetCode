#include <stdio.h>
#include <stdlib.h> 

int main () {

//ENTRADA 

    int qnt;
    int pares;
    int valores;

    pares = 0;

    for (qnt = 1; qnt <= 5; qnt++) {

        scanf ("%d", &valores);
        if (valores%2==0)
            pares = pares+1;

    }

//SAIDA 

    printf("%d valores pares\n", pares);

return 0;

}