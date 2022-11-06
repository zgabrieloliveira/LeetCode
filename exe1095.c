#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA E MANIPULAÇÃO DE DADOS 

    int i, j;

    for (i=1, j=60; j>=0; i+=3, j-=5) {

//SAÍDA 

        printf("I=%d J=%d\n", i, j);

// FIM DO LAÇO   

        if (j==0) {
            break;
        }

    }
        
return 0;

}