#include <stdio.h>
#include <stdlib.h>

int main () {

// ENTRADA

    int i, x, n, in, out;

    scanf("%d", &n);

    in = 0;
    out = 0;
    i=1;

// MANIPULA��O DE DADOS COM LA�O DE REPETI��O

    while (i<=n) {
        scanf("%d", &x);

        if (x>=10 && x<=20) {
            in++;
        }

        if (x<10 || x>20) {
            out++;
        }

    i++;
    }

// SA�DA

    printf("%d in\n", in);
    printf("%d out\n", out);

return 0;

}
