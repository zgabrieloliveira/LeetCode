#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;
    int x, y, entrexy, somadeimpares;

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d %d", &x, &y);

        somadeimpares=0;

        if (x>y) {
            x += y;
            y = x-y;
            x -= y;
        }

        for (entrexy = x+1; entrexy<y; entrexy++) {

            if (entrexy%2!=0) {
                somadeimpares += entrexy;
            }

        }

        printf("%d\n", somadeimpares);

    }

return 0;

}
