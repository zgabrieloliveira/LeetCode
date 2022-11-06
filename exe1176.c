#include <stdio.h>
#include <stdlib.h>

int main()
{

   long long int n, a, b, c, prox;
   int i=1, t; 

    scanf("%d", &t);

    do 
    {

        a=0, b=1;

        scanf("%lld", &n);
        n=n+1;

        for (c=0; c<n; c++)
        {

            if (c<=1) 
            {
                prox = c;
            }
            else
            {
                prox = a + b;
                a = b;
                b = prox;
            }

        }

        printf("Fib(%lld) = %lld\n", n-1, prox);

        i++;

    }
    while (i<=t);

return 0;


}