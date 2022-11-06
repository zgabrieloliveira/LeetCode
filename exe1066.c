#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA 

    int valores;
    int pares, impares;
    int positivos, negativos;
    int qnt;

    valores = 0;
    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;
    qnt = 1;

    while (qnt <= 5) {
        scanf("%d", &valores);

        if (valores%2 == 0)
            pares = pares+1;
        
        if (valores%2 != 0)
            impares = impares+1;
        
        if (valores > 0)
            positivos = positivos+1;
        
        if (valores < 0)
            negativos = negativos+1;

        qnt = qnt+1;
        
    }

//SAIDA 

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

return 0;

}