#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int x, i=0;

    scanf("%d",&x);

    while (i<10)
    {
        printf("N[%d] = %d\n",i, x);
        x += x;
        i++;
    }

return 0;

}