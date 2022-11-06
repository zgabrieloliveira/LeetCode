#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, n, x, y;

    scanf ("%d", &n);

    i=0;
    while (i<n) {
        scanf ("%d %d", &x, &y);

        if (!y) {
            printf ("divisao impossivel\n");
        }
        else {
            printf ("%.1lf\n", x/(double)y);
        }

    i++;
    }

return 0;

}
