#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA

    int n, i;
    float v1, v2, v3, media;

    scanf("%d", &n);

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO

    for (i=0; i<n; i++) {
        scanf ("%f %f %f", &v1, &v2, &v3);

        media = (v1*2.0 + v2*3.0 + v3*5.0)/10.0;

// SAÍDA

        printf ("%.1f\n", media);

    }

return 0;

}
