#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA E MANIPULAÇÃO DE DADOS 

    int i, j;

    for (i=1; i<=9; i+=2) {
        
        for (j=7; j>=5; j--)
        
//SAÍDA 

        printf("I=%d J=%d\n", i, j);

// FIM DO LAÇO   

        if (i==9 && j==5) {
            break;
        }
    }
        
return 0;

}