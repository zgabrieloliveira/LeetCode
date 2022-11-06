#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;
    int impares;

    scanf("%d", &x);

    impares = 0;
    while (impares < 6) {

        if (x%2 != 0) {
            printf("%d\n", x);

        impares = impares+1;
        }

    x++;
    }

return 0;

}