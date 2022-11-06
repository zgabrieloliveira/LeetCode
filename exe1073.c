#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, quadrado;

    scanf("%i", &n);

    for (i=2; i<=n; i=i+2) {
        quadrado = i*i;
        printf("%i^2 = %i\n", i, quadrado);
    }

return 0;

}