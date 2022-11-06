#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;
    int qnt;

    scanf ("%d", &x);

    for (qnt = 1; qnt <= x; qnt++) {
        
        if (qnt%2 != 0)
            printf ("%d\n", qnt);

    }

return 0;

}
