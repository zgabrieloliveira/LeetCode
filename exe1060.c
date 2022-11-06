#include <stdio.h>

int main () {

//ENTRADA 

    int qnt;
    int positivos;
    float x;

    positivos = 0;
    qnt = 1;

    while (qnt <= 6) {
        scanf ("%f", &x);

        if (x > 0)
            positivos = positivos+1;

        qnt = qnt+1;
    }

//SAIDA 

    printf("%d valores positivos\n", positivos);

return 0;

}