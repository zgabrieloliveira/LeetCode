#include <stdio.h>
#include <stdlib.h>

int main () {

//ENTRADA 
    
    int x, y;
    int i, soma;

    scanf("%d %d", &x, &y);

    soma = 0;
    
//PROCESSAMENTO

    if (x < y) {
        for (i = x+1; i < y; i++) {
            if (i%2 != 0) {
                soma += i;
            }
        }
    }

    else {
        for (i = y+1; i < x; i++) {
            if (i%2 != 0) {
                soma += i;
            }
        }
    }

//SAÍDA 

    printf ("%d\n", soma);

return 0;

}