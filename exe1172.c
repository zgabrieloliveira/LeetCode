#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int x[10], i, a=0;
	
	for (i=0; i<10; i++)
    {

		scanf("%d", &x[i]);

		if (x[i]<=0) // caso i seja positivo ou nulo
        {
			printf("X[%d] = 1\n", a++);
		}
        else // caso i seja positivo
        {
			printf("X[%d] = %d\n", a++, x[i]);
		}

	}

return 0;

}