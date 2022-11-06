#include <stdio.h>
#include <stdlib.h>

int main() {

    float i, j, incremento;
    int x, y;

    for (i=0, j=1, incremento=0, x=0, y=0; i<2.2; j++) {

// I e J como valores inteiros

        if (y==0) {
            printf("I=%.0f J=%.0f\n", i, j);
        }

// I e J como valores de ponto flutuante

        else {
            printf("I=%.1f J=%.1f\n", i, j);
        }

        x++;

// Ordem de progressão obedecida pelos valores e I e J

        if (x==3) {
            i += 0.2;
            incremento += 0.2;
            j = incremento;
            x = 0;
            y++;
        }
        if (y==5) {
            y = 0;
        }

    }

return 0;

}
